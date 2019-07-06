#include <stdio.h>

#include <math.h>

double sumaSerie(int x, int n);

int factorial(int x);


int main(){

    int x, n;

    double resultadoSerie;

    printf("Escriba el valor de 'x' y  la cantidad de terminos 'n' deseados: ");

    scanf("%d %d", &x, &n);

    resultadoSerie = sumaSerie(x,n);

      if(resultadoSerie==0){

        return 0;

    }

    printf("\n El resultado de la sucesion entre %d y %d es: %f", x, n, resultadoSerie);

    return 0;

}

double sumaSerie(int x, int n){

    double resultado = 1;

    int contador = 2;

    if(n<=0){

        printf("El valor de 'n' debe ser un numero positivo");

        resultado=0;

        return resultado;

    }

    if(n==1){

        return resultado;

   }

    for(int i=2; i<=n;i++){

        if((i%2)==0){

            resultado = (resultado) - (double)((pow(x,contador))/factorial(contador));

                printf("\n Entro al primer if %f", resultado);

        }

        else{

            resultado = (resultado) + (double)((pow(x,contador))/factorial(contador));

                             printf("\n Entro al segundo if %f", resultado);

        }

        contador = contador + 2;

    }

   return resultado;

}


int factorial(int x){

    int n;
 
   int fact = 1;

    n = x ;

    for (int c = 1; c <= n; c++){

            fact = fact * c;

    }

    return fact;

}
