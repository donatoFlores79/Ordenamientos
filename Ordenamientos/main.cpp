#include "Lista.h"

using namespace std;

int main(){
    int opc = 0;
    Solicitud solicitud;
    Lista lista;
    float promedio;

    while(opc != 3){
        cout<< "Que deseas realizar?\n";
        cout<< "1. Dar de alta una solicitud\n";
        cout<< "2. Buscar una solicitud\n";
        cout<< "3. Salir\n";
        cout<< "  --->";
        cin>> opc;

        int resultadoBusqueda;
        switch(opc){
            case 1:
                cin>> solicitud;
                lista.agrega(solicitud);
                cout<< "\n\n";
                break;
            case 2:
                lista.ordena();
                if(lista.vacia())
                    cout<< "La lista esta vacia\n\n";
                else{
                    cout<< "Promedio de la solicitud a buscar:";
                    cin>> promedio;

                    resultadoBusqueda = lista.busca(promedio);
                    if(resultadoBusqueda != -1)
                        cout<< "\nLa solicitud se encuentra en la posicion " << resultadoBusqueda << "\n\n";
                    else
                        cout<< "\nNo se encontro la solicitud\n\n";
                }

                break;
            case 3:
                break;
            default:
                cout<< "\nIngresa una opcion valida\n";
        }
    }

    cout<< "\n  Lista  \n\n";
    lista.muestra();
    return 0;
}
