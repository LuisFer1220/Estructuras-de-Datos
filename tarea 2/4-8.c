#include <stdio.h>

int buf = EOF; /* buffer para desbloquear */

int getch(void) /* obtener un caracter (posiblemente rechazado) */
{
  int temp;

  if (buf != EOF) {
    temp = buf;
    buf = EOF;
  } else {
    temp = getchar();
  }
  return temp;                          
}
 
void desbloquear(int c) /* empujar el carácter de regreso */
{
  if(buf != EOF)
    printf("desbloquear: demasiados caracteres\n");
  else       
    buf = c;
}
 
int main(void)
{
  int c;

  while ((c = getch()) != EOF) {
    if (c == '/') {
      putchar(c);
      if ((c = getch()) == '*') { 
        desbloquear('!');
      }         
    } 
    putchar(c);               
  }
  return 0;
}