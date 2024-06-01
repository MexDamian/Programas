#include <iostream>
using namespace std;
#include "Acredor.h"


class Prestamo : public Acredor{
    private:
    string fecha;
    double cantidadPrestada;
    double cantidadDeInteres;
    double cantidadDeSemana;

    public:
 
// Constructor vacio-----------------------------

    Prestamo() : Acredor(1){
        this->fecha= "";
        this->cantidadPrestada= 0;
        this->cantidadDeInteres= 0;
        this->cantidadDeSemana= 0;
    }

    Prestamo(string nombre, string apellido) : Acredor(nombre, apellido, 1){
        //
    }

    Prestamo(string nombre, string apellido, string fecha, double cantidadPrestada) 
    : Acredor(nombre, apellido, 1){
        this->fecha= fecha;
        this->cantidadPrestada= cantidadPrestada;
    }

// Setters y Getters------------------------------------

    // Fecha--------------------------------------------
    string getFecha() {
        return fecha;
    }

    void setFecha(string fecha) {
        this-> fecha = fecha;
    }

    // Cantida prestada----------------------------------
    double getCantidadPrestada() {
        return cantidadPrestada;
    }

    void setCantidadPrestada(double cantidadPrestada) {
        this-> cantidadPrestada = cantidadPrestada;
    }

    // Cantidad de interes-------------------------------
    double getCantidadDeInteres() {
        return cantidadDeInteres;
    }

    void setCantidadDeInteres(double cantidadDeInteres) {
        this-> cantidadDeInteres = cantidadDeInteres;
    }

    // Cantidad de semana--------------------------------

    double getCantidadDeSemana(){
        return cantidadDeSemana;
    }

    void setCantidadDeSemana(double cantidadDeSemana){
        this-> cantidadDeSemana = cantidadDeSemana;
    }

// Metodos------------------------------------------------
    double Interes(){
        return cantidadPrestada * (cantidadDeInteres/100);
    }

    double PrestamoTotal(){
        return this-> cantidadPrestada + Interes();
    }

// Funciones-------------------------------------------------------

    string Acadena(double cantidadPrestada){
        string cadena;
        string numCadena= to_string(cantidadPrestada);
        cadena= numCadena.substr(0,numCadena.length()-4);
        return cadena;
    }

    string Bcadena(double cantidadDeSemana){
        string cadena;
        string numCadena= to_string(cantidadDeSemana);
        cadena= numCadena.substr(0,numCadena.length()-4);
        return cadena;
    }

    string Ccadena(double cantidadDeInteres){
        string cadena;
        string numCadena= to_string(cantidadDeInteres);
        cadena= numCadena.substr(0,numCadena.length()-6);
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

    string DatosDelPrestamo(){
        string cadena= "";
        cadena += "\n \n";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";
        cadena += "Fecha: " + fecha + "\n";
        cadena += "Cantidad prestada: $" + Acadena(cantidadPrestada) + "\n";
        cadena +="Semanas a pagar: " + Bcadena(cantidadDeSemana) + "\n";
        cadena += "Interes (%): " + Ccadena(cantidadDeInteres) + "%" + "\n";
        cadena += "Interes ($): $" + Dcadena(Interes()) + "\n";
        cadena += "Cantidad total: $" + Ecadena(PrestamoTotal()) + "\n";
        return cadena;
    }
};