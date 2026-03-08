#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movie.h"

struct Pelicula{
    char* titulo;
    int anio;
    char* genero;
    char* directores[MAX_DIRECTORES];
    int numDirectores;
};

char* copiarCadena(const char* texto){
    char* copia=(char*)malloc(strlen(texto)+1);
    if(!copia) return NULL;
    strcpy(copia, texto);
    return copia;
}

Pelicula* crearPelicula(const char* titulo, int anio, const char* genero){
    Pelicula* p= (Pelicula*)malloc(sizeof(Pelicula));
    p->titulo= copiarCadena(titulo);
    p->genero= copiarCadena(genero);
    p->anio= anio;
    p->numDirectores= 0;
    return p;
}

void imprimir(Pelicula* p){
    if(!p) return;
    printf("Titulo: %s\n", p->titulo);
    printf("Anio: %d\n", p->anio);
    printf("Genero: %s\n", p->genero);
    printf("Directores:\n");
    
    for(int i=0; i<p->numDirectores;i++){
        printf(" - %s\n", p->directores[i]);
    }
}

void cambiarGenero(Pelicula* p, const char* nuevoGenero){
    if(!p) return;
    free(p->genero);
    p->genero=copiarCadena(nuevoGenero);
}

void agregarDirector(Pelicula* p, const char* director){
    if(!p) return;

    if(p->numDirectores >= MAX_DIRECTORES){
        printf("No se pueden agregar mas directores\n");
        return;
    }
    p->directores[p->numDirectores]=copiarCadena(director);
    p->numDirectores++;
}

void destruir(Pelicula* p){
    if(!p) return;

    free(p->titulo);
    free(p->genero);

    for(int i = 0; i < p->numDirectores; i++){
        free(p->directores[i]);
    }
    free(p);
}
