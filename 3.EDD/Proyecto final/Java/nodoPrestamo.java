public class nodoPrestamo {
    private Prestamo prestamo;
    private nodoPrestamo enlace;
    
    public nodoPrestamo() {
        this.prestamo = null;
        this.enlace = null;
 
    }

    public nodoPrestamo (Prestamo prestamo){
        this.prestamo = prestamo;
        this.enlace = null;
    }

    public nodoPrestamo (Prestamo prestamo, nodoPrestamo enlace){
        this.prestamo = prestamo;
        this.enlace = enlace;
    }
    

    public Prestamo getPrestamo() {
        return prestamo;
    }

    public void setPrestamo(Prestamo prestamo) {
        this.prestamo = prestamo;
    }

    public nodoPrestamo getEnlace() {
        return enlace;
    }

    public void setEnlace(nodoPrestamo enlace) {
        this.enlace = enlace;
    }

    public nodoPrestamo getIzquierdo() {
        return null;
    }

    public nodoPrestamo getDerecho() {
        return null;
    }

    public void setIzquierdo(nodoPrestamo n) {
    }

    public void setDerecho(nodoPrestamo n) {
    }

    
}
