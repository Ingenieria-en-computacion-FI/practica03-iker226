#include "nodo.h"
#include <stdio.h>

int main (){
    printf("Prueba del TAD Nodo\n");
    Nodo* n = NULL;
    n=crearNodo(10);

    printf("Valor del nodo: %d\n", obtenerValor(n));

    asignarValor(n, 25);

    printf("Nuevo valor del nodo: %d\n", obtenerValor(n));

    destruirNodo(n);
    n=NULL;

    return 0;
}
