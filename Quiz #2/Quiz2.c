# include <stdio.h>
# include <stdlib.h>
int main(){
    
    int pisos, ventanas;
    char nombre_Empresa[20];
    float altura;
    double ancho;

    printf("Introduzca una cantidad entera de pisos del edificio\n");
    scanf("%d", &pisos);
    printf("Introduzca una cantidad entera de ventanas del edificio\n");
    scanf("%d", &ventanas);
    printf("Introduzca un texto maximo 20 letras para dar nombre ha dicho edificio\n");
    scanf("%s", nombre_Empresa);
    printf("Introduzca un numero con decimales para representar la altura del edificio\n");
    scanf("%f", &altura);
    printf("Introduzca un numero con decimales para representar el ancho del edificio\n");
    scanf("%lf", &ancho);
    printf("   \n\nResultados\n\n");
    printf("Cantidad de pisos: %d\n", pisos);
    printf("Cantidad de ventanas: %d\n", ventanas);
    printf("Nombre de la empresa: %s\n", nombre_Empresa);
    printf("Altura del edificio: %f\n", altura);
    printf("Ancho del edificio: %lf\n", ancho);
    
}


