#ifndef NODODEVOLUCION_H_
#define NODODEVOLUCION_H_
#include "Devolucion.h"

class nodoDevolucion{
    private:
    Devolucion devolucion;
    nodoDevolucion *enlace;

    public:

    nodoDevolucion(){
        this->enlace = NULL;
    }

    nodoDevolucion(Devolucion devolucion){
        this->devolucion = devolucion;
        this->enlace = NULL;
    }

    nodoDevolucion(Devolucion devolucion, nodoDevolucion *enlace){
        this-> devolucion = devolucion;
        this-> enlace = enlace;
    }
 
    void setDevolucion(Devolucion devolucion){
        this->devolucion = devolucion;
    }

    Devolucion getDevolucion(){
        return this->devolucion;
    }

    void setEnlace(nodoDevolucion *enlace){
        this->enlace = enlace;
    }

    nodoDevolucion *getEnlace(){
        return enlace;
    }
};

#endif
