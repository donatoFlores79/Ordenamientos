#include "Solicitud.h"

using namespace std;

Solicitud::Solicitud(){
    nombre = "";
    carrera = "";
    prepa = "";
    promedio = 0;
}

float Solicitud::getPromedio() const{
    return promedio;
}

bool Solicitud::operator == (const Solicitud& s){
    return (nombre == s.nombre && carrera == s.carrera && prepa == s.prepa && promedio == s.promedio);
}

bool Solicitud::operator < (const Solicitud& s){
    return(promedio < s.promedio);
}

istream& operator >> (istream& i, Solicitud& solicitud){
    cout<< "Nombre:"; i>> solicitud.nombre;
    cout<< "Carrera:"; i>> solicitud.carrera;
    cout<< "Preparatoria:"; i>> solicitud.prepa;
    cout<< "Promedio:"; i>> solicitud.promedio;

    return i;
}

ostream& operator << (ostream& o, const Solicitud& solicitud){
    o<< solicitud.nombre << "|" << solicitud.carrera << "|" << solicitud.prepa << "|" << solicitud.promedio;

    return o;
}
