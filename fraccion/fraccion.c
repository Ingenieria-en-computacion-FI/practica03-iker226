#include "fraccion.h"
#include <stdlib.h>
#include <stdio.h>

//Funcion auxiliar para caluclar el maximo comun divisor
int mcd(int a, int b){
    if(b==0)
        return a;
    return mcd(b, a % b);
}

Fraccion* crearFraccion(int num, int den){
    if (den==0) return NULL;
    Fraccion* f= (Fraccion*)malloc(sizeof(Fraccion));
    f->num = num;
    f->den = den;

    simplificar(f);
    return f;
}

void simplificar(Fraccion* f){
    if(!f) return;
    int d= mcd(f->num, f->den);
    f->num= f->num/d;
    f->den= f->den/d;
}

Fraccion* sumar(Fraccion*a, Fraccion*b){
    if(!a || !b) return NULL;

    int num = a->num * b->den + b->num * a->den;
    int den = a->den * b->den;

    return crearFraccion(num, den);
}

void imprimir(Fraccion*f){
    if(!f) return;
    printf("%d/%d\n", f->num, f->den);
}

void destruir(Fraccion*f){
    if(!f) return;
    free(f);
}
