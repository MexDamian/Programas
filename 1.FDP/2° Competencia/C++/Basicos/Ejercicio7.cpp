#include <iostream>
using namespace std;

int main (){
	cout << "Calcular el costo por ingrediente. \n";
	double CantidadDeVenta, Costo1, Cantidad, Costo;
	string Unidad;
	cout << "Ingrear unidad de medida :";
	cin >> Unidad;
	cout << "Ingresar la cantidad en la que se vende por " << Unidad << " :";
	cin >> CantidadDeVenta;
	cout << "Ingresar el precio de venta por " << CantidadDeVenta << "-" << Unidad << " :";
	cin >> Costo1;
	cout << "Ingresar la cantidad a usar :";
	cin >> Cantidad;
	Costo= Cantidad * Costo1 / CantidadDeVenta;
	cout << "Costo de ingrediente = $" << Costo  << "\n";
	return 0;
}