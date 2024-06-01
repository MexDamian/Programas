#ifndef NODO_H_
#define NODO_H_
#include "Prestamo.h"

 
class nodoPrestamo{
    private:
    Prestamo prestamo;
    nodoPrestamo *enlace;

    public:

    nodoPrestamo(){
		this->enlace= NULL; 
	}

    nodoPrestamo(Prestamo prestamo){
		this->prestamo= prestamo;
		this->enlace= NULL; 
	}

    nodoPrestamo(Prestamo prestamo, nodoPrestamo *enlace){
		this->prestamo= prestamo;
		this->enlace= enlace;
	}

    


    void setPrestamo(Prestamo prestamo){
        this->prestamo = prestamo;
    }

    Prestamo getPresta(){
        return this->prestamo;
    }

    void setEnlace(nodoPrestamo *enlace){
        this->enlace=enlace;
    }

    nodoPrestamo *getEnlace(){
        return enlace;
    }




};

#endif