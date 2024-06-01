#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
    system("color 02");
    string User,pass;
    int a,b;
// Contraseña------------------------------------------------------------------------------------------------
    cout << "Ingresa el usuario: ";
    cin >> User;
    cout << "Ingresa la clave: ";
    cin >> pass;
    cout << "\n";
//------------------------------------------------------------------------------------------------------------
    if(User=="JesusMex917" && pass=="09042004" ){
        cout << "Bienvenido Jesus Mex. \n";
        cout << "Que desea recordar hoy. \n";
        cout << "Elije la opcion. \n";
        cout << "1) BBVA. \n";
        cout << "2) HSBC. \n";
        cout << "3) Correo. \n";
        cout << "4) Salir. \n";
        cout << "\n";
        cout << "Opcion: \n";
        cin >> a;
        cout << "\n";

        switch (a){
            case 1:
            cout << "1) BBVA. \n";
            cout << "\n";
            cout << "Numero de cuenta: 1523034602 \n";
            cout << "Aplicacion: Karime07 \n";
            cout << "Nip: 8382";
            break;

            case 2:
            cout << "2) HSBC. \n";
            cout << "\n";
            cout << "Numero de cuenta: 6562817408 \n";
            cout << "Aplicacion: AleMex91 \n";
            cout << "Nip: 2308";
            break;

            case 3:
            cout << "3) Correos. \n";
            cout << "\n";
            cout << "Correo 1. \n";
            cout << "Correo: alejandromex102@gmail.com \n";
            cout << "Clave: karime12 \n";
            cout << "//////////////////////////////////////////////////////////////////////////////////////// \n";
            cout << "Correo 2. \n";
            cout << "Correo: alejandromex022@gmail.com \n";
            cout << "Clave: karime12 \n";
            cout << "//////////////////////////////////////////////////////////////////////////////////////// \n";
            cout << "Correo 3. \n";
            cout << "Correo: rosasalejandro132@gmail.com \n";
            cout << "Clave: (AleMex918) \n";
            cout << "///////////////////////////////////////////////////////////////////////////////////////// \n";
            cout << "Correo 4. \n";
            cout << "Correo: jesusmex476@gmail.com \n";
            cout << "Clave: (AleMex917) \n";
            cout << "///////////////////////////////////////////////////////////////////////////////////////// \n";
            cout << "Correo 5. \n";
            cout << "Correo L6721@hopelchen.tecnm.mx \n";
            cout << "Clave: (AleMex917) \n";
            cout << "///////////////////////////////////////////////////////////////////////////////////////// \n";
            break;

            case 4:
            cout << "Adios Jesus Mex.";
            break;

          
        }

    }
    return 0;
}