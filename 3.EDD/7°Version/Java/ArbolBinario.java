public class ArbolBinario {
    protected nodoPrestamo raiz;
    protected int elementos;

    public ArbolBinario(){
        this.raiz = null;
        elementos = 0;
    }

    public void agregarRaiz(Prestamo nuevo){
        if(elementos == 0){
            raiz = new nodoPrestamo();
            this.raiz.setPrestamo(nuevo);
            elementos++;
        }
    }

    public nodoPrestamo getRaiz(){
        return this.raiz;
    }

    public void agregar(Prestamo prestamo){
        if (elementos != 0){
            nodoPrestamo aux = raiz;
            boolean requiereUbicar = true;
            while (requiereUbicar){
                String valorAux = aux.getPrestamo().getNombre();
                String valorNodo = prestamo.getNombre();
                if (valorNodo.compareTo(valorAux) < 0){
                    if (aux.getIzquierdo() == null){
                        nodoPrestamo N = new nodoPrestamo(prestamo);
                        aux.setIzquierdo(N);
                        requiereUbicar = false;
                    } else {
                        aux = aux.getIzquierdo();
                    }
                } else if (valorNodo.compareTo(valorAux) > 0){
                    if (aux.getDerecho() == null){
                        nodoPrestamo N = new nodoPrestamo(prestamo);
                        aux.setDerecho(N);
                        requiereUbicar = false;
                    } else {
                        aux = aux.getDerecho();
                    }
                } else {
                    requiereUbicar = false;
                }
            }
            elementos++;
        } else {
            agregarRaiz(prestamo);
        }
    }

    public void eliminar(Prestamo prestamo){
        //
    }

    public void encabezadoTabla(){
        System.out.println("_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=__=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");

        System.out.print(String.format("%1$-20s", "Nombre"));
        System.out.print(String.format("%1$-20s", "Apellido"));
        System.out.print(String.format("%1$-20s", "Cantidad prestada"));
        System.out.print(String.format("%1$-15s", "Porcentaje"));
        System.out.print(String.format("%1$-18s", "Semanas a pagar"));
        System.out.print(String.format("%1$-11s", "Cantidad total"));
        System.out.println("-----------------------------------------------------------------------------------------------------------");
    }

    public void pieTabla(){
        System.out.println("-----------------------------------------------------------------------------------------------------------");
    }

    public void filaTabla(Prestamo prestamo){
        
        System.out.print(String.format("%1$-20s", prestamo.getNombre()));
        System.out.print(String.format("%1$-20s", prestamo.getApellido()));
        System.out.print(String.format("%1$-20s", prestamo.getPrestamo()));
        System.out.print(String.format("%1$-15s", prestamo.getPorcentaje()));
        System.out.print(String.format("%1$-18s", prestamo.getSemana()));
        System.out.println(String.format("%1$-11s", prestamo.PrestamoTotal()));
        
    }



    public void preorden() {
        encabezadoTabla();
        preorden(raiz);
        pieTabla();
    }

    public void inorden() {
        encabezadoTabla();
        inorden(raiz);
        pieTabla();
    }

    public void postorden() {
        encabezadoTabla();
        postorden(raiz);
        pieTabla();
    }

   /*  private void fila(Prestamo prestamo){
        System.out.println(prestamo.ToString());
    } */

    private void preorden(nodoPrestamo iterador){
        if(iterador != null){
            Prestamo prestamo = iterador.getPrestamo();
            filaTabla(prestamo);
            preorden(iterador.getIzquierdo());
            preorden(iterador.getDerecho());
        }
    }

    private void inorden(nodoPrestamo iterador){
        if(iterador != null){
            inorden(iterador.getIzquierdo());
            Prestamo prestamo = iterador.getPrestamo();
            filaTabla(prestamo);
            inorden(iterador.getDerecho());
        }
    }

    private void postorden(nodoPrestamo iterador){
        if(iterador != null){
            postorden(iterador.getIzquierdo());
            postorden(iterador.getDerecho());
            Prestamo prestamo = iterador.getPrestamo();
            filaTabla(prestamo);
        }
    }
}
