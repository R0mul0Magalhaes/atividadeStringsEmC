#include <stdio.h>

int string_length(const char *str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    char string[100];

    printf("Escreva o texto: ");
    fgets(string, 100, stdin);

    int length = string_length(string);

    printf("Números de caracteres: %d\n", length);

    return 0;
}