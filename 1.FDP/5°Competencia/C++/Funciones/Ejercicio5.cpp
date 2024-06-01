#include <iostream>
#include <cmath>
using namespace std;

// Funcion----------------------------------------------------------------------------------------
double CPD (double P, double V){
	return  P / V ;
}
//------------------------------------------------------------------------------------------------

int main(){
	cout << "Convertir pesos a dolares.\n";
	double matriz[3][3];

	// Procedimiento.----------------------------------------------------------------------------
	cout << "Se repetira 3 veces.\n";
	cout << "\n";
	// Datos-------------------------------------------------------------------------------------
	for ( int i=0; i<3; i++) {
		cout << "Ingresar la cantidad de pesos:";
		cin >> matriz [i][0];
		if (matriz [i][0] > 0) {
			cout << "Ingresar el valor del dolar:";
			cin >> matriz[i][1];
			if (matriz[i][1] > 0) {
	// Formula-----------------------------------------------------------------------------------
				matriz[i][2]= CPD (matriz[i][0], matriz[i][1]);
				cout << "\n";
			} else {
				cout << "Error del valor del dolar.\n";
				cout << "/////////////////////////////////.\n";
			}
		} else {
			cout << "Error de los pesos.\n";
			cout << "/////////////////////////////////////.\n";
			
		}
	}		
	//-----------------------------------------------------------------------------------------

	// Impresion de resultados-----------------------------------------------------------------
	for (int i=0;i<3;i++){
		if( matriz[i][1] > 0 && matriz[i][0] > 0  ){
		cout << "Ejercicios " << i + 1 << "\n";
		cout << "Convertir pesos $" << matriz[i][0] << " / valor de dolar $" 
		<< matriz[i][1] << "= dolares $" << matriz[i][2] << "\n";
		}
	}	
	//----------------------------------------------------------------------------------------

	// Creador y fecha------------------------------------------------------------------------
	cout << "\n";
	cout << "Creador: Jesus A. Mex Damian 21/11/2022";
	//----------------------------------------------------------------------------------------

	return 0;
}