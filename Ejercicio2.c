#include<stdio.h>
int main (int argc, char const *argv [])
{
    int num1; 
    int num2; 
    int num3;
    printf("Bienvenido al sistema");
    printf("Brindame un numero cualquiera");
    scanf("%i", &num1);
    num2 = num1 - 1;
    num3 = num2 * num2;
    printf("El numero elevado al cuadrado es: %i", num3);
    
    return 0;
}