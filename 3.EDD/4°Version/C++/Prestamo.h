#include <iostream>
using namespace std;
#include "Acreedor.h"
class Prestamo : public Acreedor{
    private:
    string fecha;
    double prestamo;
    double Porcentaje;
    double Semana;
    public:
// Constructor------------------------------------------------------------------------------------------------------------
    Prestamo() : Acreedor(1){
        this->prestamo= 0;
        this->Porcentaje= 0;
        this->Semana= 0;
    }
// Setters y Getters------------------------------------------------------------------------------------------------------
    // Fecha--------------------------------------------
    string getFecha() {
        return fecha;
    }
    void setFecha(string fecha) {
        this-> fecha = fecha;
    }
    // Cantida prestada---------------------------------------------------------------------------------------------------
    double getPrestamo() {
        return prestamo;
    }
    void setPrestamo(double prestamo) {
        if (prestamo > 0){
            this-> prestamo = prestamo;
        } else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Cantidad de interes------------------------------------------------------------------------------------------------
    double getPorcentaje() {
        return Porcentaje;
    }
    void setPorcentaje(double Porcentaje) {
        if (Porcentaje > 0){
            this-> Porcentaje = Porcentaje;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Cantidad de semana-------------------------------------------------------------------------------------------------
    double getSemana(){
        return Semana;
    }
    void setSemana(double Semana){
        if (Semana > 0){
            this-> Semana = Semana;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
// Metodos----------------------------------------------------------------------------------------------------------------
    double Interes(){
        return prestamo * (Porcentaje/100);
    }
    double PrestamoTotal(){
        return this-> prestamo + Interes();
    }
    string toString(){
        string cadena= "";
        cadena += "------------------------------------------------------- \n";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n"; 
        cadena += "Telefono: " + getTelefono() + "\n";
        cadena += "Correo: " + getCorreo() + "\n";
        cadena += "Cantidad prestada: $" + Acadena(prestamo) + "\n";
        cadena += "Semanas a pagar: " + Bcadena(Semana) + "\n";
        cadena += "Interes (%): " + Ccadena(Porcentaje) + "%" + "\n";
        cadena += "Interes ($): $" + Dcadena(Interes()) + "\n";
        cadena += "Cantidad total: $" + Ecadena(PrestamoTotal()) + "\n";
        cadena += "------------------------------------------------------- \n";
        cadena += "Gracias por elegir CrediJAMD \n";
        cadena += "Numero de atencion XXX-XXX-XXXX \n";
        cadena += "Correo Anonimo7612@gmail.com \n";
        return cadena;
    }

// Funciones---------------------------------------------------------------------------------------------------------------

    string Acadena(double prestamo){ 
        string cadena;
        string numCadena= to_string(prestamo);
        cadena= numCadena.substr(0,numCadena.length()-4);
        return cadena;
    }

    string Bcadena(double Semana){
        string cadena;
        string numCadena= to_string(Semana);
        cadena= numCadena.substr(0,numCadena.length()-4);
        return cadena;
    }

    string Ccadena(double Porcentaje){
        string cadena;
        string numCadena= to_string(Porcentaje);
        cadena= numCadena.substr(0,numCadena.length()-5);
        return cadena;
    }

    string Dcadena(double I){
        string cadena;
        string numCadena= to_string(Interes());
        cadena= numCadena.substr(0,numCadena.length()-4);
        return cadena;
    }

    string Ecadena(double PT){
        string cadena;
        string numCadena= to_string(PrestamoTotal());
        cadena= numCadena.substr(0,numCadena.length()-4);
        return cadena;
    }

};