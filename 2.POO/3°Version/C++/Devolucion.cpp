#include <iostream>
#include <cstdlib>
using namespace std;
#include "Devolucion.h"

int main() {
    system("color 02");
    cout << "\n \n";

    Devolucion D1;
    string palabras;
    double cantidades;

    cout << "Ingresa la fecha: ";
    getline(cin,palabras);
    D1.setFecha(palabras);
    cout << "Ingresa el nombre: ";
    getline(cin,palabras);
    D1.setNombre(palabras);
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
    cout << "\n";
     
    cout << D1.tostring();


    cout << "\n \n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 1/03/2023.";
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