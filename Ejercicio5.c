#include <stdio.h>

int main (void)

{
    char name[30];
    float product, priceDiscount, discount;

    printf("Ingrese el nombre del producto:\n");
    scanf("%s", &name);

    printf("Ingrese el precio del producto:\n");
    scanf ("%f", &product);

    discount = product * 0.15;
    priceDiscount = product - discount;

    printf("Usted lleva: %s\n", name);
    printf("Precio original: %.2f\n", product);
    printf("Se le aplicara un descuento del 15 por ciento\n");
    printf("Se le descuenta: %.2f\n", discount);
    printf("Pagara un total de: %.2f\n", priceDiscount);








}