#include <iostream>
#include <cstdlib>
using namespace std;
#include "Calificacion.h"

int main() {
    Calificacion C1;

    system("Color 03");
    cout << "\n \n";
    cout << "Ingresa tu nombre: ";
    getline(cin,C1.nombre);
    cout << "Nombre de la materia: ";
    getline(cin,C1.materia);
    cout << "Ingresa la calificacion del cognitivo: ";
    cin >> C1.cognitivo;
    if(C1.cognitivo >= 0 && C1.cognitivo <= 10){
        cout << "Ingresa la calificacion del sumativo: ";
        cin >> C1.sumativo;
        if(C1.sumativo <= 10 && C1.sumativo >= 0){
            cout << "Ingresa la calificacion del formativo: ";
            cin >> C1.formativo;
            if(C1.formativo <= 10 && C1.formativo >= 0){
                cout << C1.nombre << " su calificaion de " << C1.materia << " es: " << (C1.cognitivo * 0.5) + (C1.sumativo * 0.25) + (C1.formativo * 0.25);
            
            } else {cout << "Calificacion invalida";}


        } else {cout << "Calificacion invalida";}


    } else {cout << "Calificacion invalida";}

    cout << "\n \n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 15/02/2023.";
   
    return 0;
}
