#include <stdio.h>

int main()
{
int x;
int comision;
printf("Ingrese valor de ventas en el trimestre: ");
scanf("%d", &x);
comision = CalculaComision(x);
printf("El valor de la comision es: %d ", + comision);
return 0;
}

int CalculaComision(int x){

    if(x<0){

    printf("El valor ingresado no tiene comision: \n");

    x = 0;
    return x;

    }

    if(x>=0 && x<=20000){
 
    x = x * 0.05;

    return x;

    }

    if(x>=20001 && x<=50000){

    x = (x * 0.07) + 1000;

    return x;

    }

    if(x>= 50001){

        x = (x * 0.1) + 3100;

        return x;
    }

}