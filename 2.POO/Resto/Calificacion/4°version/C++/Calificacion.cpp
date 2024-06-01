#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "Calificacion.h"

int main() {

    system("color 03");
    cout << "\n \n";
    fstream archivo;
    Calificacion C1;
    string palabras, a;
    double cantidades;

    cout << "Ingresa tu nombre: ";
    getline(cin,a);
    a += ".txt";
    archivo.open(a.c_str(), ios::in);

        if(archivo.fail()){
            cerr << ">>> Nose encentra la clave del cliente " << a << ", la clave del cliente sera registrada al finalizar. \n";
        }

 
    
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
                archivo.open(a.c_str(), ios::app);
                archivo << C1.estado();
                archivo.close();
            } else { cout << "Calificacion invalida"; }
        } else { cout << "Calificacion invalida"; }
    } else { cout << "Calificacion invalida"; }


    cout << "\n \n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 28/02/2023.";
   
    return 0;
}
 
 
 
 
/*
    cout << "\n  \n"; 

    Calificacion C2("Jesus H. Mex Arrollo", "quimica");
    cout << C2.nombre << " su calificaion de " << C2.materia << " es: " << (C2.cognitivo * 0.5) + (C2.sumativo * 0.25) + (C2.formativo * 0.25);
    
    cout << "\n  \n";   

    Calificacion C3(7, 7, 7);
    cout << C3.nombre << " su calificaion de " << C3.materia << " es: " << (C3.cognitivo * 0.5) + (C3.sumativo * 0.25) + (C3.formativo * 0.25);

    cout << "\n  \n";   

    Calificacion C4("Rubi Tilan Leon", "quimica", 7, 7, 7);
    cout << C4.nombre << " su calificaion de " << C4.materia << " es: " << (C4.cognitivo * 0.5) + (C4.sumativo * 0.25) + (C4.formativo * 0.25);
*/