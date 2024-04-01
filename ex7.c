#include <stdio.h>

int compare_strings(char *str1, char *str2)
{
    while(*str1 != '\0' && *str2 != '\0' && *str1 == *str2) {
        str1++;
        str2++;
    }

    return *str1 - *str2;
}

int main()
{
    char str1[100], str2[100];

    printf("Escreva o primeiro texto: ");
    scanf("%s", str1);

    printf("Escreva o segundo texto: ");
    scanf("%s", str2);

    if(compare_strings(str1, str2) == 0)
        printf("Quantidade de caracteres iguais.\n");
    else
        printf("Quantidade de caracteres desiguais.\n");

    return 0;
}