#include <iostream>
#include <fstream>
using namespace std;
#include "Prestamo.h"

int main(){

    int MAX_ELEMENTS= 100;
    Prestamo P1[MAX_ELEMENTS];
    int P= 0;
    string palabras,fecha;
    double cantidades, contador = 0, acumulador = 0, ganancia = 0;
    int a, respuesta;
    int i= 0;

    // ancho de cada campo del registro 

    const int szCampo1= 30;
    const int szCampo2= 30;
    const int szCampo3= 12;
    const int szCampo4= sizeof(double);
    const int szCampo5= sizeof(double);
    const int szCampo6= sizeof(double);

    // posicion donde inicia cada campo del registro

    int posCampo1= 0;
    int posCampo2= posCampo1 + posCampo1;
    int posCampo3= posCampo2 + posCampo2;
    int posCampo4= posCampo3 + posCampo3;
    int posCampo5= posCampo4 + sizeof(double);
    int posCAmpo6= posCampo5 + sizeof(double);

    // Ancho de cada registro

    int ancho_registro= 30+30+12+sizeof(double)+sizeof(double);

    // se crea el archivo 

    string nombreArchivo= "Datos.txt";
    fstream archivo;
    archivo.open(nombreArchivo, ios :: binary | ios::in);
    if(!archivo){
        archivo.open(nombreArchivo, ios:: binary | ios::out);
        archivo << "";
        cout << "se creo el archivo\n";
    }else{
        cout << "Archivo listo para trabajar.\n";
    }

    do{
            cout << "\n";
            cout << "Al programa le quedan " << MAX_ELEMENTS << " intentos";
            cout << "\n";
            if (i<MAX_ELEMENTS){
                // Peticcion de datos
                
                cout << "Ingresa el nombre: ";
                getline(cin,palabras);
                P1[P].setNombre(palabras);
                cout << "Ingresa los apellido: ";
                getline(cin,palabras);
                P1[P].setApellido(palabras);
                cout << "Ingresa la cantidad del prestamo: ";
                cin >> cantidades;
                P1[P].setCantidadPrestada(cantidades);                     
                cout << "Ingresa el porcentaje de interes: ";
                cin >> cantidades;
                P1[P].setCantidadDeInteres(cantidades);                   
                cout << "Ingresa la cantidad de semanas a pagar: ";
                cin >> cantidades;
                P1[P].setCantidadDeSemana(cantidades);

                // Apertura del archivo, apuntando al final

                archivo.open(nombreArchivo, ios::app | ios::binary);
                archivo.seekg(0, ios::end);

                // Almacenamiento en archivo
                cout << "TEST:" << P1[P].getNombre() << endl;
                palabras= P1[P].getNombre() + (char)30;
                cout << "PALABRAS: " << palabras << endl;
                archivo.write(palabras.c_str(), szCampo1);
                palabras= P1[P].getApellido() + (char)30;
                archivo.write(palabras.c_str(), szCampo2);
                palabras= P1[P].getFecha() + (char)12;
                archivo.write(palabras.c_str(), szCampo3);
                cantidades= P1[P].getCantidadPrestada();
                archivo.write((char*)&cantidades, sizeof(double));
                cantidades= P1[P].getCantidadDeInteres();
                archivo.write((char*)&cantidades, sizeof(double));
                cantidades= P1[P].getCantidadDeSemana();
                archivo.write((char*)&cantidades, sizeof(double));

                archivo.close();

                cout<< "Registro agregado";




                P++;

            } else { respuesta = 0;}
            i++;
            MAX_ELEMENTS--;
            cout << "\n";
            cout << "Presione 1 se desea repetir y 0 se desea finalizar: ";
            cin >> respuesta;
            cin.ignore();
        } while (respuesta != 0);


    
        cout << "\n \n";
        cout << "-------------------------------------------------------------\n";
        cout << "Imprimiendo todos los prestamos\n";
        for(int ii=0;ii<MAX_ELEMENTS; ii++){
            if (  P1[ii].getCantidadPrestada() > 0 && P1[ii].getCantidadDeInteres() > 0 && P1[ii].getCantidadDeSemana() > 0){
                cout << P1[ii].toString();
            }
        }


    return 0;
}