#include <iostream>
using namespace std;

int main(){
	cout << "Calcular el area de un triangulo.\n";
	double Altura, Base, Area;
	cout << "Altura: ";
	cin >> Altura;
	cout << "Base: ";
	cin >> Base;
	Area= (Base*Altura)/2;
	cout << "Area = " << Area << "\n";
	return 0;
}