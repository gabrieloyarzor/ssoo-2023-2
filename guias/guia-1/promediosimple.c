#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;

    printf("Ingrese la primera nota: ");
    if ((scanf("%f",&n1) != 1) || n1 < 1 || n1 > 7)
    {
        printf("Error: La entrada debe ser un numero de 1 a 7.\n");
        return 1;
    }

    printf("Ingrese la segunda nota: ");
    if ((scanf("%f",&n2) != 1) || n2 < 1 || n2 > 7)
    {
        printf("Error: La entrada debe ser un numero de 1 a 7.\n");
        return 1;
    }

    printf("Ingrese la tercera nota: ");
    if ((scanf("%f",&n3) != 1) || n3 < 1 || n3 > 7)
    {
        printf("Error: La entrada debe ser un numero de 1 a 7\n");
        return 1;
    }

    printf("Ingrese la cuarta nota: ");
    if ((scanf("%f",&n4) != 1) || n4 < 1 || n4 > 7)
    {
        printf("Error: La entrada debe ser un numero de 1 a 7\n");
        return 1;
    }

    float promedio = (n1 + n2 + n3 + n4) / 4;

    printf("El promedio de las cuatro notas es: %.2f\n", promedio);

    return 0;
}