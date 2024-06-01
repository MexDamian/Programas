#include <iostream>
#include "nodo.h"
using namespace std;

int main(int argc, char *argv[]){

    nodoPrestamo *inicio = new nodoPrestamo();
    int continuar;

    string palabras;
    double cantidad;
    Prestamo P1;

    do{
        // Datos del acreedor-------------------
        cout << "Ingresar datos del acreedor";
        cout << "\n \n";
        cout << "Ingresar nombres: ";
        getline(cin,palabras);
        P1.setNombre(palabras);
        cout << "Ingresar apellidos: ";
        getline(cin,palabras);
        P1.setApellido(palabras);
        cout << "Ingresar un numero telefonico: ";
        getline(cin,palabras);
        P1.setTelefono(palabras);
        cout << "Ingresar correo electronico (Opcional): ";
        getline(cin,palabras);
        P1.setCorreo(palabras);

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

        nodoPrestamo *nodoP1= new nodoPrestamo(P1);
       
        nodoPrestamo*iterador= inicio;
        while( iterador->getEnlace() != NULL ){ 
            iterador= iterador->getEnlace();
        }
        iterador->setEnlace( nodoP1 );   
        cout << "... .. . Prestamo registrado!\n\n";
       
        cout << "Presiona 1 Para continuar y o para finalizar";
        cin >> continuar;
        cin.ignore();

    }while(continuar == 1);

    cout << "\n Lista de prestamo \n";
    nodoPrestamo *iterador= inicio->getEnlace();
    while( iterador != NULL ){
        cout << iterador-> getPreta().toString() << "\n \n";
        iterador= iterador->getEnlace();

    }

    return 0;
}