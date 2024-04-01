#include <stdio.h>

int countOnes(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str == '1')
            count++;
        str++;
    }
    return count;
}

int main()
{
    char str[100];
    printf("Escreva o texto: ");
    scanf("%s", str);
    printf("Quantidade de número 1 na cadeia de caracteres: %d\n", countOnes(str));
    return 0;
}