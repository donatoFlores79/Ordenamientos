#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    int opc;
    Lista miLista;
    Constancia x;
    do{
        cout<< "Que deseas realizar?\n";
        cout<< "1.Dar de alta solicitud de constancia de estudios\n";
        cout<< "2.Elaborar solicitud\n";
        cout<< "3.Ordenar lista\n";
        cout<< "4.Buscar una solicitud de constancia\n";
        cout<< "5.Salir\n";

        cin>> opc;

        if (opc==1){
            cout<<"\n\n\n Enlistando..."<<endl;

            cin>>x;
            miLista.inserta(x, miLista.ultimo()+1);

            cout<< "\n---Lista---\n";
            miLista.imprime();
            cout<<"\n\n\n";
        }
        else if(opc==2){
            if(miLista.vacia())
                cout<< "La lista esta vacia\n\n";
            else{
                x=miLista.recupera(miLista.primero());
                cout<<"\n\n\n____UNIVERSIDAD DE GUADALAJARA____\n";
                cout<<"  Constancia de estudios del alumno\n";
                cout<<"Nombre:" << x.getNombre();
                cout<<"\nCarrera:" << x.getCarrera();
                cout<<"\nMaterias aprobadas:" << x.getMateriasAprobadas();
                cout<<"\nPromedio:" << x.getPromedio();

                cout<<"\n\n Eliminando de la lista..."<<endl;
                cout<<x<<endl;
                miLista.elimina(miLista.primero());

                cout<<"\n---Lista---\n";
                miLista.imprime();
                cout<<"\n\n\n";
            }
        }

        else if(opc==3){
            cout<< "ordenando...\n\n";
            miLista.ordena();
            miLista.imprime();
            cout<< endl << endl;
        }

        else if(opc==4){
            Constancia s;
            int pos;
            cout<< "\n\n\nIngresa los datos de la constancia a buscar:\n";
            cin>> s;

            pos = miLista.buscar(s);

            if(pos == -1)
                cout<< "\nEl alumno no ha solicitado una constancia o la lista esta vacia\n\n\n\n";
            else
                cout<< "\nLa solicitud esta en el indice " << pos << " de la lista\n\n\n\n";
        }
        else if(opc!=5)
            cout<< "Por favor ingresa un numero del 1 al 3\n";
    }while(opc!=5);
    return 0;
}
