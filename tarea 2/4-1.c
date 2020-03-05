#include <stdio.h>

int strrindex( char s[], char t )
{
  int i;
  int count = -1;

  for(i=0; s[i] != '\0'; i++)
  {
    if(s[i] == t)
    {
      count = i;
    }
  }
  return count;
}
typedef struct TEST
{
  char *data;
  char testchar;
  int expected;
} TEST;

int main(void)
{
  TEST test[] =
  {
    {"Hello world", 'o', 7},
    {"Esta cadena está llena de is", 'i', 32},
    {"No hay letras de 'ver' aquí", 'c', -1}
  };

  size_t numtests = sizeof test / sizeof test[0];
  size_t i;

  char ch = 'o';
  int pos;

  for(i = 0; i < numtests; i++)
  {
    pos = strrindex(test[i].data, test[i].testchar);

    printf("Buscando %s para la última aparición de %c.\n",
           test[i].data,
           test[i].testchar);

    printf("Resultado Esperado: %d\n", test[i].expected);
    printf("%sorrect (%d).\n", pos == test[i].expected ? "C" : "Inc", pos);
    if(posi != -1)
    {
      printf("El caracter encontrado fue %c\n", test[i].data[pos]);
    }
  }

  return 0
}