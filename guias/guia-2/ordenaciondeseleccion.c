#include <stdio.h>
#include <limits.h>

int main()
{
    int vector[5] = {2,5,3,1,4};
    
    int n = sizeof(vector) / sizeof(vector[0]);

    printf("Vector original: ");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");


    int posicion = 0;

    for (int i = 0; i < n; i++)
    {
        int menor = INT_MAX;

        for (int j = i; j < n; j++)
        {
            if (menor > vector[j])
            {
                menor = vector[j];
                posicion = j;
            }
        }

        int temp = vector[i];
        vector[i] = vector[posicion];
        vector[posicion] = temp;
    }

    printf("Vector ordenado: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}


