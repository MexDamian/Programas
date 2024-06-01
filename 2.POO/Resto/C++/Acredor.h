#include<iostream>
using namespace std;

#ifndef ACREDOR_H_
#define ACREDOR_H_
class Acredor{

    private:
    string nombre;
    string apellido;
    int clave;
 
     
    public:

    string getNombre() {
        return this->nombre;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    int getClave() {
        return this->clave;
    }

    void setClave(int clave) {
        this->clave = clave;
    }

    string getApellido() {
        return this->apellido;
    }

    void setApellido(string apellido) {
        this->apellido = apellido;
    }

    /* Abstraccion-------------------------------------------------

    virtual double SaldoRestante()= 0;
    virtual double SemanasRestantes() = 0;
    virtual double Interes() = 0;
    virtual double PrestamoTotal() = 0;

    */

};
#endif