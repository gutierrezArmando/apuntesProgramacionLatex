#include <stdio.h>
int main()
{
    int valor1, valor2;
    printf("Ingrese el valor 1: ");
    scanf("%d", &valor1);
    printf("Ingrese el valor 2: ");
    scanf("%d", &valor2);
    if(valor1>valor2)
        printf("El mayor es: %d", valor1);
    else
        printf("El mayor es: %d", valor2);
    return 0;
}
