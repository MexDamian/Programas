#include <iostream>
#include <cmath>
using namespace std;

int main(){
	//
	cout << "Calcular el cambio de una compra.\n";
	double Total, Pago, Cambio, Totalcambio;
	cout << "Total : ";
	cin >> Total;
	cout << "Pago : ";
	cin >> Pago;
	Cambio= Pago-Total;
	cout << "Cambio = " << Cambio << "\n";

	Totalcambio= Cambio++;

	cout << Totalcambio;
	//
	return 0;
}