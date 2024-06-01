#include <iostream>
using namespace std;
#include "Acreedor.h"
#include "Datos.h"
class Devolucion : public Acreedor, public Datos{
    private:
    string fecha;
    double pretada;
    double cantidaddevuelta;
    double pagada;
    double apagar;
    public:
// Constructor------------------------------------------------------------------------------------------------------------
    Devolucion() : Acreedor (2){
        this-> pretada = pretada;
        this-> cantidaddevuelta = 0;
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
    double getCantidadprestada() {
        return pretada;
    }
    void setCantidadprestada(double pretada) {
        if (pretada > 0){
            this-> pretada = pretada;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Cantidad devuelta--------------------------------------------------------------------------------------------------
    double getCantidaddevuelta() {
        return cantidaddevuelta;
    }
    void setCantidaddevuelta(double cantidaddevuelta) {
        if (cantidaddevuelta > 0){
            this-> cantidaddevuelta = cantidaddevuelta;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Semana pagada------------------------------------------------------------------------------------------------------
    double getSemanapagada() {
        return pagada;
    }
    void setSemanapagada(double semanapagada) {
        if(semanapagada > 0 && semanapagada <= apagar){
            this-> pagada = semanapagada;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
    // Semanas apagar-----------------------------------------------------------------------------------------------------
    double getSemanasapagar() {
        return apagar;
    }
    void setSemanasapagar(double semanasapagar) {
        if (semanasapagar > 0){
            this-> apagar = semanasapagar;
        }else throw -1;
    }
    //--------------------------------------------------------------------------------------------------------------------
// Metodos----------------------------------------------------------------------------------------------------------------
    double SemanasRestantes(){
        return apagar - pagada;
    }
    double SaldoRestante(){
        return  pretada-(cantidaddevuelta * pagada);
    }
    string toString(){
        string cadena ="";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";       
        cadena += "Abono: $" + Acadena(cantidaddevuelta) + "\n";
        cadena += "Semanas restantes: " + Bcadena(SemanasRestantes()) + "\n";
        cadena += "Saldo restante: $" + Ccadena(SaldoRestante()) + "\n";
        return cadena;
    }

// Funcion de cantidades--------------------------------------------------------------------------------------------------

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

    double Interes() {
        return 0;
    }

    double PrestamoTotal () {
        return 0;
    }
    
};