#include <iostream>
using namespace std;

int main(){
	cout << "Convertir pesos a dolares.\n";
	double Pesos, ValorDolar, Dolares;
	cout << "Cantidad de pesos: ";
	cin >> Pesos;
	cout << "Valor del dolar: ";
	cin >> ValorDolar;
	Dolares= Pesos/ValorDolar;
	cout << "Cantidad de dolares = " << Dolares << "\n";
	return 0;
}