#include <stdio.h>  
#include <stdlib.h>

struct _agenda {
        char nombre[20];
        char telefono[12];
        struct _agenda *siguiente;  /*Apunta a siguiente*/
        };

struct _agenda *primero, *ultimo; /*se apunta a primero y ultimo*/

/*Funcion para desplegar el menu en consola*/
void mostrar_menu() {
      printf("\n\nMenú:\n=====\n\n");
      printf("1.- Añadir elementos\n");
      printf("2.- Borrar elementos\n");
      printf("3.- Mostrar lista\n");
      printf("4.- Salir\n\n");
      printf("Escoge una opción: ");
      /*fflush(stdout); /*Almacena temporalmente hasta que se utilice*/
}   /*DE AQUI PARA ARRIBA TODO ESTA BIEN*/

/* Con esta función añadimos un elemento al final de la lista */
void anadir_elemento() {
      struct _agenda *nuevo;

      /* reservamos memoria para el nuevo elemento */
      nuevo = (struct _agenda *) malloc(sizeof(struct _agenda));
      
	if (nuevo==NULL) 
	      printf( "No hay memoria disponible!\n");
      else{
            printf("\nNuevo elemento\n");
            printf("Nombre: ");
            fflush(stdout); /*Almacena temporalmente hasta que se utilice*/
            scanf("%s",nuevo->nombre); /*obtiene todo lo que corresponde a nuevo en nombre*/
            printf("Teléfono: ");
            fflush(stdout);  /*limpieza del buffer del input*/
            scanf("%s",nuevo->telefono);
            
      }
/*El campo siguiente va a ser NULL por ser el último elemento
  de la lista */
      nuevo->siguiente = NULL;
/*Ahora metemos el nuevo elemento en la lista. lo situamos al final de la lista, se comprueba si la lista está vacía. si primero==NULL es que no hay ningún elemento en la lista. también vale ultimo==NULL */
      if (primero==NULL) {
		printf("Primer elemento\n");
            printf("%p",primero);
            printf("%p",ultimo);
            printf("%p",nuevo);
		primero = nuevo;
		ultimo = nuevo;
	} 
      else {
	/*el hasta ahora último apuntará al nuevo*/
           ultimo->siguiente = nuevo;
           /*hacemos que el nuevo sea ahora el último*/
           ultimo = nuevo;
      }
}

void mostrar_lista() {
      
      struct _agenda *auxiliar; /*para recorrer la lista*/
      int i; 
      i=0;
      auxiliar = primero;
      printf("\nMostrando la lista completa:\n");
      while (auxiliar!=NULL) {
         printf("Nombre: %s,Telefono: %s\n",auxiliar->nombre,auxiliar->telefono);
         auxiliar = auxiliar->siguiente;
         i++;
      }
      if (i==0) 
         printf( "\nLa lista está vacía!!\n" );
}

void consulta(){
      struct _agenda *auxiliar; /*para recorrer la lista*/
      int i; 
      i=0;
      auxiliar = primero;
      printf("\nMostrando la lista completa:\n");
      while (auxiliar!=NULL) {
         printf("Nombre: %s,Telefono: %s\n",auxiliar->nombre,auxiliar->telefono);
         auxiliar = auxiliar->siguiente;
         i++;
      }
      if (i==0) 
         printf( "\nLa lista está vacía!!\n" );

}



int main() {
     int ot;
     primero = (struct _agenda *) NULL;
     ultimo = (struct _agenda *) NULL;
     int d;
     
     do {
         mostrar_menu();
         ot = getchar();
            printf("%d",ot);

             switch (ot) {
                case '1': 
                  printf("op 1");
                  anadir_elemento();      
                  /*mostrar_menu();*/
                  break;
                case '2': 
                  printf("Digite numero: ");
                  scanf("%d",&d);
                  consulta(d);  
                  break;
                case '3': 
                  printf("op 3");
                  mostrar_lista(primero); 
                  break;
                case '4': 
                  exit( 1 );
                default:
			printf( "Opción no válida\n" );
                  break;
             }
         /*opcion = ' ';*/
     
     } 
     while (ot!='4'); /*sin este while no funciona*/
}
