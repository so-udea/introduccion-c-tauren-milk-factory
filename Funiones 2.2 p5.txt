#include <stdio.h>

void reversa(char entero[]);


int main(){

    char entero[30];

    printf("Escriba el valor de 'x' que se desea ver en reversa, maximo 30 caracteres: ");

    scanf("%s", entero);

    reversa(entero);

     return 0;

}

void reversa(char entero[]){

    
int i = strlen (entero);

    printf("El numero en reversa es: ");

    for(i; i >= 0; i--){

       printf("%c", entero[i]);

    }

}