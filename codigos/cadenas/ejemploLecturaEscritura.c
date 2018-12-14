#include<string.h>

int main(void)
{
    char frase[100];
    printf("Ingrese una frase: ");
    gets(frase);
    printf("Ingresaste: %s", frase);
    return 0;
}
