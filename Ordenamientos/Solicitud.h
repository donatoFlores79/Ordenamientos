#ifndef SOLICITUD_H_INCLUDED
#define SOLICITUD_H_INCLUDED

#include <iostream>

class Solicitud{
private:
    std::string nombre, carrera, prepa;
    float promedio;
public:
    Solicitud();

    float getPromedio() const;

    bool operator == (const Solicitud&);
    bool operator < (const Solicitud&);

    friend std::istream& operator >> (std::istream&, Solicitud&);
    friend std::ostream& operator << (std::ostream&, const Solicitud&);
};

#endif // SOLICITUD_H_INCLUDED
