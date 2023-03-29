#include "Lista.h"

using namespace std;

int Lista::buscar(Constancia elem){
    int i=0,j=ult, medio;
    while(i<=j){
        medio = (i+j)/2;
        if(constancias[medio] == elem)
            return medio;
        if(elem < constancias[medio])
            j = medio-1;
        else
            i = medio+1;
    }
    return -1;
}

void Lista::imprime()const{
    if(!vacia()){
        for(int i=0; i<=ult; i++){
            cout<<constancias[i];
        }
    }
}

bool Lista::vacia()const{
    return ult==-1;
}
bool Lista::llena()const{
    return ult==TAM-1;
}

bool Lista::inserta(Constancia elem, int pos){
    if(llena() || pos<0 || pos>ult+1){
        cout<<"\n No se pudo insertar";
        return false;
    }
    int i=ult+1;
    while(i>pos){
        constancias[i]=constancias[i-1];
        i--;
    }
    constancias[pos]=elem;
    ult++;
    return true;
}

bool Lista::elimina(int pos){
    if(vacia() || pos<0 || pos>ult){
        cout<<"\n No se pudo eliminar\n";
        return false;
    }
    int i=pos;
    while(i<ult){
        constancias[i]=constancias[i+1];
        i++;
    }
    ult--;
    return true;
}

Constancia Lista::recupera(int pos)const{
    if(vacia() || pos<0 || pos>ult-1){
        std::cout<<"\n Insuficiencia de datos o posicion invalida\n";
        Constancia c;
        return c;
    }
    else{
       return constancias[pos];
    }
}

int Lista::primero()const{
    if(vacia()){
       return -1;
    }
    return 0;
}
int Lista::ultimo()const{
    if(vacia()){
       return -1;
    }
    return ult;
}

void Lista::ordena(){
    int i=1,j;
    Constancia aux;
    while(i<=ult){
        aux = constancias[i];

        j=i;
        while(j>0 && aux < constancias[j-1]){
            constancias[j] = constancias[j-1];
            j--;
        }
        if(i!=j)
            constancias[j] = aux;
        i++;
    }
}
