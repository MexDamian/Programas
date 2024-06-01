#include <iostream>
using namespace std;

#ifndef CAMBIO_H_
#define CAMBIO_H_
class Cambio{
    
    private:
    double pago;
    double cantidad; 

    public:

    double getPago(){
        return pago;
    }

    void setPago(double pago){
        this->pago = pago;
    }

    double getCantidad(){
        return 0;
    }

    void setCantidad(double cantidad){
        this-> cantidad = cantidad;
    }

    double buelto() {
        return pago - cantidad;
    }

};
#endif 