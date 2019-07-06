#include <stdio.h>
void crearTablas(int x);
int main()
{

    int x;

    printf("Ingrese el valor de n: ");

    scanf("%d", &x);

    crearTablas(x);

    return 0;

}



void crearTablas(int x){

        int resultado;

        for(int i = 1;i <=x; i++){

            for(int j=1; j<=10; j++){

                resultado = (i*j);

                printf("%d * %d =  %d \n", i,  j,  resultado);

            }

        }

        return;

    }