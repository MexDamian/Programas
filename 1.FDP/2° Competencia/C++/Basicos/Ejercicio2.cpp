#include <iostream>
using namespace std;

int main(){
	cout << "Calcular el area de un rectangulo.\n";
	double Altura, Base, Area;
	cout << "Base: ";
	cin >> Base;
	cout << "Altura: ";
	cin >> Altura;
	Area= Altura*Base;
	cout << "Area = " << Area << "\n";
	return 0;
}
