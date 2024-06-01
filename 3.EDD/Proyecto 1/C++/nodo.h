#ifndef NODO_H_
#define NODO_H_
#include "Prestamo.h"
#include "Devolucion.h"
#include "Cambio.h"
#include "Seguridad.h"
class nodo{
    private:
    Prestamo prestamo;
    Devolucion devolucion;
    nodo *enlace;

    public:
// Constructures---------------------------------------------------------------------------------
    nodo(){
        this-> enlace= NULL;
    }

    nodo(Prestamo prestamo, Devolucion devolucion, nodo *enlace){
        this-> devolucion = devolucion;
        this-> prestamo = prestamo;
        this-> enlace = enlace;
    }

    nodo(Prestamo prestamo, nodo *enlace){
        this-> prestamo = prestamo;
        this-> enlace = enlace;
    }

    nodo(Devolucion devolucion, nodo *enlace){
        this-> devolucion = devolucion;
        this-> enlace = enlace;
    }

    nodo(Prestamo prestamo){
		this->prestamo= prestamo;
		this->enlace= NULL; 
	}

     nodo(Devolucion devolucion){
		this->devolucion = devolucion;
		this->enlace= NULL; 
	}

// Setters y Getters------------------------------------------------------------------------------------------------------
    // Prestamo----------------------------------------------------------------------------------
    void setPrestamo(Prestamo prestamo){
        this-> prestamo = prestamo;
    }

    Prestamo getPrestamo(){
        return this-> prestamo;
    }
    //-------------------------------------------------------------------------------------------
    // Devolucion--------------------------------------------------------------------------------
    void setDevolucion(Devolucion devolucion){
        this-> devolucion = devolucion;
    }

    Devolucion getDevolucion(){
        return this-> devolucion;
    }
    //-------------------------------------------------------------------------------------------
    // Enlace------------------------------------------------------------------------------------
    void setEnlace(nodo *enlace){
        this->enlace=enlace;
    }

    nodo *getEnlace(){
        return enlace;
    }
    //-------------------------------------------------------------------------------------------

};

#endif