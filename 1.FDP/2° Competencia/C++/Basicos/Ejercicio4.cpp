#include <iostream>
using namespace std;

int main(){
	cout << "Calcular el area de un circulo.\n";
	double Radio, Area;
	cout << "Radio: ";
	cin >> Radio;
	Area= 3.1416 * (Radio * Radio);
	cout << "Area = " << Area << "\n";
	return 0;
}