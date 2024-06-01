#include <iostream>
#include <cstdlib>
using namespace std;
#include "Devolucion.h"
#include "Prestamo.h"

int main(){
    Prestamo P1[10];
    int i = 0;
    do{
        string cadena;
        int entero;
        double real;
        // ---------------------------------
        cout << "\nIngresa la fecha: ";
        getline(cin,cadena);
        P1[i].setFecha(cadena);

        cout << "Ingresa el nombre: ";
        getline(cin,cadena);
        P1[i].setNombre(cadena);

        cout << "Ingresa los apellido: ";
        getline(cin,cadena);
        P1[i].setApellido(cadena);

        cout << "Ingresa una clave de indentificacion: ";
        getline(cin,cadena);
        P1[i].setClave(cadena);

        cout << "Ingresa la cantidad del prestamo: ";
        cin >> real;
        P1[i].setCantidadPrestada(real);

        cout << "Ingresa el porcentaje de interes: ";
        cin >> real;
        P1[i].setCantidadDeInteres(real);

        cout << "Ingresa la cantidad de semanas a pagar: ";
        cin >> real;
        cin.ignore();
        P1[i].setCantidadDeSemana(real);

        i++;
    }while (i < 3);

    for (int j=0;j<3;j++){
        cout << P1[j].DatosDelPrestamo();
    }

    return 0;
}