#include <stdio.h>
# define IN 1 /* en la palabra*/
# define OUT 0 /* fuera de una palabra*/

int main(){
        char p[] = "lineas-Palabras-Caracteres";
        int c, nl, nw, nc, state;

        nl = nw = nc = 0;
        state = OUT;

        while ((c = getchar()) != EOF){
            ++nc;
            if(c == '\n')
                ++nl;
            if(c == ' ' || c == '\n' || c == '\t' )
                state = OUT;
            else if (state == OUT)
            {
                state = IN;
                ++nw;
            }
            printf("%s\n", p);
            printf("%d %d %d\n", nl, nw, nc);
        }
}
