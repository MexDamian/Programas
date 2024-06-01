#include <iostream>
#include <fstream>
#include <cstdlib>
#include "nodo.h"
using namespace std;

fstream archivo;

void PrestamoNormal(nodo *iterador ){
    if(iterador){
        cout << "\n \n";
        cout << iterador->getPrestamo().toString();
        PrestamoNormal(iterador->getEnlace());
    }
}

void DevolucionNormal(nodo *iterador){
    if(iterador){
        cout << "\n \n";
        cout << iterador->getDevolucion().toString();
        DevolucionNormal(iterador->getEnlace());
    }
}

void PrestamoInvertida(nodo *iterador){
    if(iterador){
        PrestamoInvertida(iterador->getEnlace());
        cout << "\n \n";
        cout << iterador->getPrestamo().toString();
    }
}

void DevolucionInvertida(nodo *iterador){
    if(iterador){
        DevolucionInvertida(iterador->getEnlace());
        cout << "\n \n";
        cout << iterador->getDevolucion().toString();
    }
}

int main(int argc, char *argv[]){
    //fstream archivo;
    system("color 02");

    nodo *inicioP = new nodo ();
    nodo *inicioD = new nodo();
    int continuar;


    string palabras,fecha,clave, id;
    double cantidad, prestado,ingresos;
    int opcion, maximo = 1000;

    Prestamo P1;
    int P=0;
    Devolucion D1;
    Cambio C1;

    cout << "Ingresa la fecha de hoy: ";
    getline(cin,fecha);

    do{
        
        cout << "\n";
        cout << "Bienvenido a el menu de CrediJAMD \n";
        cout << "\n";
        cout << "Elige una opcion \n";
        cout << "1) Ingresar nuevo prestamo \n";
        cout << "2) Ingregar nueva devolucion \n";
        cout << "3) Calcular cambio \n";
        cout << "4) Historial Crediticio \n";
        cout << "5) Ingresos del dia \n";
        cout << "6) Imprimir lista de clientes del dia(Normal) \n";
        cout << "/) Imprimir lista de clientes del dia(Invertida) \n";
        cout << "8) Total de dinero prestado \n";
        cout << "9) Cerrar el programa \n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion){
            case 1:{
                //Prestamo-----------------------------------------------------------
                    P1.setFecha(fecha);
                    cout << "\n \n";
                    cout << "Elegiste la opcion 1, hacer un nuevo prestamo. \n";
                    cout << "Ingresa nueva clave del cliente: ";
                    getline(cin,clave);
                    clave+= ".txt";
                    archivo.open(clave.c_str(), ios::in);
                    archivo.close();

                    cout << "\n \n";
                    cout << "Datos del acreedor--------------------------------------\n";
                    cout << "Ingresar los nombres: ";
                    getline(cin,palabras);
                    P1.setNombre(palabras);
                    cout << "Ingresar los apellidos: ";
                    getline(cin,palabras);
                    P1.setApellido(palabras);
                    cout << "Ingresar un numero de telefono: ";
                    getline(cin,palabras);
                    P1.setTelefono(palabras);
                    cout << "Ingresar un correo(Opcional): ";
                    getline(cin,palabras);
                    P1.setCorreo(palabras); 
                    cout << "Datos del prestamo--------------------------------------\n";
                    cout << "Ingresar la cantidad a prestar: ";
                    cin >> cantidad;
                    P1.setPrestamo(cantidad);
                    cout << "Ingresa el porcentaje de interes(%): ";
                    cin >> cantidad;
                    P1.setPorcentaje(cantidad);
                    cout << "Ingresa las semanas a pagar: ";
                    cin >> cantidad;
                    P1.setSemana(cantidad);
                    prestado += P1.getPrestamo();

                    nodo *nodoP1 = new nodo(P1);
       
                    nodo*iterador = inicioP;
                    while( iterador->getEnlace() != NULL ){ 
                        iterador = iterador->getEnlace();
                    }
                    iterador->setEnlace( nodoP1 );   
                    cout << "... .. . Prestamo registrado!\n\n";

                    if (  P1.getPrestamo() > 0 && P1.getPorcentaje() > 0 && P1.getSemana() > 0){
                        archivo.open(clave.c_str(), ios::app);
                        archivo << "\n";
                        archivo << "Prestamos----------------------------------------------------\n";
                        archivo << "Fecha: " << fecha << "\n";
                        archivo << P1.toString();
                        archivo << "-------------------------------------------------------------\n";
                        archivo.close();
                    }

                    cout << "\n ";
                    cout << P1.toString();
                
                //-------------------------------------------------------------------
            }break;

            case 2:{
                //Devolucion--------------------------------------------------------
                    D1.setFecha(fecha);
                    cout << "\n \n";
                    cout << "Elegiste la opcion 2, hacer una nueva devolucion. \n";
                    cout << "Ingresa nueva clave del cliente: ";
                    getline(cin,clave);
                    clave+= ".txt";
                    archivo.open(clave.c_str(), ios::in);
                    archivo.close();


                    cout << "Datos del acreedor--------------------------------------\n";
                    cout << "Ingresar los nombres: ";
                    getline(cin,palabras);
                    D1.setNombre(palabras);
                    cout << "Ingresar los apellidos: ";
                    getline(cin,palabras);
                    D1.setApellido(palabras);
                    cout << "Datos del abono-------------------------------------------------\n";
                    cout << "Ingresar la cantidad prestada: ";
                    cin >> cantidad;
                    D1.setPrestada(cantidad);
                    cout << "Ingresa la cantidad abonada: ";
                    cin >> cantidad;
                    D1.setDevuelta(cantidad);
                    cout << "Ingresa la semana pagada: ";
                    cin >> cantidad;
                    D1.setPagada(cantidad);
                    cout << "Ingresar las semanas a pagar: ";
                    cin >> cantidad;
                    D1.setApagar(cantidad);
                    ingresos += D1.getDevuelta();

                    nodo *nodoD1 = new nodo(D1);
       
                    nodo*iterador = inicioD;
                    while( iterador->getEnlace() != NULL ){ 
                        iterador = iterador->getEnlace();
                    }
                    iterador->setEnlace( nodoD1 );   
                    cout << ".......... Devolucion registrada!\n\n";

                    if(D1.getDevuelta() > 0 && D1.getPrestada() > 0 && D1.getPagada() > 0 
                        && D1.getApagar() > 0){ ///////
                        archivo.open(clave.c_str(), ios::app);
                        archivo << "\n";
                        archivo << "Devoluciones-------------------------------------------------\n";
                        archivo << "Fecha: " << fecha <<"\n";
                        archivo << D1.toString();
                        archivo << "-------------------------------------------------------------\n";
                        archivo.close();
                    }
                    cout << D1.toString();
                //------------------------------------------------------------------
            }break;

            case 3:{
                //Cambio-----------------------------------------------------------
                    cout << "\n \n";
                    cout << "Elegiste la opcion 3 calular el cambio.";
                    cout << "\n \n";
                    cout << "Ingresa el abono: ";
                    cin >> cantidad;
                    C1.setCantidad(cantidad);
                    cout << "Ingresa el pago: ";
                    cin >> cantidad;
                    C1.setPago(cantidad);
                    cout << "Cambio: $" << C1.buelto();
                //----------------------------------------------------------------
            }break;

            case 4:{
                //Historial--------------------------------------------------------
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
                //----------------------------------------------------------------
            }break;

            case 5:{
                //Ingresos----------------------------------------------------------
                    cout << "Fecha: " << fecha << "\n";
                    cout << "Ingresos: $" << ingresos;
                //-----------------------------------------------------------------
            }break;

            case 6:{
                //Impresion Normal-------------------------------------------------
                    cout << "\n \n";
                    cout << "--------------------------------------------------------------------------------------";
                    cout << "\n Recorrido de lista Normal \n";
                    PrestamoNormal(inicioP->getEnlace());
                    DevolucionNormal(inicioD->getEnlace());
                //-----------------------------------------------------------------
            }break;

            case 7:{
                //Impresion Invertida----------------------------------------------
                    cout << "\n \n";
                    cout << "--------------------------------------------------------------------------------------";
                    cout << "\n Recorrido de lista invertidad \n";
                    DevolucionInvertida(inicioD->getEnlace());
                    PrestamoNormal(inicioP->getEnlace());
                //-----------------------------------------------------------------
            }break;

            case 8:{
                //Dinero Prestado---------------------------------------------------
                    cout << "Fecha: " << fecha << "\n";
                    cout << "Prestado: $" << prestado;
            }break;

            case 9:{
                //Finalizar-----------------------------------------------------------
                    cout << "Cerrar programa";
                //--------------------------------------------------------------------
            }break;
        
        
        }

        cout << "\n \n";
        cout << "Presiona 1 Para continuar y 0 para finalizar: ";
        cin >> continuar;
        cin.ignore();

    }while(continuar != 0);


    return 0;
};