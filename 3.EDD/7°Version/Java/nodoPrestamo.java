public class nodoPrestamo {
    private Prestamo prestamo;
    private nodoPrestamo izquierdo;
    private nodoPrestamo derecho;
    
    public nodoPrestamo() {
        this.prestamo = null;
        this.izquierdo = null;
        this.derecho = null;
    }
  
    public nodoPrestamo(Prestamo prestamo) {
        this.prestamo = prestamo;
        this.izquierdo = null;
        this.derecho = null;
    }

    public Prestamo getPrestamo() {
        return this.prestamo;
    }

    public void setPrestamo(Prestamo prestamo) {
        this.prestamo = prestamo;
    }

    public nodoPrestamo getIzquierdo() {
        return this.izquierdo;
    }

    public void setIzquierdo(nodoPrestamo izquierdo) {
        this.izquierdo = izquierdo;
    }

    public nodoPrestamo getDerecho() {
        return this.derecho;
    }

    public void setDerecho(nodoPrestamo derecho) {
        this.derecho = derecho;
    }

    
}
