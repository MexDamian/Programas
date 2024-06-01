#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Calcular el cambio de una compra.\n";
	double Total, Pago, Cambio;
	cout << "Ingresar el total:$";
	cin >> Total;
	if (Total > 0){
		cout << "Ingresar el pago:$";
		cin >> Pago;
		if (Pago >= Total ) {
			Cambio= Pago-Total;
			cout << "Cambio = $" << Cambio << "\n";	
		} else{ 
		cout << "Error en el pago.\n";
		
		}
	} else {
		cout << "Error en el total.\n";
		
	}
	
	return 0;
}