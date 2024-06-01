#include <iostream>
using namespace std;
#include "Acredor.h"

class Devolucion : public Acredor{
    private:
    string fecha;
    double cantidadprestada;
    double cantidaddevuelta;
    double semanapagada;
    double semanasapagar;
 
    public:
// Constructor vacio-------------------------------------------------------------------------
    Devolucion() : Acredor (2){
        this-> fecha = " ";
        this-> cantidadprestada = 0;
        this-> cantidaddevuelta = 0;
        this-> semanasapagar = 0;
        this-> semanapagada = 0;
    }

// Setters y Getters------------------------------------

    // Fecha--------------------------------------------
    string getFecha() {
        return fecha;
    }

    void setFecha(string fecha) {
        this-> fecha = fecha;
    }


    // Cantidad Prestada--------------------------------------
    double getCantidadprestada() {
        return cantidadprestada;
    }

    void setCantidadprestada(double cantidadprestada) {
        this-> cantidadprestada = cantidadprestada;
    }

    // Cantidad devuelta-----------------------------------------
    double getCantidaddevuelta() {
        return cantidaddevuelta;
    }

    void setCantidaddevuelta(double cantidaddevuelta) {
        this-> cantidaddevuelta = cantidaddevuelta;
    }

    // Semana pagada---------------------------------------------
    double getSemanapagada() {
        return semanapagada;
    }

    void setSemanapagada(double semanapagada) {
        this-> semanapagada = semanapagada;
    }

    // Semanas apagar---------------------------------------------
    double getSemanasapagar() {
        return semanasapagar;
    }

    void setSemanasapagar(double semanasapagar) {
        this-> semanasapagar = semanasapagar;
    }


// Metodos----------------------------------------------------------------
    double SemanasRestantes(){
        return semanasapagar - semanapagada;
    }

    double SaldoRestante(){
        return  cantidadprestada-(cantidaddevuelta * semanapagada);
    }

// Funcion de cantidades--------------------------------------------------

    string Acadena(double cantidaddevuelta){
        string cadena;
        string numCadena= to_string(cantidaddevuelta);
        cadena= numCadena.substr(0,numCadena.length()-4);
        return cadena;
    }

    string Bcadena(double SRS){
        string cadena;
        string numCadena= to_string(SemanasRestantes());
        cadena= numCadena.substr(0,numCadena.length()-4);
        return cadena;
    }

    string Ccadena(double SR){
        string cadena;
        string numCadena= to_string(SaldoRestante());
        cadena= numCadena.substr(0,numCadena.length()-4);
        return cadena;
    }

    string tostring(){
        string cadena ="";
        cadena += "\n \n";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";
        cadena += "Fecha: " + fecha + "\n";
        cadena += "Abono: $" + Acadena(cantidaddevuelta) + "\n";
        cadena += "Semanas restantes: " + Bcadena(SemanasRestantes()) + "\n";
        cadena += "Saldo restante: $" + Ccadena(SaldoRestante()) + "\n";
        return cadena;
    }
}; 

// esplit, crear una funcion 