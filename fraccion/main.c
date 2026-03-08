#include "fraccion.h"
#include <stdio.h>

int main(){
    printf("Prueba del TAD Fraccion\n");

    Fraccion* f1=NULL;
    Fraccion* f2=NULL;

    f1=crearFraccion(1,2);
    f2=crearFraccion(3,4);

    printf("Fraccion 1: ");
    imprimir(f1);

    printf("Fraccion 2: ");
    imprimir(f2);

    printf("\nSuma de fracciones:\n");

    Fraccion* resultado=NULL;
    resultado=sumar(f1, f2);

    imprimir(resultado);

    destruir(f1);
    destruir(f2);
    destruir(resultado);

    return 0;
}
