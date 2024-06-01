#ifndef ARBOLBINARIO_H_INCLUDED
#define ARBOLBINARIO_H_INCLUDED
#include "nodoprestamo.h"
#include <iomanip>
class ArbolBinario{
    public:
    ArbolBinario(){
        this->raiz=NULL;
    }

    bool estaVacio(){
        return this-> raiz == NULL;
    }

    nodoprestamo* getRaiz(){
        if(this->raiz){
            return this->raiz;
        } else {
            throw "arbol vacio";
        }
    }

    void setRaiz(Prestamo prestamo){
        nodoprestamo *nuevo=new nodoprestamo(prestamo);
        this->raiz= nuevo;
    }

    void agregar(Prestamo prestamo){
        if (!estaVacio() ){
            nodoprestamo *aux= getRaiz();
            bool requiereUbicar= true;
            while(requiereUbicar){
                string valorAux= aux->getPrestamo().getNombre();
                string valorNodo= prestamo.getNombre();

                if((valorNodo).compare(valorAux) < 0){
                    if(aux->getIzquierdo() == NULL){
                        nodoprestamo *nuevo= new nodoprestamo(prestamo);
                        aux->setIzquierdo(nuevo);
                        requiereUbicar= false;
                    } else {
                        aux= aux->getIzquierdo();
                    }
                } else if((valorNodo).compare(valorAux) > 0){
                    if(aux->getDerecho() == NULL){
                        nodoprestamo *nuevo= new nodoprestamo(prestamo);
                        aux->setDerecho(nuevo);
                        requiereUbicar= false;
                    } else {
                        aux= aux->getDerecho();
                    }
                } else {
                    requiereUbicar= false;
                }
            }
        } else {
            setRaiz(prestamo);
        }
    }

    void eliminar(Prestamo prestamo){
        //
    }
 
    void encabezadoTabla(){
        cout << left << setw(20) << "Apellido";
        cout << left << setw(20) << "Nombre";
        cout << left << setw(20) << "Cantidad prestada";
        cout << left << setw(15) << "Porcentaje";
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
        cout << setw(20) << prestamo.getApellido();
        cout << setw(20) << prestamo.getNombre();
        cout << setw(20) << prestamo.getPrestamo();
        cout << setw(15) << prestamo.getPorcentaje();
        cout << setw(18) << prestamo.getSemana();
        cout << setw(11) << prestamo.PrestamoTotal() << "\n";
    }

    void preorden(){
        encabezadoTabla();
        preorden(this->raiz);
        pieTabla();
    }

    void inorden(){
        encabezadoTabla();
        inorden(this->raiz);
        pieTabla();
    }

    void posorden(){
        encabezadoTabla();
        posorden(this->raiz);
        pieTabla();
    }


    private:
    nodoprestamo *raiz;

    void preorden(nodoprestamo *r){
        if(r != NULL){
            Prestamo prestamo= r-> getPrestamo();
            filaTabla(prestamo);
            preorden(r->getIzquierdo());
            preorden(r->getDerecho());
        }
    }

    void inorden(nodoprestamo *r){
        if(r != NULL ){
            inorden(r-> getIzquierdo());
            Prestamo prestamo= r->getPrestamo();
            filaTabla(prestamo);
            inorden(r->getDerecho());
        }
    }

    void posorden(nodoprestamo *r){
        if(r != NULL){
            posorden(r->getIzquierdo());
            posorden(r->getDerecho());
            Prestamo prestamo= r->getPrestamo();
            filaTabla(prestamo);
        }
    }

    
};

#endif