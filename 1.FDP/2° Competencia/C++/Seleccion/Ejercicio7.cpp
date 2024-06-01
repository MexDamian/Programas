#include <iostream>
using namespace std;

int main (){
	cout << "Calcular el costo por ingrediente. \n";
	double CantidadDeVenta, Costo1, Cantidad, Costo;
	string Unidad;
	cout << "Ingrear unidad de medida :";
	cin >> Unidad;
	cout << "Ingresar la cantidad en la que se vende por " << Unidad << ":";
	cin >> CantidadDeVenta;
	if (CantidadDeVenta > 0) {
		cout << "Ingresar el precio de venta por " << CantidadDeVenta << "-" << Unidad << ":";
		cin >> Costo1;
		if (Costo1 > 0) {
			cout << "Ingresar la cantidad a usar:";
			cin >> Cantidad;
			if (Cantidad > 0) {
				Costo= Cantidad * Costo1 / CantidadDeVenta;
				cout << "Costo de ingrediente = $" << Costo  << "\n";
			} else {
				cout << "Error a cantidad a usar.\n";
			}
		} else {
			cout << "Error en el costo de venta.\n";
		}
	} else {
		cout << "Eror en la cantidad de venta.\n";
	}
	return 0;
}