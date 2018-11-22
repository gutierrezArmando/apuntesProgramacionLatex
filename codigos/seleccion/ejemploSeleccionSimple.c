#include <stdio.h>

void main()
{
    float nota;
    printf("Introduzca la nota obtenida (0-10): ");
    scanf("%f", &nota);
    /* compara nota con 5 */
    if (nota >= 5)
        printf("Aprobado");
}
