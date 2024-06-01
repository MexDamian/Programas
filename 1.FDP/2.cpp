#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double Producto,cantidad,acumulador,Total, Preciototal, CantidadProducto;
    cout << "Cuantos productos son: ";
    cin >> CantidadProducto;

    for (int i=0;i<CantidadProducto;i++){
        cout << "\n";
        cout << "Ingresa el precio del producto: ";
        cin >> cantidad;
        cout << "Ingresa la cantidad del producto: $";
        cin >> Producto;
        Preciototal = cantidad * Producto;
        cout << "Total de producto $" << Preciototal;
        cout << "\n";
        acumulador += Preciototal;
    }
    
    cout << "\n";
    cout << "Total de la compra $" << acumulador;
    return 0;
}