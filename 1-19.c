#include<stdio.h>               
#define TAMANO 1000                   
int obtenercar(char[TAMANO + 1], int);//funcion obtener linea            
void imprime(char[], int);//imprime los caracteres al revés        
int main(){ //Funcion main          
    printf("\nEste programa imprime los caracteres en reversa. \n");        
    printf("Introduzca texto: ");                      
    char string[TAMANO + 1];            
    int caracteres_recibidos = 0;                     
    caracteres_recibidos = obtenercar( string, TAMANO); 
    //manda los datos a la funcion obtenerlinea             
    imprime( string, caracteres_recibidos);  
    //manda los datos a la funcion imprime                      
    return 0;              
} 

int obtenercar( char entrada[], int longitud){   
    //funcion para saber la cantidad de caracteres        
    int c = 0;            
    int contador = 0;            
    int i = 1;                            
    while ( (c = getchar()) != EOF )        
    {       
    if ( contador++ < longitud )          
    entrada[i++] = c;                            
}                     
return i;                            
}     
               
void imprime( char cadena_a_imprimir[], int j){ 
    //funcion para imprimir los caracteres                    
    int contador = 0;            
    char c = 0;            
    for ( contador = j; contador >= 1; --contador)       
    {//cuenta regresiva para imprimir al revés
    c = cadena_a_imprimir[contador];             
    putchar(c);               
    }               
    printf("\n");               
    return;               
    }