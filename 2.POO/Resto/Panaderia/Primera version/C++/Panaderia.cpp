#include <iostream>
#include <cstdlib>
using namespace std;
#include "Panaderia.h"

int main() {
    Panaderia P1;
    
    cout << ("\n");
    system("color 0c");
    cout << "Ingresa el nombre del pan: ";
    getline(cin,P1.nombre);
    cout << "Ingresa un codigo para el pan: ";
    getline(cin,P1.codbarra);
    cout << "Ingresa la cantidad del pan: ";
    cin >> P1.cantidad;
    cout << "Ingresa el precio del pan: ";
    cin >> P1.costo;
    cout << "\n";

    cout << "Nombre del pan: " << P1.nombre << "\n";
    cout << "Codigo: " << P1.codbarra << "\n";
    cout << "Cantidad del pan: " << P1.cantidad << "\n";
    cout << "Precio: $" << P1.costo << "\n";
    cout << "Ganancias: $" << P1.costo * P1.cantidad << "\n";

    cout << "\n \n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 15/02/2023.";
    return 0;
}