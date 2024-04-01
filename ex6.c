#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nome[100];
    char sexo;
    int idade;

    printf("Escreva o nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Escreva o sexo (M/F): ");
    scanf("%c", &sexo);
    sexo = tolower(sexo);

    printf("Escreva a idade: ");
    scanf("%d", &idade);

    if (sexo == 'f' && idade <= 25) {
        printf("%s ACEITA\n", nome);
    } else {
        printf("%s NÃO ACEITA\n", nome);
    }

    return 0;
}