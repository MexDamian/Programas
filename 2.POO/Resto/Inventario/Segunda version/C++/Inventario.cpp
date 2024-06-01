#include<iostream>
using namespace std;
#include"Inventario.h"

int main(){
    Inventario I1;

    cout << "Ingresa el nombre del producto: ";
    getline(cin,I1.nombre);
    cout << "Ingresa el codigo de barras: ";
    getline(cin,I1.codigo);
    cout << "Ingresa la cantidad del producto: ";
    cin >> I1.cantidad;
    cout << "Ingresa el precio del producto: ";
    cin >> I1.costo;
   ;
    cout << "\n";
    cout << "Nombre del producto: " << I1.nombre << "\n";
    cout << "Codigo de barras: " << I1.codigo << "\n";
    cout << "Cantidad del producto: " << I1.cantidad << "\n";
    cout << "Precio: $" << I1.costo << "\n";
    cout << "Ganancias del producto: $" << I1.costo * I1.cantidad << "\n";

    cout << "\n \n";

    Inventario I2("Leche 1L", "2952624");

    cout << "Nombre del producto: " << I2.nombre << "\n";
    cout << "Codigo de barras: " << I2.codigo << "\n";
    cout << "Cantidad del producto: " << I2.cantidad << "\n";
    cout << "Precio: $" << I2.costo << "\n";
    cout << "Ganancias del producto: $" << I2.costo * I2.cantidad << "\n";

    cout << "\n \n";

    Inventario I3(20, 16);

    cout << "Nombre del producto: " << I3.nombre << "\n";
    cout << "Codigo de barras: " << I3.codigo << "\n";
    cout << "Cantidad del producto: " << I3.cantidad << "\n";
    cout << "Precio: $" << I3.costo << "\n";
    cout << "Ganancias del producto: $" << I3.costo * I3.cantidad << "\n";



    cout << "\n \n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 15/02/2023.";
    return 0;
}