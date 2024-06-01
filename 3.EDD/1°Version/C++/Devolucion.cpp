#include <iostream>
#include <cstdlib>
using namespace std;
#include "Devolucion.h"

int main() {
    system("color 72");
    cout << "\n \n";

    Devoluciones D1;
    Devoluciones D2 ("Jesus Alejandro Mex Damian","6721", "30/08/2023", 1000, 100, 14, 5);
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
    D1.setPrestamo(cantidades);
    cout << "Ingresa la cantidad devuelta: ";
    cin >> cantidades;
    D1.setDevolucion(cantidades);
    cout << "Ingresa la cantidad de semanas a pagar: ";
    cin >> cantidades;
    D1.setApagar(cantidades);
    cout << "Ingresa el numero de la semana pagada: ";
    cin >> cantidades;
    D1.setPagada(cantidades);
    cout << "\n";
    
    cout << "Nombre: " << D1.getNombre() << "\n";
    cout << "Fecha: " << D1.getFecha() << "\n";
    cout << "Clave: " << D1.getClave() << "\n";
    cout << "Abono: $" << D1.getDevolucion() << "\n";
    cout << "Semanas restantes: " << D1.getApagar() - D1.getPagada() << "\n";
    cout << "Saldo restante: $" << D1.getPrestamo()-(D1.getDevolucion() * D1.getPagada())  << "\n";
    cout << "\n";

    cout << "Nombre: " << D2.getNombre() << "\n";
    cout << "Fecha: " << D2.getFecha() << "\n";
    cout << "Clave: " << D2.getClave() << "\n";
    cout << "Abono: $" << D2.getDevolucion() << "\n";
    cout << "Semanas restantes: " << D2.getApagar() - D2.getPagada() << "\n";
    cout << "Saldo restante: $" << D2.getPrestamo()-(D2.getDevolucion() * D2.getPagada())  << "\n";
    cout << "\n";

    cout << "\n \n";
    cout << "---------------------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 30/08/2023.";
    return 0;
}



/*
    cout << "\n \n";

    Devolucion D2("Jesus Alejandro Mex Damian", "1100-91", "23/02/2023");

    cout << "Nombre: " << D2.nombre << "\n";
    cout << "Fecha: " << D2.fecha << "\n";
    cout << "Clave: " << D2.clave << "\n";
    cout << "Abono: $" << D2.devolucion << "\n";
    cout << "Semanas restantes: " << D2.apagar - D2.pagada << "\n";
    cout << "Saldo restante: $" << D2.prestamo -(D2.devolucion * D2.pagada)  << "\n";
    cout << "\n";

    cout << "\n \n";

    Devolucion D3(2800, 200, 14, 6);
    cout << "Nombre: " << D3.nombre << "\n";
    cout << "Fecha: " << D3.fecha << "\n";
    cout << "Clave: " << D3.clave << "\n";
    cout << "Abono: $" << D3.devolucion << "\n";
    cout << "Semanas restantes: " << D3.apagar - D3.pagada << "\n";
    cout << "Saldo restante: $" << D3.prestamo -(D3.devolucion * D3.pagada)  << "\n";
    cout << "\n";
*/