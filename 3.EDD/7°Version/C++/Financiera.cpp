#include <iostream>
#include "ArbolBinario.h"
using namespace std;

Prestamo capturaPrestamo(){

    string palabras;
    double cantidad;
    Prestamo P1;
    // Datos del acreedor-------------------
    cout << "Ingresar datos del acreedor";
    cout << "\n \n";
    cout << "Ingresar nombres: ";
    getline(cin,palabras);
    P1.setNombre(palabras);
    cout << "Ingresar apellidos: ";
    getline(cin,palabras);
    P1.setApellido(palabras);

    //Datos del pretamo-------------------------
    cout <<"\n \n";
    cout << "Ingresar la cantidad a prestar: ";
    cin >> cantidad;
    P1.setPrestamo(cantidad);
    cout << "Ingresar el porcentaje de interes (%): ";
    cin >> cantidad;
    P1.setPorcentaje(cantidad);
    cout << "Ingresar la cantidad de semanas a pagar: ";
    cin >> cantidad;
    P1.setSemana(cantidad);
    return P1;
}

int main(){
    ArbolBinario Prestamos;
    cout << "Arbol binario";
    int respuesta;
    do{
        cout << "\n\n----------------------------------------------[CAPTURA]\n";
        Prestamo nuevoprestamo;
        nuevoprestamo= capturaPrestamo();
        Prestamos.agregar(nuevoprestamo);
        cout << "Oprime 1 continuar, 0 para finalizar= ";
        cin >> respuesta;
        cin.ignore();
    } while (respuesta !=0);

    cout << "\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=[PRE.ORDEN]-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    Prestamos.preorden();
    cout << "\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=[IN.ORDEN]-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
    Prestamos.inorden();
    cout << "\n\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=[POS.ORDEN]-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    Prestamos.posorden();
    return 0;
    
}