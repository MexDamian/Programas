#include <iostream>
using namespace std;

int main(){

    double Cognitivo, Sumativo, Formativo, Promedio;
	cout << "Ingresa la calificacion del cognitivo: ";
	cin >> Cognitivo;
	cout << "Ingresa la calificacion de sumativo: ";
	cin >> Sumativo;
	cout << "Ingresa la calificación del formativo: ";
    cin >> Formativo;
    Promedio = (Cognitivo * 0.5) + (Sumativo * 0.25) + (Formativo * 0.25);

    cout << "Promedio de la materia es: " << Promedio;

    return 0;
}
