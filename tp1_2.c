#include <stdio.h>
#include <stdlib.h>

int devolverCuadrado(int X);
void devolverCuradradoVoid(int Y);
void invertirValores(int *a, int *b);
void orden(int *a, int *b);

int main()
{
    int numero, a, b;

    printf("Ingrese un numero: \n");
    scanf("%d", &numero);

    printf("\nContenido de la variable: %d\n", numero);
    printf("Direccion de la variable: %u\n", &numero);

    devolverCuadradoVoid(numero);

    numero = devolverCuadrado(numero);
    printf("El cuadrado del numero ingresado (usando la funcion que devuelve un int) es: %d\n", numero);

    printf("\nIngrese el valor a: \n");
    scanf("%d", &a);
    printf("Ingrese el valor b: \n");
    scanf("%d", &b);
    invertirValores(&a, &b);

    printf("\nValores invertidos\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    orden(&a, &b);
}

int devolverCuadrado(int X)
{
    return X * X;
}

void devolverCuadradoVoid(int Y)
{
    printf("\nEl cuadrado del numero ingresado (usando la funcion que devuelve un tipo void) es: %d\n", Y * Y);
}

void invertirValores(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    if (*a > *b)
    {
        invertirValores(a, b);
        printf("\nSe invirtieron los valores\n Ahora a tiene el valor mas chico: %d\n Y b tiene el valor mas grande: %d\n", *a, *b);
    }
    else
    {
        printf("\nNo hay necesidad de invertir los valores ya que a tiene el valor mas chico y b el valor mas grande\n");
    }
}