#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main (){
    system("color 02");
    string nombre;
    double matriz[100][7];
    int i=0;

    cout << "Ingresa el nombre de la materia: ";
    getline(cin,nombre);
    cout << "\n";
    cout << "Ingresa la calificacion de cognitivo: ";
    cin >> matriz[i][0];
    cout << "\n";
    if (matriz[i][0] >= 0 && matriz[i][0] <= 10){
        cout << "Ingresa la calificacion del formativo: ";
        cin >> matriz[i][1];
        cout << "\n";
        if (matriz[i][1] >= 0 && matriz[i][1] <= 10){
            cout << "Ingresa la calificacion del sumativo: ";
            cin >> matriz[i][2];
            cout << "\n";
            if (matriz[i][2] >= 0 && matriz[i][2] <= 10){
                matriz[i][3] = matriz[i][0] * .5;
                matriz[i][4] = matriz[i][1] * .25;
                matriz[i][5] = matriz[i][2] * .25;
                matriz[i][6] = matriz[i][3] + matriz[i][4] + matriz[i][5];
                cout << "\n";

                if(matriz[i][6] >= 7){
                    cout << "Calificacion de " << nombre << " : " << matriz[i][6] << " materia aprobada.";
                } else {
                    cout << "Calificacion de " << nombre << ": " << matriz[i][6] << " materia reprobada.";
                }
            }
        }
    }

    return 0;
}