#include <iostream>
#include <cstdlib>
using namespace std;
#include "Devolucion.h"

int main() {
    system("color 72");
    cout << "\n \n";

    int repeticiones = 3;
    Devoluciones D1 [repeticiones];
    int D=0, i=0;
    string palabras;
    double cantidades;

    for(int i=0;i<repeticiones;i++) {

        cout << "Ingresa la fecha: ";
        getline(cin,palabras);
        D1[D].setFecha(palabras);
        cout << "Ingresa el nombre: ";
        getline(cin,palabras);
        D1[D].setNombre(palabras);
        cout << "Ingresa una clave de indentificacion: ";
        getline(cin,palabras);
        D1[D].setClave(palabras);
        cout << "Ingresa la cantidad del prestamo: ";
        cin >> cantidades;
        D1[D].setPrestamo(cantidades);
        cout << "Ingresa la cantidad devuelta: ";
        cin >> cantidades;
        D1[D].setDevolucion(cantidades);
        cout << "Ingresa la cantidad de semanas a pagar: ";
        cin >> cantidades;
        D1[D].setApagar(cantidades);
        cout << "Ingresa el numero de la semana pagada: ";
        cin >> cantidades;
        D1[D].setPagada(cantidades);
        cout << "\n";
        cin.ignore();
        D++;
    }
    
    for(int D=0;D<repeticiones;D++) {
        cout << "Nombre: " << D1[D].getNombre() << "\n";
        cout << "Fecha: " << D1[D].getFecha() << "\n";
        cout << "Clave: " << D1[D].getClave() << "\n";
        cout << "Abono: $" << D1[D].getDevolucion() << "\n";
        cout << "Semanas restantes: " << D1[D].getApagar() - D1[D].getPagada() << "\n";
        cout << "Saldo restante: $" << D1[D].getPrestamo()-(D1[D].getDevolucion() * D1[D].getPagada())  << "\n";
        cout << "\n";
    }


    cout << "\n \n";
    cout << "---------------------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 06/09/2023.";
    return 0;
}

  

 