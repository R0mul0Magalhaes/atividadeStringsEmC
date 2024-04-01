#include <stdio.h>

int main()
{
    char string[100];

    printf("Escreva um texto: ");
    fgets(string, 100, stdin);

    printf("A cadeia de caracteres inserida é: %s", string);

    return 0;
}