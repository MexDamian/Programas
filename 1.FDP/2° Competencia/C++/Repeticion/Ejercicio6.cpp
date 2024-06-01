#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Convertir de Grados fahrenhed a celsius.\n";
	double Fahrenhed, Celsius;
	int respuesta;
	cout << "Cuantas veces deceas que se repita: ";
	cin >> respuesta;
	for ( int i=0; i<respuesta; i++) {
		cout << "Ingresar a grados fahrenhed: ";
		cin >> Fahrenhed;
		if (Fahrenhed >= -459.69) {
			Celsius= (Fahrenhed - 32) * 5/9;
			cout << "Celsius = " << Celsius << "\n";
			cout << "///////////////////////////////. \n";
		} else {
			cout << "Error de grados";
			cout << "///////////////////////.\n";
		}
	}		
	return 0;
}