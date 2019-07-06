#include <stdio.h>

#include <stdlib.h>

#include <time.h> 

#include <ctype.h>

#include <stdbool.h>// Booleanos

#include <string.h>


void generarNumerosRndom();

void generarPregunta();

void respustaCorrecta();

void respuestaIncorrecta();

int n1, n2, respuesta, rCorrecta, auxOut, out;




int main()

{

   printf("Bienvenidos\n_____________________________\nEL SISTEMA LE OFRECERA SALIR CADA 5 ERRORES\n_____________________________\n");	
   
generarNumerosRndom();

   generarPregunta();

}

void generarNumerosRndom(){


   n1 = rand() % 10;

   n2 = rand() % 10;


}

//METODO NUEVO IMPLEMENTADO PARA F-P10 RESPUESTAS MULTIPLES (GOOD)
void respustaCorrecta(){

    int a;
    a = rand() % 4;


    switch ( a )

    {

    case 0: printf("¡Muy bien! \n\n");

            break;


    case 1: printf("¡Excelente! \n\n");

            break;


    case 2: printf("¡Buen trabajo! \n\n");

            break;


    case 3: printf("¡Sigue haciéndolo bien! \n\n");

            break;

    }

}

//SEGUNDO METODO IMPLEMENTADO PRA F-P10 RESPUESTAS MULTIPLES (BAD)
void respuestaIncorrecta(){

    int a;

    a = rand() % 4;


    switch ( a )

    {

    case 0: printf("No. Por favor trata de nuevo. \n\n");

            break;


    case 1: printf("Incorrecto. Trata una vez más. \n\n");

            break;


    case 2: printf("¡No te rindas! \n\n");

            break;


    case 3: printf("No. Trata de nuevo \n\n");

            break;

    }


}
void generarPregunta(){

    bool rIncorrecta = true;

    printf("¿Cuánto es %d veces %d?\n", n1, n2);

    scanf("%d", &respuesta);

    rCorrecta=n1*n2;


    
while(rIncorrecta=true){

            auxOut=5;

            for(int j=1;j<=auxOut;j++){

                if(j==auxOut){

                    printf("\ndesea salir perrito?: (1 para SZS,2 para NOKAS)\n");

                    scanf("%d", &out);

                    if(out==1){

                        while(out==1){ //PELIGRO...PELIGRO MASHETASO

                            return;

                        }
    
                }else{ //INESESARIO

                        rIncorrecta=true;

                    }

                }

            if(respuesta==rCorrecta){

            	respustaCorrecta();

            	generarNumerosRndom();

            	generarPregunta();

            }else{
  
              respuestaIncorrecta();
              printf("¿Cuanto es %d veces %d?\n", n1, n2);

              scanf("%d", &respuesta);

              rCorrecta=n1*n2;

              if(respuesta==rCorrecta){

                    respustaCorrecta();

                    generarNumerosRndom();

                    generarPregunta();
 
                   rIncorrecta=false;

              }

       
        
	    }
    
    }
    
    }

}    
       