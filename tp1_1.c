#include <stdio.h>

void main(void)
{
    int numero = 26;
    int *puntNumero;

    puntNumero = &numero;

    printf("hola mundo\n");
    printf("Contenido del puntero: %d \n", *puntNumero);
    printf("Direccion de memoria almacenada por el puntero: %u \n", puntNumero);
    printf("Direccion de memoria de la variable: %u \n", &numero);
    printf("Direccion de memoria del puntero: %u \n", &puntNumero);
    printf("Tamaño de memoria utilizado por la variable: %lu \n", sizeof(numero));

    return;
}