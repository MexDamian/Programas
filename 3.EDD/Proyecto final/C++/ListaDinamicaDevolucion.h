#ifndef ListaDinamicaDevolucion_H_
#define ListaDinamicaDevolucion_H_
#include <iostream>
#include "nodoDevolucion.h"

class ListaDinamicaDevolucion{
    protected:
    nodoDevolucion *primero;
    nodoDevolucion *ultimo;
    nodoDevolucion *iterador;
    int contador;

    public:
    ListaDinamicaDevolucion();
    void agregarNodoInicio(Devolucion devolucion);
    Devolucion eliminaNodoInicio();
    void agregarNodoFinal(Devolucion devolucion);
    Devolucion eliminaNodoFinal();
    int elementos();
    Devolucion datoNodo(int posBaseCero);
    void ordenarNombre();
    void OrdenarSaldo();
    void QuickNombre(nodoDevolucion *inicio, nodoDevolucion *final);
    void QuickSaldo(nodoDevolucion *inicio, nodoDevolucion *final);
    Devolucion buscarApellido(string buscador);
    ListaDinamicaDevolucion buscarApellidos(string buscador);
};

ListaDinamicaDevolucion :: ListaDinamicaDevolucion(){
    primero = new nodoDevolucion();
    ultimo = new nodoDevolucion();
    iterador = new nodoDevolucion();
    contador = 0;
}

void ListaDinamicaDevolucion :: agregarNodoInicio(Devolucion devolucion){
    nodoDevolucion *nuevaDevolucion = new nodoDevolucion(devolucion);
    if(contador){
        nuevaDevolucion->setEnlace(primero->getEnlace());
        primero->setEnlace(nuevaDevolucion);
    } else {
        primero->setEnlace(nuevaDevolucion);
        ultimo->setEnlace(nuevaDevolucion);
    }
    contador++;
}

void encabezado(){
    cout << left << setw(12) << "Clave";
    cout << left << setw(18) << "Apellido";
    cout << left << setw(18) << "Nombre";
    cout << left << setw(21) << "Cantidad prestada";
    cout << left << setw(20) << "Semanas restantes";
    cout << left << setw(16) << "Saldo restante";
    cout << "\n";
    cout << left << setw(107) << setfill ('-') << "-";
    cout << setfill(' ');
    cout << "\n";
}

void pie(){
    cout << left << setw(107) << setfill ('-') << "-";
    cout << setfill(' ');
    cout << "\n";
}

void fila(Devolucion devolucion){
    cout << setw(12) << devolucion.getClave();
    cout << setw(18) << devolucion.getApellido();
    cout << setw(18) << devolucion.getNombre();
    cout << setw(21) << devolucion.getPrestada();
    cout << setw(20) << devolucion.SemanasRestantes();
    cout << setw(16) << devolucion.SaldoRestante() << "\n";
}

void ListaDinamicaDevolucion :: agregarNodoFinal(Devolucion devolucion){
    nodoDevolucion *nuevaDevolucion = new nodoDevolucion(devolucion);
    if(contador){
        ultimo->getEnlace()->setEnlace(nuevaDevolucion);
        ultimo->setEnlace(nuevaDevolucion);
    } else {
        primero->setEnlace(nuevaDevolucion);
        ultimo->setEnlace(nuevaDevolucion);
    }
    contador++;
}

Devolucion ListaDinamicaDevolucion :: eliminaNodoInicio(){
    nodoDevolucion *devolucionExtraida;
    if(contador){
        iterador = primero->getEnlace();
        devolucionExtraida = iterador;
        iterador = iterador->getEnlace();
        devolucionExtraida->setEnlace(NULL);
        primero->setEnlace(iterador);
        contador--;
    }
    return devolucionExtraida->getDevolucion();
}

Devolucion ListaDinamicaDevolucion :: eliminaNodoFinal(){
    nodoDevolucion *devolucionExtraida;
    if (contador){
        iterador = primero->getEnlace();
        for(int i=0;i<contador-2;i++){
            iterador = iterador->getEnlace();
        }
        devolucionExtraida = iterador->getEnlace();
        iterador->setEnlace(NULL);
        ultimo->setEnlace(iterador);
        contador--;
    }
    return devolucionExtraida->getDevolucion();
}

int ListaDinamicaDevolucion :: elementos(){
    return contador;
}

Devolucion ListaDinamicaDevolucion :: datoNodo(int posBaseCero){
    if(posBaseCero < contador){
        iterador = primero->getEnlace();
        for(int i=0;i<posBaseCero;i++){
            iterador = iterador->getEnlace();
        }
        return iterador->getDevolucion();
    }
    Devolucion devolucion;
    return devolucion;
}

void ListaDinamicaDevolucion :: ordenarNombre(){
    QuickNombre(primero, ultimo);
}

void ListaDinamicaDevolucion :: OrdenarSaldo(){
    QuickSaldo(primero, ultimo);
}

void ListaDinamicaDevolucion :: QuickNombre(nodoDevolucion *inicio, nodoDevolucion *final){
    iterador = inicio->getEnlace();
    nodoDevolucion *pivote = final->getEnlace();
    if (iterador != pivote){
        int menores = 0, mayores = 0;
        nodoDevolucion *Di = new nodoDevolucion;
        nodoDevolucion *Df = new nodoDevolucion;
        nodoDevolucion *Ii = new nodoDevolucion;
        nodoDevolucion *If = new nodoDevolucion;
        while(iterador != pivote){
            if ( (iterador->getDevolucion().getApellido()).compare(pivote->getDevolucion().getApellido())>0){
                (mayores++)? If->getEnlace()->setEnlace(iterador) : Ii->setEnlace(iterador);
                If->setEnlace(iterador);
            } else {
                (menores++)? Df->getEnlace()->setEnlace(iterador) : Di->setEnlace(iterador);
                Df->setEnlace(iterador);
            }
            iterador = iterador->getEnlace();
        }
        if (menores>1) QuickNombre(Di, Df);
        if (menores>1) QuickNombre(Ii, If);

        if(menores>0 && mayores>0){
            Df->getEnlace()->setEnlace(pivote);
            inicio->setEnlace(Di->getEnlace());
            pivote->setEnlace(Ii->getEnlace());
            final->setEnlace(If->getEnlace());
        } else if (menores>0 && mayores==0){
            Df->getEnlace()->setEnlace(pivote);
            inicio->setEnlace(Di->getEnlace());
            final->setEnlace(pivote);
        } else if (menores==0 && mayores>0){
            inicio->setEnlace(pivote);
            pivote->setEnlace(Ii->getEnlace());
            final->setEnlace(If->getEnlace());
        }
    }
}

void ListaDinamicaDevolucion::QuickSaldo(nodoDevolucion *inicio, nodoDevolucion *final){
    iterador= inicio->getEnlace();
    nodoDevolucion *pivote= final->getEnlace();
    if(iterador != pivote){
        int menores= 0, mayores= 0;
        nodoDevolucion *D_i= new nodoDevolucion;
        nodoDevolucion *D_f= new nodoDevolucion;
        nodoDevolucion *I_i= new nodoDevolucion;
        nodoDevolucion *I_f= new nodoDevolucion;
        while (iterador != pivote) {
            if( iterador->getDevolucion().SaldoRestante() < pivote->getDevolucion().SaldoRestante()){
                (mayores++)? I_f->getEnlace()->setEnlace(iterador) : I_i->setEnlace(iterador);
                I_f->setEnlace(iterador);
            } else {
                (menores++)? D_f->getEnlace()->setEnlace(iterador) : D_i->setEnlace(iterador);
                D_f->setEnlace(iterador);
            }
            iterador= iterador->getEnlace();
        }

        if(menores>1) QuickSaldo(D_i, D_f);
        if(mayores>1) QuickSaldo(I_i, I_f);

        if( menores>0 && mayores>0 ){
            D_f->getEnlace()->setEnlace( pivote );
            inicio->setEnlace( D_i->getEnlace() );
            pivote->setEnlace( I_i->getEnlace() );
            final->setEnlace( I_f->getEnlace() );
        } else if(menores>0 && mayores==0) {
            D_f->getEnlace()->setEnlace( pivote );
            inicio->setEnlace( D_i->getEnlace() );
            final->setEnlace( pivote );
        } else if(menores==0 && mayores>0) {
            inicio->setEnlace( pivote );
            pivote->setEnlace( I_i->getEnlace() );
            final->setEnlace( I_f->getEnlace() );
        }   
    }
}

Devolucion ListaDinamicaDevolucion :: buscarApellido(string buscador){
    Devolucion devolucion;
    iterador= primero->getEnlace();
    while(iterador){
        if((iterador->getDevolucion().getApellido()).compare(buscador)==0){
            devolucion = iterador->getDevolucion();
            return devolucion;
        }
        iterador = iterador->getEnlace();
    }
    return devolucion;
}

ListaDinamicaDevolucion ListaDinamicaDevolucion ::buscarApellidos(string buscador){
    ListaDinamicaDevolucion encontrados;
    iterador = primero->getEnlace();
    while(iterador){
        if((iterador->getDevolucion().getApellido()).compare(buscador)==0){
            encontrados.agregarNodoFinal(iterador->getDevolucion());
        }
        iterador = iterador->getEnlace();
    }
    return encontrados;
}

#endif