#include <stdio.h>
int main(){
    float fahr, celsius;
    int lower, upper, step;
    char string1[] = "Fahrenheit  ";
    char string2[] = "Celsius";

    
   
    lower = 0; /* Limite inferior*/
    upper = 300; /* Limite superior*/
    step = 20; /*Tamaño del incremento*/

    printf("%s",string1);
    printf("%s\n",string2);
   

    fahr = lower;
    while(fahr <= upper){
        fahr =  (celsius*9.0/5.0)+32 ;
        printf("%3.0f %6.1f\n", fahr, celsius);
        celsius = celsius + step;
    }
}