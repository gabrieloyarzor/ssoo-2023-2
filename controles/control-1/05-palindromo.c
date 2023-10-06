#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[20];

    printf("Ingrese una palabra: ");
    scanf("%s",palabra);

    int longitud = strlen(palabra);

    for (int i = 0; i < longitud / 2; i++)
    {
        if (palabra[i] != palabra[longitud - i - 1])
        {
            printf("La palabra no es palindromo.\n");
            return 0;
        }
    }
    
    printf("La palabra es palindromo.\n");
    
    return 0;
}