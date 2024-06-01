#include <iostream>
using namespace std;
#include "Acreedor.h"

#ifndef DEVOLUCION_H_
#define DEVOLUCION_H_
class Devolucion : public Acreedor{
    private:
    string fecha;
    double prestada;
    double devuelta;
    double pagada;
    double apagar;
    public:
// Constructor------------------------------------------------------------------------------------------------------------
    Devolucion() : Acreedor (2){
        this-> prestada = prestada;
        this-> devuelta = 0;
        this-> apagar = 0;
        this-> pagada = 0;
    }
// Setters y Getters------------------------------------------------------------------------------------------------------
    // Fecha--------------------------------------------
    string getFecha() {
        return fecha;
    }
    void setFecha(string fecha) {
        this-> fecha = fecha;
    }
    // Cantidad Prestada--------------------------------------------------------------------------------------------------
    double getPrestada() {
        return prestada;
    }
    void setPrestada(double prestada) {
        if (prestada > 0){
            this-> prestada = prestada;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Cantidad devuelta--------------------------------------------------------------------------------------------------
    double getDevuelta() {
        return devuelta;
    }
    void setDevuelta(double devuelta) {
        if (devuelta > 0){
            this-> devuelta = devuelta;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Semana pagada------------------------------------------------------------------------------------------------------
    double getPagada() {
        return pagada;
    }
    void setPagada(double pagada) {
        if(pagada > 0){
            this-> pagada = pagada;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Semanas apagar-----------------------------------------------------------------------------------------------------
    double getApagar() {
        return apagar;
    }
    void setApagar(double apagar) {
        if (apagar > 0){
            this-> apagar = apagar;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
// Metodos----------------------------------------------------------------------------------------------------------------
    double SemanasRestantes(){
        return apagar - pagada;
    }

    double SaldoRestante(){
        return  prestada-(devuelta * pagada);
    }

    string toString(){
        string cadena ="";
        cadena += "------------------------------------------------------- \n";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";       
        cadena += "Abono: $" + Acadena(devuelta) + "\n";
        cadena += "Semanas restantes: " + Bcadena(SemanasRestantes()) + "\n";
        cadena += "Saldo restante: $" + Ccadena(SaldoRestante()) + "\n";
        cadena += "------------------------------------------------------- \n";
        cadena += "Gracias por elegir CrediJAMD \n";
        cadena += "Numero de atencion XXX-XXX-XXXX \n";
        cadena += "Correo Anonimo7612@gmail.com \n";
        return cadena;
    }

// Funcion de cantidades--------------------------------------------------------------------------------------------------

    string Acadena(double devuelta){
        string cadena;
        string numCadena= to_string(devuelta);
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

};
#endif