#include <stdio.h>

int main()
{
    int suma = 0;
    for (int i = 1; i < 101; i++)
    {
        suma += 2*i - 1;
    }
    printf("La suma de los primeros 100 numeros impares es: %d", suma);
    
    return 0;
}