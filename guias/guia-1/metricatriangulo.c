#include <stdio.h>
#include <math.h>

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
        float perimetro = a + b + c;
        float s = (a + b + c) / 2.0;
        float area = sqrt(s * (s-a) * (s-b) * (s-c));

        printf("El perimetro del triangulo es: %f\n", perimetro);
        printf("El semi perimetro del triangulo es: %f\n", s);
        printf("El area del triangulo es: %f\n", area);
    }
    else
    {
        printf("Error: El triangulo no es valido.\n");
        return 1;
    }

    return 0;
}
