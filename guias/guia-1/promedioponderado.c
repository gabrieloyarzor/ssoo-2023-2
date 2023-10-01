#include <stdio.h>

int main()
{
    float n1, n2, n3;

    printf("Ingrese la primera nota: ");
    if ((scanf("%f",&n1) != 1) || (n1 < 1) || (n1 > 7))
    {
        printf("Error: La entrada debe ser un numero del 1 al 7.\n");
        return 1;
    }

    printf("Ingrese la segunda nota: ");
    if ((scanf("%f",&n2) != 1) || (n2 < 1) || (n2 > 7))
    {
        printf("Error: La entrada debe ser un numero del 1 al 7.\n");
        return 1;
    }

    printf("Ingrese la tercera nota: ");
    if ((scanf("%f",&n3) != 1) || (n3 < 1) || (n3 > 7))
    {
        printf("Error: La entrada debe ser un numero del 1 al 7.\n");
        return 1;
    }  

    float promedio = (n1*0.4 + n2*0.3 + n3*0.3);

    if (promedio < 3.95)
    {
        printf("El estudiante ha reprobado la asignatura. Promedio: %.2f\n", promedio);
    }
    else if ((promedio >= 3.95) && (promedio <= 4.94))
    {
        printf("El estudiante va a examen. Promedio: %.2f\n", promedio);
    }
    else
    {
        printf("El estudiante se exime de la asignatura. Promedio: %.2f\n", promedio);
    }

    return 0;
}