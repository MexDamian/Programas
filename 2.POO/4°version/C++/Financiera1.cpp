#include <iostream>
#include <cstdlib>
using namespace std;
#include "Devolucion.h"
#include "Prestamo.h"
#include "Usuario1.h"



int main() {
    system("color 02");
    cout << "\n \n";
    int MAX_ELEMENTS= 100;
    Devolucion D1[MAX_ELEMENTS];
    int D= 0;
    Prestamo P1[MAX_ELEMENTS];
    int P= 0;
    Usuario1 U1;
    string palabras,fecha;
    double cantidades, contador = 0, acumulador = 0, ganancia = 0;
    int a, respuesta;
    int i= 0; // iteraciones  

    cout << "Ingresa tu usuario: ";
    getline(cin,palabras);
    U1.setUsuario(palabras);
    cout << "Ingresa la contrasena: ";
    getline(cin,palabras);
    U1.setContrasena(palabras);
    

    if (U1.getUsuario() == " " && U1.getContrasena() == " "){

        cout << "\n \n";
        cout << "Bienvenido a la financiera JAMD. \n";
        cout << "Ingresa la fecha: ";
        getline(cin,fecha);
        

        do{
            cout << "\n";
            cout << "Al programa le quedan " << MAX_ELEMENTS << " intentos";
            cout << "\n";
            if (i<MAX_ELEMENTS){
                
                cout << "\n";
                cout << "Elige una opcion. \n";
                cout << "\n";
                cout << "1) Agregar prestamo. \n";
                cout << "2) Agregar devolucion. \n";
                cout << "3) Total recaudado de abonos. \n";
                cout << "4) Total del dinero prestado. \n";
                cout << "5) Total de ganancia esperada. \n";
                cout << "\n";
                cout << "Opcion: ";
                cin >> a;
                cin.ignore();

                switch(a) {

                    case 1:
                    cout << "\n \n";
                    P1[P].setFecha(fecha);
                    cout << "Ingresa el nombre: ";
                    getline(cin,palabras);
                    P1[P].setNombre(palabras);
                    cout << "Ingresa los apellido: ";
                    getline(cin,palabras);
                    P1[P].setApellido(palabras);
                    cout << "Ingresa la cantidad del prestamo: ";
                    cin >> cantidades;
                    P1[P].setCantidadPrestada(cantidades);
                    if (P1[P].getCantidadPrestada() > 0){
                        cout << "Ingresa el porcentaje de interes: ";
                        cin >> cantidades;
                        P1[P].setCantidadDeInteres(cantidades);
                        if(P1[P].getCantidadDeInteres() > 0){
                            cout << "Ingresa la cantidad de semanas a pagar: ";
                            cin >> cantidades;
                            P1[P].setCantidadDeSemana(cantidades);

                        }else {cout << "Porcentaje de interes invalida.\n";}

                    }else{cout << "Cantidad prestada invalida.\n";}
                    acumulador += P1[P].getCantidadPrestada();
                    ganancia += P1[P].Interes();
                    P++;
                    break;

                    case 2:
                    cout << "\n \n";
                    D1[D].setFecha(fecha);
                    cout << "Ingresa el nombre: ";
                    getline(cin,palabras);
                    D1[D].setNombre(palabras);
                    cout << "Ingresa los apellido: ";
                    getline(cin,palabras);
                    D1[D].setApellido(palabras);
                    cout << "Ingresa la cantidad del prestamo: ";
                    cin >> cantidades;
                    D1[D].setCantidadprestada(cantidades);
                    if (D1[D].getCantidadprestada() > 0){
                        cout << "Ingresa la cantidad devuelta: ";
                        cin >> cantidades;
                        D1[D].setCantidaddevuelta(cantidades);
                        if (D1[D].getCantidaddevuelta() > 0){
                            cout << "Ingresa la cantidad de semanas a pagar: ";
                            cin >> cantidades;
                            D1[D].setSemanasapagar(cantidades);
                            if (D1[D].getSemanasapagar() > 0){
                                cout << "Ingresa el numero de la semana pagada: ";
                                cin >> cantidades;
                                D1[D].setSemanapagada(cantidades);

                            }else{cout << "Semanas a pagar invalidas";}

                        }else{cout << "Abono invalido.\n";}

                    } else {cout << "Cantidad prestada invalida.\n";}
                    contador += D1[D].getCantidaddevuelta();
                    D++;
                    break;

                    case 3:
                    cout << "Total de abonos: " << contador;
                    break;

                    case 4:
                    cout << "Total de abonos: " << acumulador;
                    break;

                    case 5: 
                    cout << "Ganancia esperada: " << ganancia;
                    break;
                }
            } else { respuesta = 0;}
            i++;
            MAX_ELEMENTS--;
            cout << "\n";
            cout << "Presione 1 se desea repetir y 0 se desea finalizar: ";
            cin >> respuesta;
        } while (respuesta != 0);

        cout << "\n \n";
        cout << "-------------------------------------------------------------\n";
        cout << "Imprimiendo todos los prestamos\n";
        for(int i=0;i<MAX_ELEMENTS; i++){
            if (  P1[i].getCantidadPrestada() > 0){
                cout << P1[i].DatosDelPrestamo();
            }
        }

        cout << "\n \n";
        cout << "-------------------------------------------------------------\n";
        cout << "Imprimiendo todos las devoluciones\n";
        for(int i=0;i<MAX_ELEMENTS; i++){
            if(D1[i].getCantidaddevuelta() > 0){ ///////
                cout << D1[i].tostring();
            
            }
        }
    }

    cout << "\n \n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 15/03/2023.";
    return 0;
}



/*
    cout << "\n \n";

    Devolucion D2("Jesus Alejandro Mex Damian", "1100-91", "23/02/2023");

    cout << "Nombre: " << D2.nombre << "\n";
    cout << "Fecha: " << D2.fecha << "\n";
    cout << "Clave: " << D2.clave << "\n";
    cout << "Abono: $" << D2.cantidaddevuelta << "\n";
    cout << "Semanas restantes: " << D2.semanasapagar - D2.semanapagada << "\n";
    cout << "Saldo restante: $" << D2.cantidadprestada -(D2.cantidaddevuelta * D2.semanapagada)  << "\n";
    cout << "\n";

    cout << "\n \n";

    Devolucion D3(2800, 200, 14, 6);
    cout << "Nombre: " << D3.nombre << "\n";
    cout << "Fecha: " << D3.fecha << "\n";
    cout << "Clave: " << D3.clave << "\n";
    cout << "Abono: $" << D3.cantidaddevuelta << "\n";
    cout << "Semanas restantes: " << D3.semanasapagar - D3.semanapagada << "\n";
    cout << "Saldo restante: $" << D3.cantidadprestada -(D3.cantidaddevuelta * D3.semanapagada)  << "\n";
    cout << "\n";
*/