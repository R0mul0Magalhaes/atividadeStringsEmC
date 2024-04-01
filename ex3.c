#include <stdio.h>
#include <ctype.h>

int main()
{
    char nome[100];

    printf("Escreva um nome: ");
    fgets(nome, 100, stdin);

    if (tolower(nome[0]) == 'a')
    {
        printf("O nome é: %s", nome);
    }

    return 0;
}