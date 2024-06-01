#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Calcular el area de un triangulo.\n";
	double Altura, Base, Area;
	int respuesta;
	cout << "Cuantas veces deceas que se repita: ";
	cin >> respuesta;
	for ( int i=0; i<respuesta; i++) {
		cout << "Ingresar la base:";
		cin >> Base;
		if (Base > 0){
			cout << "Ingresar la altura:";
			cin >> Altura;
			if (Altura > 0) {
				Area= (Altura*Base)/2;
				cout << "Area = " << Area << "\n";
				cout << "/////////////////////////////.\n";
			} else {
				cout << "Error en la altura.\n";
				cout << "///////////////////////.\n";
			}
		} else {
			cout << "Error en la base.\n";
			cout << "///////////////////////.\n";
		}
	}		
	
	return 0;
}