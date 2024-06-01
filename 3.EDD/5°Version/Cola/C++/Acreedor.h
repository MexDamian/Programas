#include<iostream>
using namespace std;
#ifndef ACREDOR_H_
#define ACREDOR_H_
class Acreedor{
    private:
    string nombre;
    string apellido;
    string clave;
    string telefono;
    string correo;
    int movimiento;

    public:
// Constructures----------------------------------------------------------------------------------------------------------
    Acreedor(){
        this-> nombre = "";
        this-> movimiento = 0;
        this-> apellido = "";
  
    }
    Acreedor(int movimiento){
        this-> nombre = "";
        this-> movimiento = movimiento;
        this-> apellido = "";
  
    }
// Setters y Getters------------------------------------------------------------------------------------------------------

    // Nombre-------------------------------------------------------------------------------------------------------------
    string getNombre() {
        return this-> nombre;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }
    //--------------------------------------------------------------------------------------------------------------------

    // Apellido-----------------------------------------------------------------------------------------------------------
    string getApellido() {
        return this-> apellido;
    }

    void setApellido(string apellido) {
        this->apellido = apellido;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Clave--------------------------------------------------------------------------------------------------------------
    string getClave(){
        return this-> clave;
    }
    void setClave(string clave){
        this->clave = clave;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Telefono-----------------------------------------------------------------------------------------------------------
    string getTelefono(){
        return this-> telefono;
    }

    void setTelefono(string telefono){
        this-> telefono = telefono;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Correo-------------------------------------------------------------------------------------------------------------
    string getCorreo(){
        return this->correo;
    }

    string setCorreo(string correo){
        this-> correo = correo;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Movimiento---------------------------------------------------------------------------------------------------------
    int getMovimiento() {
        return this-> movimiento;
    }

    void setMovimiento(int movimiento) {
        this->movimiento = movimiento;
    }
    //--------------------------------------------------------------------------------------------------------------------

};
#endif