#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Calcular el cambio de una compra.\n";
	double Total, Pago, matriz[i][1], Totalcambio;
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
				matriz[i][1]= Pago-Total;
				cout << "Cambio = $" << matriz[i][1] << "\n";	
				cout << "//////////////////////////////////.\n";
			} else{ 
			cout << "Error en el pago.\n";
			cout << "///////////////////////.\n";
			}
		} else {
			cout << "Error en el total.\n";
			cout << "///////////////////////.\n";
		}
		Totalcambio= matriz[i][1]++;

		cout << Totalcambio;
	}
	
	
	return 0;
}