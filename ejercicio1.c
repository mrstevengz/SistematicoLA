#include <stdio.h>

int main(int Num1 , int Resultado)
{
    printf("Porfavor digite un numero");
    scanf("%i",&Num1);
    Resultado = Num1*Num1*Num1;
printf("Su numero al cubo es: %i\n", Resultado);
    return 0;
}
