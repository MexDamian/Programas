#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

// Calclular interes-------------------------------------------------------------------------------------------
double I (double P, double PI){
    return (PI / 100) * P;
}
// Calcular a pagar--------------------------------------------------------------------------------------------
double T (double I, double P){
    return P + I;
}   
// Calcular la cantidad a pagar a la semana--------------------------------------------------------------------
double S (double T, double SP){
    return T / SP;
}



int main(){
//Tipos de datos----------------------------------------------------------------------------------------------
    system("color 02");
    double matriz[30][12];
    string Matriz[3][6], Fecha;
    int i= 0, respuesta, a, b, opcion;
// Procedimiento-----------------------------------------------------------------------------------------------
    cout << "\n";
    cout << "El programa se puede repetir 3 veces.\n";
    cout << "Contizar un prestamo o devolucion. \n";
    cout << "\n";
    cout << "Ingresa la fecha: \n";
    cin >> Fecha;
    cout << "\n";

// Datos de cliente--------------------------------------------------------------------------------------------
    cout << "Datos del acreedor \n";
    cout << "\n";

    cout << "Ingresa el nombre del cliente: ";
    cin >> Matriz[i][0];
    cout << "Ingresa el apellidos del cliente: ";
    cin >> Matriz[i][1];
    cin >> Matriz[i][2]; 
    cout << "\n";



    
    
 // Menu--------------------------------------------------------------------------------------------------------
    do{
        if (i < 3){ 
            cout << "Elige una opcion. \n";
            cout << "\n";
            cout << "1) Agregar prestamo. \n";
            cout << "2) Agregar devolucion. \n";
            cout << "\n";
            cout << "Opcion: ";
            cin >> a;

            switch (a){

                case 1:
// Caso de prestamo----------------------------------------------------------------------------------------------------
                cout << "Datos del prestamo \n";
                cout << "\n";
                cout << "Ingresa la cantidad del prestamo: ";
                cin >> matriz[i][0];
                if (matriz[i][0] > 0){
                    cout << "Ingresar porcentaje de interes: ";
                    cin >> matriz[i][1];
                    if (matriz[i][1] > 0){
                        cout << "Ingresa la cantidad de semana a pagar: ";
                        cin >> matriz[i][2];
                        if (matriz[i][2] > 0){
                            matriz[i][3]= I (matriz[i][0], matriz[i][1]);
                            matriz[i][4]= T (matriz[i][3], matriz[i][0]);
                            matriz[i][5]= S (matriz[i][4], matriz[i][2]);
                            cout << "\n";
                            cout << "Desea continuar con el prestamo (si/no): \n";
                            cin >> Matriz[i][3];
                            cout << "\n";
                        } else {
                            cout << "Semanas insuficientes";
                            cout << "\n";
                        }
                    } else {
                        cout << "Porcentaje de interes no valido";
                        cout << "\n";
                    }
                } else {
                    cout << "Cantidad no valida";
                    cout << "\n";
                }
                break;

                case 2:
// Caso de devolucion-------------------------------------------------------------------------------------------------
                cout << "2) Devolucion del prestamo. \n";
                cout << "\n";
                cout << "Ingresa el total del prestamo: ";
                cin >> matriz[i][6];
                if (matriz[i][6] > 0){
                    cout << "Ingresa la semanas a pagar: ";
                    cin >> matriz[i][2];
                    if (matriz[i][2] > 0){
                        cout << "Ingresa la cantidad devuelta: ";
                        cin >> matriz[i][7];
                        if (matriz[i][7] > 0){
                            cout << "Numero de la semana pagada: ";
                            cin >> matriz[i][8];
                            if (matriz[i][8] <= matriz[i][2]){
                                matriz[i][11] = matriz[i][8] * matriz[i][7];
                                matriz[i][9]= matriz[i][6] - matriz[i][11];
                                matriz[i][10]= matriz[i][2] - matriz[i][8];
                                cout << "\n";
                                cout << "Desea continuar con el pago (si/no): \n";
                                cin >> Matriz[i][4];
                                cout << "\n";
                            } else {
                                cout << "Error en la semana pagada";
                            }
                        }else {
                            cout << "Error en la cantidad devuelta";
                        }
                    } else {
                        cout << "Semanas no validas";
                    }
                } else {
                    cout << "Cantidad de prestamo invalida";
                }
                break;
            }

        
        } else {
          respuesta = 0;
        } 
        i++;
        cout << "Presione 1 se desea repetir y 0 se desea finalizar: ";
        cin >> respuesta;
      
    } while (respuesta != 0);
  
// Impresion de datos------------------------------------------------------------------------------------------
    for (int ii=0;ii<3;ii++){
        if ( a = 1){
            if (Matriz[ii][3] == "si"){
                if (ii < i){
                    if (matriz[ii][0] > 0 && matriz[ii][1] > 0 && matriz[ii][2] > 0 && matriz[ii][3] > 0 
                        && matriz[ii][4] > 0 && matriz[ii][5] > 0){
                        cout << "\n";
                        cout << "Cotizacion " << ii + 1 << "\n";
                        cout << "Cliente: " << Matriz[ii][0] << " " << Matriz[ii][1] << " " << Matriz[ii][2] << "\n";
                        cout << "Fecha: " << Fecha;
                        cout << "\n";
                        cout << "Cantidad del prestamo: $" << matriz[ii][0] << "\n";
                        cout << "Porcentaje de interes: " << matriz[ii][1] << "%" << "\n";
                        cout << "Cantidad de semanas a pagar: " << matriz[ii][2] << "\n";
                        cout << "Interes: $" << matriz[ii][3] << "\n";
                        cout << "Pagos semanales: $" << matriz[ii][5] << "\n";
                        cout << "Total a pagar: $" << matriz[ii][4] << "\n";
                        cout << "\n";
                    }    
                }
            }
        }
    }

    for (int ii=0;ii<3;ii++){
        int iii=0;
        if ( a = 2){
            if (Matriz[ii][4] == "si"){
                if (ii < i){
                    if (matriz[ii][6] > 0 && matriz[ii][7] > 0 && matriz[ii][2] > 0 && matriz[ii][8] > 0 
                        && matriz[ii][9] > 0 && matriz[ii]  [10] > 0){
                        cout << "\n";
                        cout << "Devolucion " << iii + 1 << "\n";
                        cout << "Cliente: " << Matriz[ii][0] << " " << Matriz[ii][1] << " " << Matriz[ii][2] << "\n";
                        cout << "Fecha: " << Fecha;
                        cout << "\n";
                        cout << "Cantidad total del prestamo: $" << matriz[ii][6] << "\n";
                        cout << "Cantidad de semanas a pagar: " << matriz[ii][2] << "\n";
                        cout << "Cantidad abonada: $" << matriz[ii][7] << "\n";
                        cout << "Semana pagada: " << matriz[ii][8] << "\n";
                        cout << "Saldo restante: $" << matriz[ii][9] << "\n";
                        cout << "Semanas restantes: " << matriz[ii][10] << "\n";
                        cout << "\n";
                    }    
                }
            }
        }
    }
// Creador-----------------------------------------------------------------------------------------------------
    cout << "\n";
    cout << "Creador: Jesus A. Mex Damian. Fecha: 27/11/2022: \n";
    cout << "\n";
    return 0;
}