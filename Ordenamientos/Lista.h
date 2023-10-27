#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include "Solicitud.h"

const int TAM = 20;

class Lista{
private:
    Solicitud solicitudes[TAM];
    int ult;
public:
    Lista() : ult(-1){}

    bool vacia() const;
    bool llena() const;
    int inserta(Solicitud&, int&);
    bool elimina(int&);
    int ultimo() const;

    void agrega(Solicitud&);
    void ordena();
    int busca(float&);
    void muestra() const;

    friend std::ostream& operator << (std::ostream&, Lista&);
};

#endif // LISTA_H_INCLUDED
