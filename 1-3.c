#include <stdio.h>
int main(){
    float fahr, celsius;
    int lower, upper, step;
    char string1[] = "Celsius /";
    char string2[] = " Fahrenheit";

    
   
    lower = 0; /* Limite inferior*/
    upper = 300; /* Limite superior*/
    step = 20; /*Tamaño del incremento*/

    printf("%s",string1);
    printf("%s\n",string2);
   

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}