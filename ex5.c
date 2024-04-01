#include <stdio.h>

int main() {
    char nome[100];
    int length = 0;

    printf("Escreva um nome: ");
    fgets(nome, sizeof(nome), stdin);

    while (nome[length] != '\0' && nome[length] != '\n') {
        length++;
    }

    printf("O nome tem %d letras.\n", length);

    return 0;
}