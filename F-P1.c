#include <stdio.h>
void multiplo(int x, int y);
int main()

{

    int x, y;

    printf("Ingrese el primer número: \n");

    scanf("%d", &x);
 
    printf("Ingrese el segundo número: \n");

    scanf("%d", &y);
    multiplo(x, y);

    return 0;

}

void multiplo(int x, int y)

{
  
  if (x % y == 0)

        printf("el resultdo es %d es decir si es multiplo \n", 1);

  else
   
    	printf("el resultdo es %d es decir no es multiplo\n", 0);

}