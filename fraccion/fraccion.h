#ifndef __FRACCION_H__
#define __FRACCION_H__

struct fraccion{
    int num;
    int den;
};

typedef struct fraccion Fraccion;

Fraccion* crearFraccion(int num, int den);
void simplificar(Fraccion*);
Fraccion* sumar(Fraccion*, Fraccion*);
void imprimir(Fraccion*);
void destruir(Fraccion*);

#endif 
