#include<iostream>
using namespace std;

#ifndef ACREDOR_H_
#define ACREDOR_H_
class Acredor{

    private:
    string nombre;
    string apellido;
    int clave;
 
// Constructores ---------------------------------------------------
    public:
    Acredor(){
        this-> nombre = "";
        this-> clave = 0;
        this-> apellido = "";
  
    }

    Acredor(int clave){
        this-> nombre = "";
        this-> clave = clave;
        this-> apellido = "";
  
    }

    Acredor(string nombre, string apellido, int clave){
        this-> nombre = nombre;
        this-> clave = clave;
        this-> apellido = apellido;

    }
// Setters y Getters------------------------------------------------------

    // Nombre ------------------------------------------------------------
    string getNombre() {
        return this->nombre;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    // Clave -------------------------------------------------------------
    int getClave() {
        return this->clave;
    }

    void setClave(int clave) {
        this->clave = clave;
    }

    // Apellido -----------------------------------------------------------
    string getApellido() {
        return this->apellido;
    }

    void setApellido(string apellido) {
        this->apellido = apellido;
    }
 
//Abstraccion--------------------------------------------------------------
    virtual string toString()= 0;
};
#endif