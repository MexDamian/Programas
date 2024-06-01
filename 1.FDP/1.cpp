#include <iostream>
#include <cmath>
using namespace std;

int main(){
// getline(cin,variable)
    double Cognitivo, Sumativo, Formativo, Promedio;
    cout << "Ingresa la calificacion del cognitivo: ";
    cin >> Cognitivo;
    if (Cognitivo > 0 && Cognitivo < 10){
        cout << "ingresa la calificacion del sumativo: ";
        cin >> Sumativo;
        if (Sumativo > 0 && Sumativo < 10){
            cout << "Ingresa la calificacion del formtivo: ";
            cin >> Formativo;
            if (Formativo < 10 && Formativo > 0){
            Promedio = (Cognitivo * 0.5) + (Sumativo * 0.25) + (Formativo * 0.25);

                if (Promedio >= 7) {
                    cout << "Materia aprobada con " << Promedio;
                    cout << "\n";
                } else {
                    cout << "Materia reprobada con " << Promedio;
                    cout << "\n";
                }
            } else {
                cout << "Calificacion incorrecta";
                cout << "\n";
            } 
        } else {
            cout << "Calificacion incorrecta";
            cout << "\n";
        }
    } else {
        cout << "Calificacion incorrecta";
        cout << "\n";
    }

    return 0;
}