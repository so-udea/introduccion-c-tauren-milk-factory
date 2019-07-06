#include <stdio.h>

int sumaGeometrica(int x, int n);


int main()

{
    int x, n;

    int resultadoSuma;

    printf("Escriba los valores de 'x' y 'n': ");

    scanf("%d %d", &x, &n);

    resultadoSuma = sumaGeometrica(x,n);

    if(resultadoSuma==0){

        return 0;

    }

    printf("El resultado de la suma geometrica entre %d y %d es: %d", x, n, resultadoSuma);

    return 0;

}


int sumaGeometrica(int x, int n){

    int resultado = 1;

    int auxX = x;

    if(n<0){

        printf("El valor de 'n' debe ser un numero positivo");

        resultado=0;

        return resultado;

    }

    for(int i=1; i<=n;i++){

        resultado=resultado+x;

        x = x * auxX;

    }

   return resultado;

}