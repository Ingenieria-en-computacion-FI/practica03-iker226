#include <stdio.h>
#include "pelicula.h"

int main(){
    printf("Prueba del TAD Pelicula\n");

    Pelicula* p=NULL;
    p= crearPelicula("Inception", 2010, "Ciencia Ficcion");

    agregarDirector(p, "Cristopher Nolan");

    imprimir(p);

    printf("\nCambiar genero\n");

    cambiarGenero(p, "Accion");

    imprimir(p);

    destruir (p);

    return 0;
}
