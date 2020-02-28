/* falto algo para dejar los espacio de 1*/

#include <stdio.h>

int main(){
    char c;
    char comparacion = ' ';
    char espacios;
    while ((c = getchar()) != EOF)
     if (c != comparacion){
         putchar(c);
         espacios = 'a';
     }

     if (c == ' '){
         if ('a' == espacios)
         {
             printf(" ");
             espacios = 'b';
         }  
     }  
}
