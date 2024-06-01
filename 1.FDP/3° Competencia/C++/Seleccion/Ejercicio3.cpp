#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Calcular el area de un triangulo.\n";
	double Altura, Base, Area;
	cout << "Ingresar la base:";
	cin >> Base;
	if (Base > 0){
		cout << "Ingresar la altura:";
		cin >> Altura;
		if (Altura > 0) {
			Area= (Altura*Base)/2;
			cout << "Area = " << Area << "\n";
		} else {
			cout << "Error en la altura.\n";
			
		}
	} else {
		cout << "Eror en la base.\n";
		
	}
	
	return 0;
}