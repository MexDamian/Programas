 #include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "Calcular el cambio de una compra.\n";
	double matriz[1001][3] ={0};
	int respuesta; 
	int i = 1;

	cout << "Cuantas veces deseas que se repita (Hasta 1000 veces): ";
	cin >> respuesta;
	
	// Procedimiento.----------------------------------------------------------------------------
	for ( int i=0; i<respuesta; i++) {
		cout << "Ingresar el total:$";
		cin >>matriz[i][0];
		if (matriz[i][0] > 0){
			cout << "Ingresar el pago:$";
			cin >> matriz[i][1];
			if (matriz[i][1] >= matriz[i][0] ) {
				matriz[i][2]= matriz[i][1]-matriz[i][0];
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
	
	// Impresion de resultados-----------------------------------------------------------------
	for (int i=0;i<respuesta;i++){
		if( matriz[i][1] > 0 && matriz[i][1] >= matriz[i][0] ){
		cout << "Ejercicios " << i + 1 << "\n";
		cout << "Cambio de $" << matriz[i][1] << " - $" << matriz[i][0] << "= $" << matriz[i][2] << "\n";
		}
	}

	// Creador y fecha------------------------------------------------------------------------
	cout <<"\n";
	cout <<"Creador: Jesus A. Mex Damian 16/11/2022.";
	
	return 0;
}