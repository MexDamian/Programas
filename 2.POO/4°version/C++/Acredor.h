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

};
#endif