#include <stdio.h>

int lanzarMoneda();

int main(){

    char entero[30];

    int tamanoEntero;

    int lanzamientos;

    int resultadoMoneda;

    int cantidadCaras;

    int cantidadSellos;

    printf("Escriba el valor de 'x' lanzamientos de monedas, maximo 30 caracteres: ");

    scanf("%s", entero);

    tamanoEntero = strlen(entero);

    
          for(int i=0; i < tamanoEntero ; i++){

            cantidadCaras=0;

            cantidadSellos=0;

            lanzamientos = entero[i] - '0';

            if(lanzamientos<0){

                printf("Ingreso un numero invalido. Debe ser positivo");

                return 0;

            }


                for(int j=0; j< lanzamientos;j++){

                   resultadoMoneda = lanzarMoneda();

                   if(resultadoMoneda == 0){

                       printf("C");

                       cantidadCaras = cantidadCaras + 1;

                   }else if(resultadoMoneda == 1){

                       printf("S");

                       cantidadSellos = cantidadSellos + 1;

                   }

                }

                printf(" Cantidad de Caras: %d Cantidad de Sellos: %d \n", cantidadCaras, cantidadSellos);

          }


    return 0;

}


int lanzarMoneda(){

  int l = rand() % 2;
 
  return l;

}