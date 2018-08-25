#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    //int edad;
    int numero;
    float acumulador = 0;
    int continuar = 1;

    do
    {
        printf("ingrese un numero:\n");
        scanf("%d",&numero);
        acumulador=acumulador+numero;
        i++;
        printf("Desea continuar?(0/1):");
        scanf("%d",&continuar);

    }while(continuar);

    printf("El total es: %.2f\n", acumulador);
    printf("Su promedio es: %.2f", acumulador/i);

    /*while(continuar)
    {
        printf("ingrese un numero:\n");
        scanf("%d",&numero);
        acumulador=acumulador+numero;
        i++;
        printf("Desea continuar?(0/1):");
        scanf("%d",&continuar);

    }

    printf("El total es: %.2f\n", acumulador);
    printf("Su promedio es: %.2f", acumulador/i);
    */

    /*for(i=0 ; i<3 ; i++)
    {
        printf("ingrese un numero:");
        scanf("%d",&numero);
        acumulador=acumulador+numero;
    }

    printf("Su numero es: %d\n", acumulador);
    printf("Su numero es: %d", acumulador/i);*/

    /*printf("Ingrese su edad:");

    scanf("%d",&edad);
    printf("Su edad es: %d", edad);
    */
    return 0;
}
