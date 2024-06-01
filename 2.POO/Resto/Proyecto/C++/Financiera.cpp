#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "Devolucion.h"
#include "Prestamo.h"
#include "Seguridad.h"
#include "Cambio.h"
 


int main() {
    fstream archivo;
    system("color 02");
    cout << "\n \n";
    int MAX_ELEMENTS= 100;
    Devolucion D1[MAX_ELEMENTS];
    int D= 0;
    Prestamo P1[MAX_ELEMENTS];
    int P= 0;
    Seguridad S1;
    Cambio PA1;
    string palabras,fecha, clave[1000][3], id;
    double cantidades, contador = 0, acumulador = 0, ganancia = 0;
    int a, respuesta;
    int i= 0,c=0;

    
        

    
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
                cout << "6) Calcular cambio. \n";
                cout << "7) Consultar historial. \n";
                cout << "8) Finalizar programa. \n";
                cout << "\n";
                cout << "Opcion: ";
                cin >> a;
                cin.ignore();

                switch(a) {

                    case 1:
                    cout << "Ingresa la clave del cliente: ";
                    getline(cin,clave[P][1]);
                    clave[P][1]+= ".txt";
                    archivo.open(clave[P][1].c_str(), ios::in);

                    if(archivo.fail()){
                        cerr << ">>> Nose encentra la clave del cliente " << clave[P][1] << ", la clave del cliente sera registrada al finalizar. \n";
                    }

                    archivo.close();
                    cout << "---------------------------------------------------------------------------------------------------------------------\n";
                    cout << "\n \n";
                    P1[P].setFecha(fecha);
                    cout << "Ingresa el nombres: ";
                    getline(cin,palabras);
                    P1[P].setNombre(palabras);
                    cout << "Ingresa los apellidos: ";
                    getline(cin,palabras);
                    P1[P].setApellido(palabras);

                    try{

                        cout << "Ingresa la cantidad del prestamo: ";
                        cin >> cantidades;
                        P1[P].setCantidadPrestada(cantidades);
                    
                        cout << "Ingresa el porcentaje de interes: ";
                        cin >> cantidades;
                        P1[P].setCantidadDeInteres(cantidades);
                       
                        cout << "Ingresa la cantidad de semanas a pagar: ";
                        cin >> cantidades;
                        P1[P].setCantidadDeSemana(cantidades);

                    }  catch (int){cout << "Alguno de los valores es menor a 0.\n";}


                    acumulador += P1[P].getCantidadPrestada();
                    ganancia += P1[P].Interes();
                    P++;
                    break;

                    case 2:
                    cout << "Ingresa la clave del cliente: ";
                    getline(cin,clave[D][2]);
                    clave[D][2]+= ".txt";
                    archivo.open(clave[D][2].c_str(), ios::in);

                    if(archivo.fail()){
                        cerr << ">>> Nose encentra la clave del cliente " << clave[D][2] << ", la clave del cliente sera registrada al finalizar. \n";
                    }
                    archivo.close();
                    cout << "---------------------------------------------------------------------------------------------------------------------\n";

                    cout << "\n \n";
                    D1[D].setFecha(fecha);
                    cout << "Ingresa el nombres: ";
                    getline(cin,palabras);
                    D1[D].setNombre(palabras);
                    cout << "Ingresa los apellidos: ";
                    getline(cin,palabras);
                    D1[D].setApellido(palabras);
                    try{

                        cout << "Ingresa la cantidad del prestamo: ";
                        cin >> cantidades;
                        D1[D].setCantidadprestada(cantidades);
                    
                        cout << "Ingresa la cantidad devuelta: ";
                        cin >> cantidades;
                        D1[D].setCantidaddevuelta(cantidades);

                        cout << "Ingresa la cantidad de semanas a pagar: ";
                        cin >> cantidades;
                        D1[D].setSemanasapagar(cantidades);
                            
                        cout << "Ingresa el numero de la semana pagada: ";
                        cin >> cantidades;
                        D1[D].setSemanapagada(cantidades);

                    }catch (int) { cout << "Alguno de los valores es menor a 0.\n";}

                    contador += D1[D].getCantidaddevuelta();
                    D++;
                    break;

                    case 3:
                    cout << "Fecha: " << fecha << "\n";
                    cout << "Total de abonos: " << contador << "\n";
                    break;

                    case 4:
                    cout << "Fecha: " << fecha << "\n";
                    cout << "Total de dinero prestado: " << acumulador;
                    break;

                    case 5: 
                    cout << "Fecha: " << fecha << "\n";
                    cout << "Ganancia esperada: " << ganancia;
                    break; 

                    case 6:
                    cout << "Ingresa la cantidad pagada: ";
                    cin >> cantidades;
                    PA1.setPago(cantidades);
                    cout << "Ingresa la cantidad a pagar: ";
                    cin >> cantidades;
                    PA1.setCantidad(cantidades);
                    cout << "Cambio: " << PA1.buelto();

                    break;

                    case 8:
                    cout << "Cerrar programa.";
                    break;

                    case 7:
                    cout << "Ingresa la clave del cliente: ";
                    getline(cin,id);
                    id+= ".txt";
                    archivo.open(id.c_str(), ios::in);
                    cout << "Historial del cliente:\n";
                    cout << "\n";
                    cout << "Fecha de consulta: " << fecha << "\n";
                    string cadena;
                    while(!archivo.eof()){
                        getline(archivo,cadena);
                        cout << cadena << "\n";
                    }
                    archivo.close();
                    break;

                    

                }
            } else { respuesta = 0;}
            i++;
            MAX_ELEMENTS--;
            cout << "\n";
            cout << "Presione 1 se desea repetir y 0 se desea finalizar: ";
            cin >> respuesta;
        } while (respuesta != 0);


        for(int i=0;i<MAX_ELEMENTS; i++){
            
            if (  P1[i].getCantidadPrestada() > 0 && P1[i].getCantidadDeInteres() > 0 && P1[i].getCantidadDeSemana() > 0){
                archivo.open(clave[i][1].c_str(), ios::app);
                archivo << "\n";
                archivo << "Prestamos----------------------------------------------------\n";
                archivo << "Fecha: " << fecha << "\n";
                archivo << P1[i].toString();
                archivo << "-------------------------------------------------------------\n";
                archivo.close();
            }
        }
 
        for(int i=0;i<MAX_ELEMENTS; i++){
            
            if(D1[i].getCantidaddevuelta() > 0 && D1[i].getCantidadprestada() > 0 && D1[i].getSemanapagada() > 0 
                && D1[i].getSemanasapagar() > 0){ ///////
                archivo.open(clave[i][2].c_str(), ios::app);
                archivo << "\n";
                archivo << "Devoluciones-------------------------------------------------\n";
                archivo << "Fecha: " << fecha <<"\n";
                archivo << D1[i].toString();
                archivo << "-------------------------------------------------------------\n";
                archivo.close();
                
                
            }
        }


     


    

    cout << "\n \n";
    cout << "------------------------------------------------------------------------------------------\n";
	cout << "Creador: Jesus A. Mex Damian 24/05/2023.";
    return 0;
}
