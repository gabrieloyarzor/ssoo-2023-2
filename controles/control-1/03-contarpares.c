#include <stdio.h>

int main()
{
    int contador = 0;

    int n;

    while (1)
    {
        printf("Para terminar el programa ingrese un numero negativo\n");
        printf("Ingrese un numero entero: ");
        if (scanf("%d",&n) != 1)
        {
            printf("Debe ingresar un numero entero\n");
            return 1;
        }
        else if (n < 0)
        {
            break;
        }
        else if (n % 2 == 0)
        {
            contador++;
        }
    }

    printf("Se ingresaron numeros pares %d vez/veces.\n", contador);

    return 0;
}