#include <stdio.h>
#include <string.h>

int main()
{
    char texto[20];
    char letra[20];

    printf("Ingrese una frase: ");
    scanf("%s",texto);

    printf("Ingrese una letra: ");
    scanf("%s",letra);

    int contador = 0;
    
    for (int i = 0; texto[i] != '\0'; i++)
    {
        if (texto[i] == letra[0])
        {
            contador++;
        }
    }

    printf("La letra aparece %d vez/veces en la frase.\n", contador);

    return 0;
}