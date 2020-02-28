#include <stdio.h>
int convierte( int fahrenheit );/*funcion convertir*/
int main(){ /*Funcion main*/      
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("\nFahrenheit   Celsius:\n");

    while ( fahr <= upper ){  
        celsius = convierte(fahr);/*llamada a la funcion convertir*/
        printf("%10.0f%11.1f\n", fahr, celsius );
        fahr+=step;
    }  
    return 0;
}         

    /*Funcion para convertir*/
int convierte( int fahr ){
    int l;
    l=(5 * (fahr-32)) / 9;
    return l;