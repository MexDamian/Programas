#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Calcular el area de un circulo.\n";
	double Radio, Area;
	cout << "Se repetira 3 veces.\n";
	for ( int i=0; i<3; i++) {
		cout << "Ingresa el radio:";
		cin >> Radio;
		if (Radio > 0){
			Area= 3.14 * (Radio * Radio);
			cout << "Area = " << Area << "\n";
			cout << "/////////////////////////////.\n";
		} else { 
			cout << "Error en el radio.\n";
			cout << "///////////////////////.\n";
		}
	}		
	return 0;
}