#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Convertir de Grados fahrenhed a celsius.\n";
	double Fahrenhed, Celsius;
	cout << "Ingresar a grados fahrenhed: ";
	cin >> Fahrenhed;
	if (Fahrenhed >= -459.69) {
		Celsius= (Fahrenhed - 32) * 5/9;
		cout << "Celsius = " << Celsius << "\n";
	} else {
		cout << "Error de grados";
	}
	return 0;
}