#include <stdio.h>

int main(int argc, char const *argv[])
{
    float firstNumber, secondNumber, firstpower, secondpower;

    printf("Ingresa el primer numero que quieres elevar\n");
    scanf("%f", &firstNumber);

    printf("Ingresa el segundo numero que quieres elevar\n");
    scanf("%f", &secondNumber);

    firstpower = firstNumber * firstNumber * firstNumber * firstNumber;
    secondpower = secondNumber * secondNumber;

    printf("El primer numero elevado a 4 es: %.2f\n", firstpower);
    printf("El segundo numero elevado al cuadrado es: %.2f\n", secondpower);



    return 0;
}
