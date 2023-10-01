#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Ingrese el primer lado: ");
    if (scanf("%d", &a) != 1 || a < 1) {
        printf("Error: Ingrese un numero entero no negativo.\n");
        return 1;
    }

    printf("Ingrese el segundo lado: ");
    if (scanf("%d", &b) != 1 || b < 1) {
        printf("Error: Ingrese un numero entero no negativo.\n");
        return 1;
    }

    printf("Ingrese el tercer lado: ");
    if (scanf("%d", &c) != 1 || c < 1) {
        printf("Error: Ingrese un numero entero no negativo.\n");
        return 1;
    }

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        if ((a == b) && (b == c))
        {
            printf("El triangulo es equilatero.\n");
        }
        else if ((a == b) || (a == c) || (b == c))
        {
            printf("El triangulo es isosceles.\n");
        }
        else
        {
            printf("El triangulo es escaleno.\n");
        }
    }
    else
    {
        printf("Error: El triangulo no es valido.\n");
        return 1;
    }

    return 0;
}
