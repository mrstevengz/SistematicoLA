#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nombre[20];
    printf("Dime tu nombre: ");
    scanf("%s", nombre );
    printf( "hola %s", nombre, 161);
    return 0;
}
