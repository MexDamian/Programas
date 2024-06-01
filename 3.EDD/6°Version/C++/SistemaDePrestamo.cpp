#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "ListaDinamica.h"
using namespace std;

Prestamo capturaPrestamo(){
    string palabras;
    double cantidad;
    Prestamo P1;
    // Datos del acreedor-------------------
    cout << "Ingresar datos del acreedor";
    cout << "\n \n";
    cout << "Ingresar nombres: ";
    getline(cin,palabras);
    P1.setNombre(palabras);
    cout << "Ingresar apellidos: ";
    getline(cin,palabras);
    P1.setApellido(palabras);
    cout << "Ingresar un numero telefonico: ";
    getline(cin,palabras);
    P1.setTelefono(palabras);
    cout << "Ingresar correo electronico (Opcional): ";
    getline(cin,palabras);
    P1.setCorreo(palabras);

    //Datos del pretamo-------------------------
    cout <<"\n \n";
    cout << "Ingresar la cantidad a prestar: ";
    cin >> cantidad;
    P1.setPrestamo(cantidad);
    cout << "Ingresar el porcentaje de interes (%): ";
    cin >> cantidad;
    P1.setPorcentaje(cantidad);
    cout << "Ingresar la cantidad de semanas a pagar: ";
    cin >> cantidad;
    P1.setSemana(cantidad);
    return P1;
}

int main() {
    ListaDinamica prestamos;
    system ("Color 0C");
    int opc;

    do{
    
        system("cls");
        cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
        cout << "Menu del prestamo. \n";
        cout << "1) Agregar al inicio.\n";
        cout << "2) Agregar al final.\n";
        cout << "3) Eliminar el primer prestamo.\n";
        cout << "4) Eliminar el ultimo prestamo.\n";
        cout << "5) Cantidad de prestamos.\n";
        cout << "6) Imorimir lista. \n";
        cout << "7) Imprimir solo un prestamo.\n";
        cout << "8) Salir del programa.\n";
        cout << "opcion: ";
        cin >> opc;
        cin.ignore();
        cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";

        switch (opc){
            case (1):{
                Prestamo P1;
                P1= capturaPrestamo();
                prestamos.agregaNodoInicio(P1);
                break;
            }

            case(2):{
                Prestamo P1;
                P1= capturaPrestamo();
                prestamos.agregaNodoFinal(P1);
                break;
            }

            case(3): {
                prestamos.eliminaNodoInicio();
                cout << "Se a eliminado el primer prestamo";
                break;
            }

            case(4):{
                prestamos.eliminaNodoFinal();
                cout << "Se a eliminado el ultimo prestamo";
                break;
            }

            case(5): {
                cout << "Prestamos almacenados\n";
                cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
                cout << "Pretamos: " << prestamos.elementos() << "\n";
                cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
                break;
            }

            case(6): {
                if(prestamos.elementos()){
                    for (int i=0;i<prestamos.elementos();i++){
                        Prestamo P1= prestamos.datoNodo(i);
                        cout << P1.toString();
                    }
                }else{
                    cout << "Nose encontraron prestamos registrados.\n";
                }
                break;
            }

            case(7):{
                if(prestamos.elementos()){
                    int num;
                    cout << "ingresar el indice del prestamo: ";
                    cin >> num;
                    if(num < 0 || num >= prestamos.elementos()) break;
                    Prestamo P1= prestamos.datoNodo(num);
                    cout << P1.toString();
                } else {
                    cout << "Error, la lista esta vacia.\n";
                }
                break;
            }

            case(8):{
                cout << "Finalizando programa.\n";
                break;
            }
            
            default:
            cout << "Opcion no configurada.\n";
        }
        system("pause");
    }while(opc !=8);

    return 0;   
}