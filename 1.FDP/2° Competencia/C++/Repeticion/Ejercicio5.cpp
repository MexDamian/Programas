#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Convertir pesos a dolares.\n";
	double Pesos, ValorDolar, Dolares;
	cout << "Se repetira 3 veces.\n";
	cout << "\n";
	for ( int i=0; i<3; i++) {
		cout << "Ingresar la cantidad de pesos:";
		cin >> Pesos;
		if (Pesos > 0) {
			cout << "Ingresar el valor del dolar:";
			cin >> ValorDolar;
			if (ValorDolar > 0) {
				Dolares= Pesos/ValorDolar;
				cout << "Cantidad de dolares = " << Dolares << "\n";
				cout << "\n";
			} else {
				cout << "Error del valor del dolar.\n";
				cout << "///////////////////////.\n";
			}
		} else {
			cout << "Error de los pesos.\n";
			cout << "///////////////////////.\n";
			
		}
	}		
	
	return 0;
}