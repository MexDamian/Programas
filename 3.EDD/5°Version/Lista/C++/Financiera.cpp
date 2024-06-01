#include <iostream>
#include <list>
#include <cstdlib>
#include "Prestamo.h"
using namespace std;


int main(){
    system("color 09");
    list<Prestamo> coleccion;
    int continuar;

    string palabras, eleccion;
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

        // Agregar a la lista
        cout << "[i] Agregar al inicio. [f] Agregar al final | elige: ";
        cin >> eleccion;
        if(eleccion == "i"){
            coleccion.push_front(P1);
        } else {
            coleccion.push_back(P1);
        }
        cout << "Prestamo registrado...... \n";
        cout << "Presiona 1 Para continuar y o para finalizar: ";
        cin >> continuar;
        cin.ignore();

        

    }while(continuar == 1);
    // Impresion lista----------------------------------------
        cout << "Extrayendo los elementos de la lista.\n";
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";	
        while(!coleccion.empty()){
            Prestamo ejemplo;
            string eleccion;
            cout << "[i] Extrae del inicio. [f] Extrae del final. | Eleccion: ";
            cin >> eleccion;
            if(eleccion == "i"){
                ejemplo= coleccion.front();
                coleccion.pop_front();
            } else {
                ejemplo= coleccion.back();
                coleccion.pop_back();
            }
                
            cout << ejemplo.toString();
        }

    return 0;
}