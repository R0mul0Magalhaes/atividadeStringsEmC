#include <stdio.h>

int main()
{
    char nome[100];

    printf("Escreva um nome: ");
    fgets(nome, 100, stdin);

    if (strlen(nome) >= 4)
    {
        printf("As primeiras 4 letras são: %.*s\n", 4, nome);
    }
    else
    {
        printf("O nome tem menos de quatro caracteres.\n");
    }

    return 0;
}