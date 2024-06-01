#ifndef LISTADINAMICA_H_
#define LISTADINAMICA_H_
#include <iostream>
#include "nodoPrestamo.h"

class ListaDinamica{
    protected:
        nodoPrestamo *primero;
        nodoPrestamo *ultimo;
        nodoPrestamo *iterador;
        int contador;
    public:
        ListaDinamica();
        void agregaNodoInicio(Prestamo prestamo);
        Prestamo eliminaNodoInicio();
        void agregaNodoFinal(Prestamo prestamo);
        Prestamo eliminaNodoFinal();
        int elementos();
        Prestamo datoNodo(int PosBaseCero);
};

ListaDinamica :: ListaDinamica(){
    primero= new nodoPrestamo();
    ultimo= new nodoPrestamo();
    iterador= new nodoPrestamo();
    contador= 0;
}

void ListaDinamica :: agregaNodoInicio(Prestamo prestamo){
    nodoPrestamo *nuevoPrestamo= new nodoPrestamo(prestamo);
    if(contador){
        nuevoPrestamo->setEnlace(primero->getEnlace());
        primero->setEnlace(nuevoPrestamo);
    }else{
        primero->setEnlace(nuevoPrestamo);
        ultimo->setEnlace(nuevoPrestamo);
    }
    contador++;
}

void ListaDinamica :: agregaNodoFinal(Prestamo Prestamo){
    nodoPrestamo *nuevoPrestamo= new nodoPrestamo(Prestamo);
    if(contador){
        ultimo->getEnlace()->setEnlace(nuevoPrestamo);
        ultimo->setEnlace(nuevoPrestamo);
    }else{
        primero->setEnlace(nuevoPrestamo);
        ultimo->setEnlace(nuevoPrestamo);
    }
    contador++;
}

Prestamo ListaDinamica :: eliminaNodoInicio(){
    nodoPrestamo *prestamoExtraido;
    if(contador){
        iterador= primero->getEnlace();
        prestamoExtraido= iterador;
        iterador= iterador->getEnlace();
        prestamoExtraido->setEnlace(NULL);
        primero->setEnlace(iterador);
        contador--;
    }
    return prestamoExtraido->getPresta();
}

Prestamo ListaDinamica :: eliminaNodoFinal(){
    nodoPrestamo *prestamoExtraido;
    if(contador){
        iterador= primero->getEnlace();
        for(int i=0;i<contador-2;i++){
            iterador= iterador->getEnlace();
        }
        prestamoExtraido= iterador->getEnlace();
        iterador->setEnlace(NULL);
        ultimo->setEnlace(iterador);
        contador--;
    }
    return prestamoExtraido->getPresta();
}

int ListaDinamica :: elementos(){
    return contador;
}

Prestamo ListaDinamica :: datoNodo(int PosBaseCero){
    if(PosBaseCero < contador){
        iterador= primero->getEnlace();
        for(int i=0;i<PosBaseCero;i++){
            iterador= iterador->getEnlace();
        }
        return iterador->getPresta();
    }
    Prestamo prestamo;
    return prestamo;
}
#endif