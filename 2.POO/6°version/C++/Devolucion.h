#include <iostream>
using namespace std;
#include "Acredor.h"
#include "Persona.h"

class Devolucion : public Acredor, public Persona{
    private:
    string fecha;
    double pretada;
    double devuelta;
    double pagada;
    double semanasapagar;
 
    public:
// Constructor vacio-------------------------------------------------------------------------
    Devolucion() : Acredor (2){
        this-> fecha = " ";
        this-> pretada = 0;
        this-> devuelta = 0;
        this-> semanasapagar = 0;
        this-> pagada = 0;
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
        return pretada;
    }

    void setCantidadprestada(double pretada) {
        this-> pretada = pretada;
    }

    // Cantidad devuelta-----------------------------------------
    double getCantidaddevuelta() {
        return devuelta;
    }

    void setCantidaddevuelta(double cantidaddevuelta) {
        this-> devuelta = cantidaddevuelta;
    }

    // Semana pagada---------------------------------------------
    double getSemanapagada() {
        return pagada;
    }

    void setSemanapagada(double semanapagada) {
        this-> pagada = semanapagada;
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
        return semanasapagar - pagada;
    }

    double SaldoRestante(){
        return  pretada-(devuelta * pagada);
    }

    string tostring(){
        string cadena ="";
        cadena += "\n \n";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";
        cadena += "Fecha: " + fecha + "\n";
        cadena += "Abono: $" + Acadena(devuelta) + "\n";
        cadena += "Semanas restantes: " + Bcadena(SemanasRestantes()) + "\n";
        cadena += "Saldo restante: $" + Ccadena(SaldoRestante()) + "\n";
        return cadena;
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

    //Abstraccion----------------------------------------------------

    string getNombre(){
        return 0;
    }

    string getApellido(){
        return 0;
    }
    
}; 

