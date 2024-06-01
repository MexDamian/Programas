#include <iostream>
#include <cmath>
using namespace std;

// Funion------------------------------------------------------------------------------------------
double AT (double B, double H){
	return  (B*H)/2 ;
}
//--------------------------------------------------------------------------------------------------

int main(){
	cout << "Calcular el area de un triangulo.\n";
	double matriz [10][3] = {0};
	int i= 0;

	// Procedimiento.----------------------------------------------------------------------------
	cout << "Se podra repetir hasta 10 veces el proceso.\n";
	int respuesta;
	// Datos-------------------------------------------------------------------------------------
	do{
		if ( i < 10 ) {
			cout << "Ingresar la base:";
			cin >> matriz[i][0];
			if (matriz[i][0] > 0){
				cout << "Ingresar la altura:";
				cin >> matriz[i][1];
				if (matriz[i][1] > 0) {
	// Formula----------------------------------------------------------------------------------
					matriz[i][2]= AT (matriz[i][1], matriz[i][0]);
					cout << "/////////////////////////////.\n";
				} else {
					cout << "Error en la altura.\n";
					cout << "///////////////////////.\n";	
				}
			} else {
				cout << "Error en la base.\n";
				cout << "///////////////////////.\n";
			}
			i++;
			cout << "Para finalizar oprima 0, para continuar 1: ";
			cin >> respuesta;
			cout << "\n";
		} else {
			respuesta = 0;
		}
	}while(respuesta !=0);
	//-----------------------------------------------------------------------------------------
	
	// Impresion de resultados-----------------------------------------------------------------
	for (int i=0;i<10;i++){
		if( matriz[i][1] > 0 && matriz[i][0] > 0  ){
		cout << "Ejercicios " << i + 1 << "\n";
		cout << "Area del triangulo: "<< "Base: " << matriz[i][0] << " * Altura: " 
		<< matriz[i][1] << "/2 = " << matriz[i][2] << "\n";
		}	
	}
	//----------------------------------------------------------------------------------------
	
	// Creador y fecha------------------------------------------------------------------------
	cout <<"\n";
	cout <<"Creador: Jesus A. Mex Damian 21/11/2022";
	//----------------------------------------------------------------------------------------

	return 0;
}