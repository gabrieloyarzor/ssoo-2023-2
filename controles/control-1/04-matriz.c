#include <stdio.h>

int main()
{
    int contador = 1;

    for (int i = 0; i < 10; i++)
    {
        int suma = 100;

        printf("%d\t->\t",contador);

        for (int j = 0; j < 6; j++)
        {
            printf("%d\t",suma);
            suma += 10;
        }
        printf("\n");
        contador++;
    }

    return 0;
}