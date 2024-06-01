#ifndef NODOPRESTAMO_H_INCLUDED
#define NODOPRESTAMO_H_INCLUDED
#include "Prestamo.h"

class nodoprestamo{
    protected:
    Prestamo prestamo;
    nodoprestamo *izq;
    nodoprestamo *der;

    public: 
    nodoprestamo(){
        this-> izq = NULL;
        this-> der = NULL;
    }

    nodoprestamo(Prestamo prestamo){
        this-> prestamo = prestamo;
        this-> izq = NULL;
        this-> der = NULL;
    }

    void setPrestamo(Prestamo prestamo){
        this-> prestamo = prestamo;
    }

    Prestamo getPrestamo(){
        return this-> prestamo;
    }

    void setIzquierdo(nodoprestamo *izq){
        this-> izq = izq;
    }

    nodoprestamo* getIzquierdo(){
        return this-> izq;
    }

    void setDerecho(nodoprestamo *der){
        this-> der = der;
    }

    nodoprestamo* getDerecho(){
        return this-> der;
    }
};


#endif