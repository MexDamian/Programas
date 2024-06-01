#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string materia;
    double promedio;

    cout << "ingresa el nombre de la materia: ";
    getline(cin,materia);
    cout << "ingresa tu promedio: ";
    cin >> promedio;

    if (promedio >= 7){
        cout << "Aprobaste " << materia << " con promedio de " << promedio;
    } else {
        cout << "reprobaste " << materia << " con promedio de " << promedio << " necesitas 7 para aprobar";
    }

    return 0;
}