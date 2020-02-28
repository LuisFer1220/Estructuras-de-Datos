#include <stdio.h>
#define IN 1 /*Dentro de la palabra*/
#define OUT 0 /*Fuera*/


/*Imprimir entrada palabra por cada linea*/
int main(){
        
        char p, state;
        state = IN;

        while ((p = getchar()) != EOF){
            
            if(p != ' ' && p != '\n' && p != '\t' ){
                state = OUT;
                putchar(p);
            }
            else if (state == OUT){
                    state = IN;
                    putchar('\n');
            }
        }    
}