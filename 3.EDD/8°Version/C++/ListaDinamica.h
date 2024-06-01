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
        void ordenarNombre();
        void ordenarPrestamo();
        void QuickNombre(nodoPrestamo *inicial, nodoPrestamo *final);
        void QuickPrestamo(nodoPrestamo *inicial, nodoPrestamo *final);
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

void ListaDinamica::ordenarNombre(){
    QuickNombre(primero, ultimo);
}

void ListaDinamica::ordenarPrestamo(){
    QuickPrestamo(primero, ultimo);
} 

void ListaDinamica::QuickNombre(nodoPrestamo *inicial, nodoPrestamo *final){
    iterador= inicial->getEnlace();
    nodoPrestamo *pivote= final->getEnlace();
    if( iterador != pivote){
        int menores = 0, mayores = 0;
        nodoPrestamo *D_i= new nodoPrestamo;
        nodoPrestamo *D_f= new nodoPrestamo;
        nodoPrestamo *I_i= new nodoPrestamo;
        nodoPrestamo *I_f= new nodoPrestamo;
        while(iterador != pivote){
            if( (iterador->getPresta().getNombre()).compare(pivote->getPresta().getNombre())>0){
                (mayores++)? I_f->getEnlace()->setEnlace(iterador) : I_i->setEnlace(iterador);
                I_f->setEnlace(iterador);
            } else {
                (menores++)? D_f->getEnlace()->setEnlace(iterador) : D_i->setEnlace(iterador);
                D_f->setEnlace(iterador);
            }
            iterador= iterador->getEnlace();
        }
        if(menores>1) QuickNombre(D_i, D_f);
        if(mayores>1) QuickNombre(I_i, I_f);

        if (menores>0 && mayores>0){
            D_f->getEnlace()->setEnlace(pivote);
            inicial->setEnlace(D_i->getEnlace());
            pivote->setEnlace(I_i->getEnlace());
            final->setEnlace(I_f->getEnlace());
        } else if (menores >0 && mayores==0){
            D_f->getEnlace()->setEnlace(pivote);
            inicial->setEnlace(D_i->getEnlace());
            final->setEnlace(pivote);
        }else if(menores==0 && mayores>0){
            inicial->setEnlace(pivote);
            pivote->setEnlace(I_i->getEnlace());
            final->setEnlace(I_f->getEnlace());
        }
    }
}

void ListaDinamica::QuickPrestamo(nodoPrestamo *inicial, nodoPrestamo *final){
    iterador= inicial->getEnlace();
    nodoPrestamo *pivote= final->getEnlace();
    if(iterador != pivote){
        int menores= 0, mayores= 0;
        nodoPrestamo *D_i= new nodoPrestamo;
        nodoPrestamo *D_f= new nodoPrestamo;
        nodoPrestamo *I_i= new nodoPrestamo;
        nodoPrestamo *I_f= new nodoPrestamo;
        while (iterador != pivote) {
            if( iterador->getPresta().PrestamoTotal() < pivote->getPresta().PrestamoTotal()){
                (mayores++)? I_f->getEnlace()->setEnlace(iterador) : I_i->setEnlace(iterador);
                I_f->setEnlace(iterador);
            } else {
                (menores++)? D_f->getEnlace()->setEnlace(iterador) : D_i->setEnlace(iterador);
                D_f->setEnlace(iterador);
            }
            iterador= iterador->getEnlace();
        }

        if(menores>1) QuickPrestamo(D_i, D_f);
        if(mayores>1) QuickPrestamo(I_i, I_f);

        if( menores>0 && mayores>0 ){
            D_f->getEnlace()->setEnlace( pivote );
            inicial->setEnlace( D_i->getEnlace() );
            pivote->setEnlace( I_i->getEnlace() );
            final->setEnlace( I_f->getEnlace() );
        } else if(menores>0 && mayores==0) {
            D_f->getEnlace()->setEnlace( pivote );
            inicial->setEnlace( D_i->getEnlace() );
            final->setEnlace( pivote );
        } else if(menores==0 && mayores>0) {
            inicial->setEnlace( pivote );
            pivote->setEnlace( I_i->getEnlace() );
            final->setEnlace( I_f->getEnlace() );
        }   
    }
}
#endif