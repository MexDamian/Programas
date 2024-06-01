public class nodoDevolucion {
    private Devolucion devolucion;
    private nodoDevolucion enlace;
    
    public nodoDevolucion() {
        this.devolucion = null;
        this.enlace = null;

    }

    public nodoDevolucion (Devolucion devolucion){
        this.devolucion = devolucion;
        this.enlace = null;
    }

    public nodoDevolucion (Devolucion devolucion, nodoDevolucion enlace){
        this.devolucion = devolucion;
        this.enlace = enlace;
    }
    

    public Devolucion getDevolucion() {
        return devolucion;
    }

    public void setDevolucion(Devolucion devolucion) {
        this.devolucion = devolucion;
    }

    public nodoDevolucion getEnlace() {
        return enlace;
    }

    public void setEnlace(nodoDevolucion enlace) {
        this.enlace = enlace;
    }

    public nodoDevolucion getIzquierdo() {
        return null;
    }

    public nodoDevolucion getDerecho() {
        return null;
    }

    public void setIzquierdo(nodoDevolucion n) {
    }

    public void setDerecho(nodoDevolucion n) {
    }

    
}
    

