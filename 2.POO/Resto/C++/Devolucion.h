#include <iostream>
using namespace std;
#include "Acredor.h"
#include "Persona.h"

class Devolucion : public Acredor, public Persona{
    private:
    string fecha;
    double pretada;
    double devuelta;
    double semanapagada;
    double apagar;
 
    public:
// Constructor vacio-------------------------------------------------------------------------
    Devolucion() : Acredor (2){
        this-> fecha = " ";
        this-> pretada = pretada;
        this-> devuelta = 0;
        this-> apagar = 0;
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
        return pretada;
    }

    void setCantidadprestada(double pretada) {
        if (pretada > 0){
            this-> pretada = pretada;
        }else throw -1;
    }

    // Cantidad devuelta-----------------------------------------
    double getCantidaddevuelta() {
        return devuelta;
    }

    void setCantidaddevuelta(double cantidaddevuelta) {
        if (cantidaddevuelta > 0){
            this-> devuelta = cantidaddevuelta;
        }else throw -1;
    }

    // Semana pagada---------------------------------------------
    double getSemanapagada() {
        return semanapagada;
    }

    void setSemanapagada(double semanapagada) {
        if(semanapagada > 0){
            this-> semanapagada = semanapagada;
        }else throw -1;
    }

    // Semanas apagar---------------------------------------------
    double getSemanasapagar() {
        return apagar;
    }

    void setSemanasapagar(double semanasapagar) {
        if (semanasapagar > 0){
            this-> apagar = semanasapagar;
        }else throw -1;
    }
 

// Metodos----------------------------------------------------------------
    double SemanasRestantes(){
        return apagar - semanapagada;
    }

    double SaldoRestante(){
        return  pretada-(devuelta * semanapagada);
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

    double Interes(){
        return 0;
    }

    double PrestamoTotal(){
        return 0;
    }
    
}; 

