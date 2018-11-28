#include<stdio.h>

int main()
{
    int contador = 0;
    while(contador<5)
        printf("contador: %d  \n", ++contador);
    printf("Terminado. Contador: %d\n", contador);
    return 0;
}
