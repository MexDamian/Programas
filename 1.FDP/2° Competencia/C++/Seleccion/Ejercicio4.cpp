#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Calcular el area de un circulo.\n";
	double Radio, Area;
	cout << "Radio:";
	cin >> Radio;
	if (Radio > 0){
		Area= 3.1416 * (Radio * Radio);
		cout << "Area = " << Area << "\n";
	} else { 
		cout << "Eror en el radio.\n";
	}
	return 0;
}