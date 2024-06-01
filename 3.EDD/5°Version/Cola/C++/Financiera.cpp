#include <iostream>
#include <queue>
#include <cstdlib>
#include "Prestamo.h"
using namespace std;

int main(){
    system("color 05");
    queue<Prestamo> coleccion;
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

        coleccion.push(P1);
        cout << "Prestamos registrado...... \n\n";
       
        cout << "Presiona 1 Para continuar y o para finalizar: ";
        cin >> continuar;
        cin.ignore();

    }while(continuar == 1);

    cout << "\nLista de prestamos capturados del dia:\n";
    cout << "\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    while(!coleccion.empty()){
        Prestamo P1= coleccion.front();
        cout << P1.toString();
        coleccion.pop();
    }
   
    return 0;
}