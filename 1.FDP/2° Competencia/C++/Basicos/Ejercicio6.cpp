#include <iostream>
using namespace std;

int main(){
	cout << "Convertir de Grados fahrenhed a celsius.\n";
	double Fahrenhed, Celsius;
	cout << "Grados fahrenhed: ";
	cin >> Fahrenhed;
	Celsius= (Fahrenhed - 32) * 5/9;
	cout << "Celsius = " << Celsius << "\n";
	return 0;
}