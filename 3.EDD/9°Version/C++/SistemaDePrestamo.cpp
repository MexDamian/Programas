#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
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

void encabezadoTabla(){
        cout << left << setw(20) << "Apellido";
        cout << left << setw(20) << "Nombre";
        cout << left << setw(20) << "Cantidad prestada";
        cout << left << setw(15) << "Porcentaje";
        cout << left << setw(18) << "Semanas a pagar";
        cout << left << setw(11) << "Cantidad total";
        cout << "\n";
        cout << left << setw(107) << setfill ('-') << "-";
        cout << setfill(' ');
        cout << "\n";
    }

    void pieTabla(){
        cout << left << setw(107) << setfill ('-') << "-";
        cout << setfill(' ');
        cout << "\n";
    }

    void filaTabla(Prestamo prestamo){
        cout << setw(20) << prestamo.getApellido();
        cout << setw(20) << prestamo.getNombre();
        cout << setw(20) << prestamo.getPrestamo();
        cout << setw(15) << prestamo.getPorcentaje();
        cout << setw(18) << prestamo.getSemana();
        cout << setw(11) << prestamo.PrestamoTotal() << "\n";
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
        cout << "6) Imprimir lista. \n";
        cout << "7) Imprimir solo un prestamo.\n";
        cout << "8) Ordenar por nombre.\n";
        cout << "9) Ordenar por prestamo.\n";
        cout << "10) Buscar un pretamo.\n";
        cout << "11) Buscar Prestamos.\n";
        cout << "12) Salir del programa.\n";
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
                if(prestamos.elementos()){
                    Prestamo retirdo= prestamos.eliminaNodoInicio();
                    cout << "Se a eliminado el primer prestamo\"" << retirdo.getNombre() << "\"\n";
                } else {
                    cout << "Lista vacia";
                }
                break;
            }

            case(4):{
                if(prestamos.elementos()){
                    Prestamo retirdo= prestamos.eliminaNodoFinal();
                    cout << "Se a eliminado el primer prestamo\"" << retirdo.getNombre() << "\"\n";;
                } else {
                    cout << "Lista vacia";
                }
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
                    encabezadoTabla();
                    for (int i=0;i<prestamos.elementos();i++){
                        Prestamo P1= prestamos.datoNodo(i);
                        filaTabla(P1);
                    }
                    pieTabla();
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
                cout << "Lista ordenada por Nombre!\n\n";
                prestamos.ordenarNombre();
                break;
            }
            case(9):{
                cout << "Lista ordenada por mayor cantidad prestada!\n\n";
                prestamos.ordenarPrestamo();
                break;
            }

            case(10):{
                string buscado;
                cout << "Nombre del acreedor: ";
                getline(cin,buscado);
                Prestamo prestamo= prestamos.buscarNombre(buscado);
                if(!prestamo.getNombre().empty()){
                    cout<< prestamo.toString();
                } else {
                    cout << "Nombre no registrado:\n";
                }
                break;
            }

            case(11):{
                string buscado;
                cout << "Nombre del acreedor: ";
                getline(cin,buscado);
                ListaDinamica encontrados= prestamos.buscarNombres(buscado);
                if(encontrados.elementos()>0){
                    encabezadoTabla();
                    for(int i=0;i<encontrados.elementos();i++){
                        Prestamo prestamo= encontrados.datoNodo(i);
                        filaTabla(prestamo);
                    }
                    pieTabla();
                }else {
                    cout << "No se encontro ningun prestamo";
                }
                break;
            }

            case(12):{
                cout << "Finalizando programa.\n";
                break;
            }
            
            default:
            cout << "Opcion no configurada.\n";
        }
        system("pause");
    }while(opc !=12);

    return 0;   
}