#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include "ListaDinamicaPrestamo.h"
#include "ListaDinamicaDevolucion.h"
using namespace std;

Prestamo capturaPrestamo(){
    string palabras;
    string clave;
    double cantidad;
    Prestamo P1;
    fstream archivo;
    cout << "Ingresar datos del acreedor";
    cout << "\n \n";
    // Guardado de datos---------------------------------------
    cout << "Ingresa la clave del cliente: ";
    getline(cin,clave);
    P1.setClave(clave);
    clave+= ".txt";
    
    archivo.open(clave.c_str(), ios::in);

    if(archivo.fail()){
        cerr << ">>> Nose encentra la clave del cliente " << P1.getClave() << 
        ", la clave del cliente sera registrada al finalizar. \n";
    }
    archivo.close();
    // Datos del acreedor-------------------

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
    
    //Guardado de datos--------------------------
    archivo.open(clave.c_str(), ios::app);
    if (  P1.getPrestamo() > 0 && P1.getPorcentaje() > 0 && P1.getSemana() > 0){
        archivo << "----------------------------------------------------------\n";
        archivo << "Imprimiendo el prestamo\n";
        archivo << P1.toString();
        archivo.close();
        cout << P1.toString();
        archivo << "\n \n";
        cout << "Sea registrado la clave";
    }
    return P1;
}

Devolucion capturaDevolucion(){
    string palabras, clave;
    double cantidad;
    Devolucion D1;
    fstream archivo;
    cout << "Ingresar datos del acreedor";
    cout << "\n \n";

    // Comienzo de guardado-------------------------
    cout << "Ingresa la clave del cliente: ";
    getline(cin,clave);
    D1.setClave(clave);
    clave+= ".txt";
    archivo.open(clave.c_str(), ios::in);

    if(archivo.fail()){
        cerr << ">>> Nose encentra la clave del cliente " << clave << ", la clave del cliente sera registrada al finalizar. \n";
    }
    archivo.close();

    // Datos personales--------------------
    cout << "Ingresa el nombre: ";
    getline(cin,palabras);
    D1.setNombre(palabras);
    cout << "Ingresa los apellidos: ";
    getline(cin,palabras);
    D1.setApellido(palabras);
    // Datos del prestamo----------------------------------------------
    cout << "Ingresa la cantidad del prestamo: ";
    cin >> cantidad;
    D1.setPrestada(cantidad);
    cout << "Ingresa la cantidad devuelta: ";
    cin >> cantidad;
    D1.setDevuelta(cantidad);
    cout << "Ingresa la cantidad de semanas a pagar: ";
    cin >> cantidad;
    D1.setApagar(cantidad);
    cout << "Ingresa el numero de la semana pagada: ";
    cin >> cantidad;
    D1.setPagada(cantidad);

    // Guardado de datos --------------------------------------------------------
    archivo.open(clave.c_str(), ios::app);
    if (  D1.getPrestada() > 0 && D1.getDevuelta() > 0 && D1.getApagar() > 0 && D1.getPagada() > 0){
        archivo << "----------------------------------------------------------\n";
        archivo << "Imprimiendo el devolucion\n";
        archivo << D1.toString();
        archivo.close();
        cout << D1.toString();
        archivo << "\n \n";
        cout << "Sea registrado la clave";
    }
    return D1;
}

void menuPrestamo();
void menuDevolucion();

int main(){
    system ("Color 02");
    system ("cls");
    bool repite = true;
    int opcion;
    string id;
    fstream archivo;

    do{
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
        cout << "Menu principal.                               |\n";
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
        cout << "[1] Menu prestamo.                            |\n";
        cout << "[2] Menu Devolucion.                          |\n";
        cout << "[3] Consultar historial                       |\n";
        cout << "[4] Salir.                                    |\n";
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
        cout << "Opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
        case (1):{
            menuPrestamo();
        break;
        }

        case (2):{
            menuDevolucion();
        break;
        }

        case (3):{
            cout << "Ingresa la clave del cliente: ";
            getline(cin,id);
            id+= ".txt";
            archivo.open(id.c_str(), ios::in);
            cout << "Historial del cliente:\n";
            cout << "\n";
            string cadena;
            while(!archivo.eof()){
                getline(archivo,cadena);
                cout << cadena << "\n";
            }
            archivo.close();
            cout << "\n \n";
            system("pause");
            break;
        }

        case (4):{
            repite = false;
        break;
        }
                
        
        default:
            break;
        }


    }while(repite);
    system("cls");
}

void menuPrestamo(){
    ListaDinamicaPrestamo prestamos;
    
    int opc, opcion;
    bool repite = true;

    do{
        system ("cls");
        cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
        cout << "Menu del prestamo.                            |\n";
        cout << "[1] Agregar al inicio.                        |\n";
        cout << "[2] Agregar al final.                         |\n";
        cout << "[3] Eliminar el primer prestamo.              |\n";
        cout << "[4] Eliminar el ultimo prestamo.              |\n";
        cout << "[5] Cantidad de prestamos.                    |\n";
        cout << "[6] Imprimir lista.                           |\n";
        cout << "[7] Imprimir solo un prestamo.                |\n";
        cout << "[8] Ordenar por nombre.                       |\n";
        cout << "[9] Ordenar por prestamo.                     |\n";
        cout << "[10] Buscar un pretamo.                       |\n";
        cout << "[11] Buscar Prestamos.                        |\n";
        cout << "[12] Regresar a menu principal.               |\n";
        cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
        cout << "opcion: ";
        cin >> opc;
        cin.ignore();
        

        switch (opc){
            case (1):{
                Prestamo P1;
                P1= capturaPrestamo();
                prestamos.agregaNodoInicio(P1);
                cout << "\n \n";
                system("pause");
                break;
            }

            case(2):{
                Prestamo P1;
                P1= capturaPrestamo();
                prestamos.agregaNodoFinal(P1);
                cout << "\n \n";
                system("pause");
                break;
            }

            case(3): {
                if(prestamos.elementos()){
                    Prestamo retirdo= prestamos.eliminaNodoInicio();
                    cout << "Se a eliminado el primer prestamo\"" << retirdo.getNombre() << "\"\n";
                } else {
                    cout << "Lista vacia";
                }
                cout << "\n \n";
                system("pause");
                break;
            }

            case(4):{
                if(prestamos.elementos()){
                    Prestamo retirdo= prestamos.eliminaNodoFinal();
                    cout << "Se a eliminado el ultimo prestamo\"" << retirdo.getNombre() << "\"\n";;
                } else {
                    cout << "Lista vacia";
                }
                cout << "\n \n";
                system("pause");
                break;
            }

            case(5): {
                cout << "Prestamos almacenados\n";
                cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
                cout << "Pretamos: " << prestamos.elementos() << "\n";
                cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
                cout << "\n \n";
                system("pause");
                break;
            }

            case(6): {
                encabezadoTabla();
                if(prestamos.elementos()){
                    for (int i=0;i<prestamos.elementos();i++){
                        Prestamo P1= prestamos.datoNodo(i);
                        filaTabla(P1);
                    }
                    pieTabla();
                }else{
                    cout << "Nose encontraron prestamos registrados.\n";
                }
                cout << "\n \n";
                system("pause");
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
                cout << "\n \n";
                system("pause");
                break;
            }


            case(8):{
                cout << "Lista ordenada por Nombre!\n\n";
                prestamos.ordenarNombre();
                cout << "\n \n";
                system("pause");
                break;
            }
            
            case(9):{
                cout << "Lista ordenada por mayor cantidad prestada!\n\n";
                prestamos.ordenarPrestamo();
                cout << "\n \n";
                system("pause");
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
                cout << "\n \n";
                system("pause");
                break;
            }

            case(11):{
                string buscado;
                cout << "Nombre del acreedor: ";
                getline(cin,buscado);
                ListaDinamicaPrestamo encontrados= prestamos.buscarNombres(buscado);
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
                cout << "\n \n";
                system("pause");
                break;
            }

            case(12):{
                
                break;
            }
                
            default:
            cout << "Opcion no configurada.\n";
        }

        
    }while(opc !=12);
}

void menuDevolucion(){
    ListaDinamicaDevolucion devoluciones;
    int opc, opcion;
    bool repite = true;

    do{
        system ("cls");
        cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
        cout << "Menu del devolucion.                          |\n";
        cout << "[1] Agregar al inicio.                        |\n";
        cout << "[2] Agregar al final.                         |\n";
        cout << "[3] Eliminar el primer devolucion.            |\n";
        cout << "[4] Eliminar el ultimo devolucion.            |\n";
        cout << "[5] Cantidad de devolucion.                   |\n";
        cout << "[6] Imprimir lista.                           |\n";
        cout << "[7] Imprimir solo un devolucion.              |\n";
        cout << "[8] Ordenar por nombre.                       |\n";
        cout << "[9] Ordenar por saldo restante.               |\n";
        cout << "[10] Buscar un devolucion.                    |\n";
        cout << "[11] Buscar devoluciones.                     |\n";
        cout << "[12] Regresar a menu principal.               |\n";
        cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
        cout << "opcion: ";
        cin >> opc;
        cin.ignore();
        

        switch (opc){
            case (1):{
                Devolucion D1;
                D1= capturaDevolucion();
                devoluciones.agregarNodoInicio(D1);
                cout << "\n \n";
                system("pause");
                break;
            }

            case(2):{
                Devolucion D1;
                D1= capturaDevolucion();
                devoluciones.agregarNodoFinal(D1);
                cout << "\n \n";
                system("pause");
                break;
            }

            case(3): {
                if(devoluciones.elementos()){
                    Devolucion retirdo= devoluciones.eliminaNodoInicio();
                    cout << "Se a eliminado la primera devolucion\"" << retirdo.getNombre() << "\"\n";
                } else {
                    cout << "Lista vacia";
                }
                cout << "\n \n";
                system("pause");
                break;
            }

            case(4):{
                if(devoluciones.elementos()){
                    Devolucion retirdo= devoluciones.eliminaNodoFinal();
                    cout << "Se a eliminado la ultima devolucion.\"" << retirdo.getNombre() << "\"\n";;
                } else {
                    cout << "Lista vacia";
                }
                cout << "\n \n";
                system("pause");
                break;
            }

            case(5): {
                cout << "Devoluciones almacenados\n";
                cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
                cout << "Devoluciones: " << devoluciones.elementos() << "\n";
                cout << "=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n";
                cout << "\n \n";
                system("pause");
                break;
            }

            case(6): {
                encabezado();
                if(devoluciones.elementos()){
                    for (int i=0;i<devoluciones.elementos();i++){
                        Devolucion D1= devoluciones.datoNodo(i);
                        fila(D1);
                    }
                    pie();
                }else{
                    cout << "Nose encontraron devoluciones registrados.\n";
                }
                cout << "\n \n";
                system("pause");
                break;
            }

            case(7):{
                if(devoluciones.elementos()){
                    int num;
                    cout << "ingresar el indice de la devolucion: ";
                    cin >> num;
                    if(num < 0 || num >= devoluciones.elementos()) break;
                    Devolucion D1= devoluciones.datoNodo(num);
                    cout << D1.toString();
                } else {
                    cout << "Error, la lista esta vacia.\n";
                }
                cout << "\n \n";
                system("pause");
                break;
            }


            case(8):{
                cout << "Lista ordenada por Nombre!\n\n";
                devoluciones.ordenarNombre();
                cout << "\n \n";
                system("pause");
                break;
            }
            
            case(9):{
                cout << "Lista ordenada por menor saldo restante!\n\n";
                devoluciones.OrdenarSaldo();
                cout << "\n \n";
                system("pause");
                break;
            }

            case(10):{
                string buscado;
                cout << "Nombre del acreedor: ";
                getline(cin,buscado);
                Devolucion devolucion = devoluciones.buscarApellido (buscado);
                if (!devolucion.getNombre().empty()){
                    cout<< devolucion.toString();
                } else {
                    cout << "Nombre no registrado:\n";
                }
                cout << "\n \n";
                system("pause");
                break;
            }

            case(11):{
                string buscado;
                cout << "Nombre del acreedor: ";
                getline(cin,buscado);
                ListaDinamicaDevolucion encontrados= devoluciones.buscarApellidos(buscado);
                if(encontrados.elementos()>0){
                    encabezado();
                    for(int i=0;i<encontrados.elementos();i++){
                    Devolucion devolucion = encontrados.datoNodo(i);
                    fila(devolucion);
                    }
                    pie();
                }else {
                    cout << "No se encontro ningun nombre";
                }
                cout << "\n \n";
                system("pause");
                break;
            }

            case(12):{
                cout << "Finalizando programa.\n";
                break;
            }
                
            default:
            cout << "Opcion no configurada.\n";
        }
    }while(opc !=12);
}