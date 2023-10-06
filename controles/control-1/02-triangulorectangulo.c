#include <stdio.h>
#include <math.h>

int main()
{
    float c1, c2;

    printf("Ingrese el primer cateto: ");
    if (scanf("%f",&c1) != 1 || c1 <= 0)
    {
        printf("Error: Ingrese un numero positivo.\n");
        return 1;
    }
    
    printf("Ingrese el segundo cateto: ");
    if (scanf("%f",&c2) != 1 || c2 <= 0)
    {
        printf("Error: Ingrese un numero positivo.\n");
        return 1;
    }

    float h = sqrt(c1*c1 + c2*c2);
    float a = (c1 * c2) / 2.0;
    float p = h + c1 + c2; 

    printf("Hipotenusa: %.2f\n", h);
    printf("Area: %.2f\n", a);
    printf("Perimetro: %.2f\n", p);

    return 0;  
}