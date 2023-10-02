#include <stdio.h>

struct Producto
{
    char codigo[50];
    char descripcion[100];
    float precio;
};

int main()
{
    struct Producto producto1 = {"ASD10", "Carne de vacuno", 1500.99};
    struct Producto producto2 = {"ASD11", "Pan", 1000.99};

    if (producto1.precio > producto2.precio)
    {
        printf("El producto %s tiene mayor precio: %.2f\n", producto1.descripcion, producto1.precio);
    }
    else if (producto1.precio < producto2.precio)
    {
        printf("El producto %s tiene mayor precio: %.2f\n", producto2.descripcion, producto2.precio);
    }
    else
    {
        printf("Los productos %s y %s tiene el mismo precio: %.2f\n", producto1.descripcion, producto2.descripcion, producto1.precio);
    }

    return 0;
}

