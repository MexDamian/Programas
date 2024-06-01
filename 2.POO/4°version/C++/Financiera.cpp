#include <iostream>
#include <cstdlib>
using namespace std;
#include "Devolucion.h"
#include "Prestamo.h"


int main() {
    system("color 02");
    cout << "\n \n";

    Devolucion D1;
    Prestamo P1;
    string palabras;
    double cantidades;
    int movimiento, i=0;

    do {
        cout << "\n \n";
        cout << "Elige una opcion. \n";
        cout << "\n";
        cout << "1) Agregar prestamo. \n";
        cout << "2) Agregar devolucion. \n";
        cout << "\n";
        cout << "Opcion: ";
        cin >> movimiento;
        cin.ignore();

        switch(movimiento) {

            case 1:
            cout << "\n \n";
            cout << "Ingresa la fecha: ";
            getline(cin,palabras);
            P1.setFecha(palabras);
            cout << "Ingresa el nombre: ";
            getline(cin,palabras);
            P1.setNombre(palabras);
            cout << "Ingresa los apellido: ";
            getline(cin,palabras);
            P1.setApellido(palabras);
            cout << "Ingresa una clave de indentificacion: ";
            getline(cin,palabras);
            P1.setClave(palabras);
            cout << "Ingresa la cantidad del prestamo: ";
            cin >> cantidades;
            P1.setCantidadPrestada(cantidades);
            cout << "Ingresa el porcentage de interes: ";
            cin >> cantidades;
            P1.setCantidadDeInteres(cantidades);
            cout << "Ingresa la cantidad de semanas a pagar: ";
            cin >> cantidades;
            P1.setCantidadDeSemana(cantidades);

            cout << P1.DatosDelPrestamo();
            break;

            case 2:
            cout << "\n \n";
            cout << "Ingresa la fecha: ";
            getline(cin,palabras);
            D1.setFecha(palabras);
            cout << "Ingresa el nombre: ";
            getline(cin,palabras);
            D1.setNombre(palabras);
            cout << "Ingresa los apellido: ";
            getline(cin,palabras);
            D1.setApellido(palabras);
            cout << "Ingresa una clave de indentificacion: ";
            getline(cin,palabras);
            D1.setClave(palabras);
            cout << "Ingresa la cantidad del prestamo: ";
            cin >> cantidades;
            D1.setCantidadprestada(cantidades);
            cout << "Ingresa la cantidad devuelta: ";
            cin >> cantidades;
            D1.setCantidaddevuelta(cantidades);
            cout << "Ingresa la cantidad de semanas a pagar: ";
            cin >> cantidades;
            D1.setSemanasapagar(cantidades);
            cout << "Ingresa el numero de la semana pagada: ";
            cin >> cantidades;
            D1.setSemanapagada(cantidades);

            
            cout << D1.tostring();
            break;
        }

        i++;
    }while(i<2);

    cout << "\n \n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 14/03/2023.";
    return 0;
}



/*
    cout << "\n \n";

    Devolucion D2("Jesus Alejandro Mex Damian", "1100-91", "23/02/2023");

    cout << "Nombre: " << D2.nombre << "\n";
    cout << "Fecha: " << D2.fecha << "\n";
    cout << "Clave: " << D2.clave << "\n";
    cout << "Abono: $" << D2.cantidaddevuelta << "\n";
    cout << "Semanas restantes: " << D2.semanasapagar - D2.semanapagada << "\n";
    cout << "Saldo restante: $" << D2.cantidadprestada -(D2.cantidaddevuelta * D2.semanapagada)  << "\n";
    cout << "\n";

    cout << "\n \n";

    Devolucion D3(2800, 200, 14, 6);
    cout << "Nombre: " << D3.nombre << "\n";
    cout << "Fecha: " << D3.fecha << "\n";
    cout << "Clave: " << D3.clave << "\n";
    cout << "Abono: $" << D3.cantidaddevuelta << "\n";
    cout << "Semanas restantes: " << D3.semanasapagar - D3.semanapagada << "\n";
    cout << "Saldo restante: $" << D3.cantidadprestada -(D3.cantidaddevuelta * D3.semanapagada)  << "\n";
    cout << "\n";
*/