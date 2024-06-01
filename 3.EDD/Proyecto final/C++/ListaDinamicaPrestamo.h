#ifndef LISTADINAMICA_H_
#define LISTADINAMICA_H_
#include <iostream>
#include "nodoPrestamo.h"

class ListaDinamicaPrestamo{
    protected:
        nodoPrestamo *primero;
        nodoPrestamo *ultimo;
        nodoPrestamo *iterador;
        int contador;
    public:
        ListaDinamicaPrestamo();
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
        Prestamo buscarNombre(string buscado);
        ListaDinamicaPrestamo buscarNombres(string buscado);
};

ListaDinamicaPrestamo :: ListaDinamicaPrestamo(){
    primero= new nodoPrestamo();
    ultimo= new nodoPrestamo();
    iterador= new nodoPrestamo();
    contador= 0;
}

void ListaDinamicaPrestamo :: agregaNodoInicio(Prestamo prestamo){
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
void encabezadoTabla(){
    cout << left << setw(15) << "Clave";
    cout << left << setw(20) << "Apellido";
    cout << left << setw(20) << "Nombre";
    cout << left << setw(20) << "Cantidad prestada";
    cout << left << setw(18) << "Semanas a pagar";
    cout << left << setw(11) << "Cantidad total";
    cout << "\n";
    cout << left << setw(107) << setfill ('-') << "-";
    cout << setfill(' ');
    cout << "\n";
}

void pieTabla(){
    cout << left << setw(107) << setfill ('-') << "-";
    cout << setfill(' ');
    cout << "\n";
}

void filaTabla(Prestamo prestamo){
    cout << setw(15) << prestamo.getClave();
    cout << setw(20) << prestamo.getApellido();
    cout << setw(20) << prestamo.getNombre();
    cout << setw(20) << prestamo.getPrestamo();
    cout << setw(18) << prestamo.getSemana();
    cout << setw(11) << prestamo.PrestamoTotal() << "\n";
}

void ListaDinamicaPrestamo :: agregaNodoFinal(Prestamo Prestamo){
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

Prestamo ListaDinamicaPrestamo :: eliminaNodoInicio(){
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

Prestamo ListaDinamicaPrestamo :: eliminaNodoFinal(){
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

int ListaDinamicaPrestamo :: elementos(){
    return contador;
}

Prestamo ListaDinamicaPrestamo :: datoNodo(int PosBaseCero){
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

void ListaDinamicaPrestamo::ordenarNombre(){
    QuickNombre(primero, ultimo);
}

void ListaDinamicaPrestamo::ordenarPrestamo(){
    QuickPrestamo(primero, ultimo);
} 

void ListaDinamicaPrestamo::QuickNombre(nodoPrestamo *inicial, nodoPrestamo *final){
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

void ListaDinamicaPrestamo::QuickPrestamo(nodoPrestamo *inicial, nodoPrestamo *final){
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

Prestamo ListaDinamicaPrestamo::buscarNombre(string buscado){
    Prestamo prestamo;
    iterador= primero->getEnlace();
    while(iterador){
        if((iterador->getPresta().getNombre()).compare(buscado)==0){
            prestamo= iterador->getPresta();
            return prestamo;
        }
        iterador= iterador->getEnlace();
    }
    return prestamo;
}

ListaDinamicaPrestamo ListaDinamicaPrestamo:: buscarNombres(string buscado){
    ListaDinamicaPrestamo encontrados;
    iterador= primero->getEnlace();
    while(iterador){
        if((iterador->getPresta().getNombre()).compare(buscado)==0){
            encontrados.agregaNodoFinal(iterador->getPresta());
        }
        iterador= iterador->getEnlace();
    }
    return encontrados;
}
#endif