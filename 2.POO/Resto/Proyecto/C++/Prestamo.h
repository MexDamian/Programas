#include <iostream>
using namespace std;
#include "Acreedor.h"
#include "Datos.h"
class Prestamo : public Acreedor, public Datos{
    private:
    string fecha;
    double prestamo;
    double cantidadDeInteres;
    double Semana;
    public:
// Constructor------------------------------------------------------------------------------------------------------------
    Prestamo() : Acreedor(1){
        this->prestamo= 0;
        this->cantidadDeInteres= 0;
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
    double getCantidadPrestada() {
        return prestamo;
    }
    void setCantidadPrestada(double cantidadPrestada) {
        if (cantidadPrestada > 0){
            this-> prestamo = cantidadPrestada;
        } else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Cantidad de interes------------------------------------------------------------------------------------------------
    double getCantidadDeInteres() {
        return cantidadDeInteres;
    }
    void setCantidadDeInteres(double cantidadDeInteres) {
        if (cantidadDeInteres > 0){
            this-> cantidadDeInteres = cantidadDeInteres;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Cantidad de semana-------------------------------------------------------------------------------------------------
    double getCantidadDeSemana(){
        return Semana;
    }
    void setCantidadDeSemana(double cantidadDeSemana){
        if (cantidadDeSemana > 0){
            this-> Semana = cantidadDeSemana;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
// Metodos----------------------------------------------------------------------------------------------------------------
    double Interes(){
        return prestamo * (cantidadDeInteres/100);
    }
    double PrestamoTotal(){
        return this-> prestamo + Interes();
    }
    string toString(){
        string cadena= "";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";   
        cadena += "Cantidad prestada: $" + Acadena(prestamo) + "\n";
        cadena +="Semanas a pagar: " + Bcadena(Semana) + "\n";
        cadena += "Interes (%): " + Ccadena(cantidadDeInteres) + "%" + "\n";
        cadena += "Interes ($): $" + Dcadena(Interes()) + "\n";
        cadena += "Cantidad total: $" + Ecadena(PrestamoTotal()) + "\n";
        return cadena;
    }

// Funciones---------------------------------------------------------------------------------------------------------------

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

    double SaldoRestante() {
        return 0;
    }

    double SemanasRestantes() {
        return 0;
    }

};