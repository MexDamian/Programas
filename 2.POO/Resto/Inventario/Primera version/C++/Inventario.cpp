#include<iostream>
#include<cstdlib>
using namespace std;
#include"Inventario.h"

int main(){
    Inventario I1;

    cout << "\n";
    system("color 09");
    cout << "Ingresa el nombre del producto: ";
    getline(cin,I1.nombre);
    cout << "Ingresa el codigo de barras: ";
    getline(cin,I1.codigo);
    cout << "Ingresa la cantidad del producto: ";
    cin >> I1.cantidad;
    cout << "Ingresa el precio del producto: ";
    cin >> I1.costo;
    I1.ganancia= I1.costo * I1.cantidad;
    cout << "\n";
    cout << "Nombre del producto: " << I1.nombre << "\n";
    cout << "Codigo de barras: " << I1.codigo << "\n";
    cout << "Cantidad del producto: " << I1.cantidad << "\n";
    cout << "Precio: $" << I1.costo << "\n";
    cout << "Ganancias del producto: $" << I1.ganancia << "\n";

    cout << "\n \n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 15/02/2023.";
    return 0;
}