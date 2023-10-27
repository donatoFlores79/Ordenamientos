#include "Lista.h"

using namespace std;

bool Lista::vacia() const{
    return (ult == -1);
}

bool Lista::llena() const{
    return (ult == TAM-1);
}

int Lista::inserta(Solicitud& e, int& pos){
    if(llena()){
        cout<<"\n Error de insercion, lista llena\n";
        return 1;
    }

    if(pos < 0 || pos > ult+1){
        cout<<"\n Error de insercion, posicion invalida\n";
        return 1;
    }

    int i = ult+1;
    while(i>pos){
        solicitudes[i] = solicitudes[i-1];
        i--;
    }

    solicitudes[pos] = e;
    ult++;
    return 0;
}

bool Lista::elimina(int& pos){
    if(vacia() || pos < 0 || pos > ult){
        std::cout<<"\nError de eliminacion\n";
        return false;
    }

    int i = pos;
    while(i < ult){
        solicitudes[i] = solicitudes[i+1];
        i++;
    }
    ult--;
    return true;
}

int Lista::ultimo() const{
    return ult;
}

void Lista::agrega(Solicitud& e){
    int pos = ult+1;
    if(llena())
        cout<< "\nLa lista esta llena, agrega()\n";
    else
        inserta(e,pos);
}

void Lista::ordena(){
    int i = 1;
    Solicitud aux;
    while(i <= ult){
        aux = solicitudes[i];

        int j = i;
        while(j > 0 && aux < solicitudes[j-1]){
            solicitudes[j] = solicitudes[j-1];
            j--;
        }

        if(i != j)
            solicitudes[j] = aux;
        i++;
    }
}

int Lista::busca(float& elem){
    if(vacia())
        return -1;

    int izquierda = 0;
    int derecha = ult;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        if (solicitudes[medio].getPromedio() == elem) {
            cout<< "\n";
            cout<< solicitudes[medio];
            return medio;
        }

        if (solicitudes[medio].getPromedio() < elem) {
            izquierda = medio + 1;
        }

        else {
            derecha = medio - 1;
        }
    }

    return -1;
}

void Lista::muestra() const{
    int i = 0;
    while(i <= ult){
        cout<< solicitudes[i] << "\n";
        i++;
    }
}
