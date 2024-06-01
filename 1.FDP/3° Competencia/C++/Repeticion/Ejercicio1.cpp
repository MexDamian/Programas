#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Calcular el cambio de una compra.\n";
	double Total, Pago, Cambio;
	int respuesta;
	cout << "Cuantas veces deceas que se repita: ";
	cin >> respuesta;
	for ( int i=0; i<respuesta; i++) {
		cout << "Ingresar el total:$";
		cin >> Total;
		if (Total > 0){
			cout << "Ingresar el pago:$";
			cin >> Pago;
			if (Pago >= Total ) {
				Cambio= Pago-Total;
				cout << "Cambio = $" << Cambio << "\n";	
				cout << "//////////////////////////////////.\n";
			} else{ 
			cout << "Error en el pago.\n";
			cout << "///////////////////////.\n";
			}
		} else {
			cout << "Error en el total.\n";
			cout << "///////////////////////.\n";
		}
	}
	
	return 0;
}