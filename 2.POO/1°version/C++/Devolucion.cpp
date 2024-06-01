#include <iostream>
#include <cstdlib>
using namespace std;
#include "Devolucion.h"

int main() {
    Devolucion D1;
 
    cout << "\n";
    system("color 02");
    cout << "Ingresa la fecha: ";
    getline(cin,D1.fecha);
    cout << "Ingresa el nombre: ";
    getline(cin,D1.nombre);
    cout << "Ingresa una clave de indentificacion: ";
    getline(cin,D1.clave);
    cout << "Ingresa la cantidad del prestamo: ";
    cin >> D1.cantidadprestada;
    cout << "Ingresa la cantidad devuelta: ";
    cin >> D1.cantidaddevuelta;
    cout << "Ingresa la cantidad de semanas a pagar: ";
    cin >> D1.semanaapagar;
    cout << "Ingresa el numero de la semana pagada: ";
    cin >> D1.semanapagada;
    cout << "\n";

    cout << "Nombre: " << D1.nombre << "\n";
    cout << "Fecha: " << D1.fecha << "\n";
    cout << "Clave: " << D1.clave << "\n";
    cout << "Abono: $" << D1.cantidaddevuelta << "\n";
    cout << "Semanas restantes: " << D1.semanaapagar - D1.semanapagada << "\n";
    cout << "Saldo restante: $" << D1.cantidadprestada -(D1.cantidaddevuelta * D1.semanapagada)  << "\n";
    cout << "\n";

    cout << "\n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 15/02/2023.";
    return 0;
}