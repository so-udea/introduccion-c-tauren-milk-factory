#include <stdio.h>


void escribeSecuencia(int x);


int main()
{

    int x;

    printf("Escriba el numero de renglones: ");

    scanf("%d", &x);

    escribeSecuencia(x);

    return 0;

}


void escribeSecuencia(int x){

    int empieza =1;

    for(int i=1; i<= x; i++){

           int y = empieza;

        for(int j=1; j<=i;j++){

            printf("%d", y);

            if (j < i){

                if(y == 1){

                y = 0;

                }

                else{

                    y = 1;

                }

            }

        }

        printf("\n");

        if(empieza == 1){

            empieza = 0;

        }else {

            empieza = 1;

        }

    }

}