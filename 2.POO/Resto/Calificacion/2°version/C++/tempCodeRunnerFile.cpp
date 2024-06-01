#include <iostream>
#include <cstdlib>
using namespace std;
#include "Calificacion.h"

int main() {

    system("color 03");
    cout << "\n \n";
    
    Calificacion C1;
    string palabras;
    double cantidades;
 
    cout << "Ingresa tu nombre: ";
    getline(cin,palabras);
    C1.setNombre(palabras);
    cout << "Nombre de la materia: ";
    getline(cin,palabras);
    C1.setMateria(palabras);
    cout << "Ingresa la calificacion del cognitivo: ";
    cin >> cantidades;
    cin.ignore();
    C1.setCognitivo(cantidades);
    if(C1.getCognitivo() >= 0 && C1.getCognitivo() <= 10){
        cout << "Ingresa la calificacion del sumativo: ";
        cin >> cantidades;
        cin.ignore();
        C1.setSumativo(cantidades);
        if(C1.getSumativo() >= 0 && C1.getSumativo() <= 10){
            cout << "Ingresa la calificacion del formativo: ";
            cin >> cantidades;
            cin.ignore();
            C1.setFormativo(cantidades);
            if(C1.getFormativo() >= 0 && C1.getFormativo() <= 10){
                C1.calificacionF=(C1.getCognitivo() * 0.5) + (C1.getFormativo() * 0.25) + (C1.getSumativo() * 0.25);
                if(C1.calificacionF >= 7){
                    cout << "\n";
                    cout << C1.impresion() << "\n";
                    cout << "Calificacion final: " << C1.impresionC() << "\n";
                    cout << "Materia aprobada";
                } else {
                    cout << "\n";
                    cout << C1.impresion() << "\n";
                    cout << "Calificacion final: " << C1.impresionC() << "\n";
                    cout << "Materia no aprobada";
                }
            } else { cout << "Calificacion invalida"; }
        } else { cout << "Calificacion invalida"; }
    } else { cout << "Calificacion invalida"; }


    cout << "\n \n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 28/02/2023.";
   
    return 0;
}