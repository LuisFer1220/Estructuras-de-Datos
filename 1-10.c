#include <stdio.h>
int main(){

    char c, f;
    while ((c = getchar()) != EOF){
        if (c == '\\'){
           putchar('\\');
           putchar('\\');
           f = 1;
        }
        if (c == '\t'){
            putchar('\\');
            putchar('t');
            f = 1;
        }
        if (c == '\b'){
            putchar('\\');
            putchar('b');
            f = 1;
        }
        if (f == 0){
            putchar(c);
        }       
    }
    return 0;
}