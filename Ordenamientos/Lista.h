#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <iostream>
#include <stdio.h>
#include "constancia.h"

#define TAM 50

class Lista{
private:
    Constancia constancias[TAM];
    int ult;
public:
    Lista():ult(-1){}
    bool vacia()const;
    bool llena()const;
    bool inserta(Constancia, int);
    bool elimina(int);
    Constancia recupera(int)const;
    int primero()const;
    int ultimo()const;
    void imprime()const;
    int buscar(Constancia);
    void ordena();
};

#endif // LISTA_H_INCLUDED
