#include <stdio.h>

#include <stdlib.h>

#include <time.h> 

#include <ctype.h>

#include <stdbool.h>// Booleanos

#include <string.h>

void generarNumerosRndom();

void generarPregunta();

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

void generarPregunta(){

    bool rIncorrecta = true;

    printf("�Cu�nto es %d veces %d?\n", n1, n2);

    scanf("%d", &respuesta);

    rCorrecta=n1*n2;


    
while(rIncorrecta=true){

            auxOut=5;

            for(int j=1;j<=auxOut;j++){

                if(j==auxOut){

                    printf("\ndesea salir perrito?: (1 para SZS,2 para NOKAS)\n");

                    scanf("%d", &out);

                    if(out==1){

                        while(out==1){ 
                            return;

                        }
    
                }else{ //INESESARIO

                        rIncorrecta=true;

                    }

                }

            if(respuesta==rCorrecta){

            	printf("Muy bien!\n");

            	generarNumerosRndom();

            	generarPregunta();

            }else{
  
              printf("No. Por favor intenta nuevamente!\n");
              printf("�Cuanto es %d veces %d?\n", n1, n2);

              scanf("%d", &respuesta);

              rCorrecta=n1*n2;

              if(respuesta==rCorrecta){

                    printf("Muy bien!\n");

                    generarNumerosRndom();

                    generarPregunta();
 
                   rIncorrecta=false;

              }

       
        
	    }
    
    }
    
    }

}