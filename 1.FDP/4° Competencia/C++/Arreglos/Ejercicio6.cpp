#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Convertir de Grados fahrenhed a celsius.\n";
	double matriz[100][2];
	int respuesta;

	// Procedimiento.----------------------------------------------------------------------------
	cout << "Cuantas veces deseas que se repita: ";
	cin >> respuesta;
	for ( int i=0; i<respuesta; i++) {
		cout << "Ingresar a grados fahrenhed: ";
		cin >> matriz[i][0];
		if (matriz[i][0] >= -459.69) {
			matriz[i][1]= (matriz[i][0] - 32) * 5/9;
			cout << "///////////////////////////////. \n";
		} 
	}	

	// Impresion de resultados-----------------------------------------------------------------
	for (int i=0;i<respuesta;i++){
		if( matriz[i][0] > -459.69 ){
		cout << "Ejercicios " << i + 1 << "\n";
		cout << "Grados fahrenhed :" << matriz[i][0] << " = " << "Grados celsius :" << matriz[i][1] << "\n";
		}
	}	

	// Creador y fecha------------------------------------------------------------------------
	cout << "\n";
	cout << "Creador: Jesus A. Mex Damian 16/11/2022.";
	return 0;
}