public class Devoluciones {
    private String nombre;
    private String clave;
    private String fecha;
    private double cantidadprestada;
    private double cantidaddevuelta;
    private double semanapagada;
    private double semanasapagar;

    public Devoluciones() {
        this.nombre = " ";
        this.clave = " ";
        this.fecha = " ";
        this.cantidadprestada = 0;
        this.cantidaddevuelta = 0;
        this.semanapagada = 0;
        this.semanasapagar = 0;
    }

    public Devoluciones(String nombre, String clave, String fecha) {
        this.nombre = nombre;
        this.clave = clave;
        this.fecha = fecha;
        this.cantidadprestada = 1400;
        this.cantidaddevuelta = 100;
        this.semanapagada = 5;
        this.semanasapagar = 14;
    }

    public Devoluciones(String nombre, String clave, String fecha, double cantidadprestada, double cantidaddevuelta,
            double semanapagada, double semanasapagar) {
        this.nombre = nombre;
        this.clave = clave;
        this.fecha = fecha;
        this.cantidadprestada = cantidadprestada;
        this.cantidaddevuelta = cantidaddevuelta;
        this.semanapagada = semanapagada;
        this.semanasapagar = semanasapagar;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getClave() {
        return clave;
    }

    public void setClave(String clave) {
        this.clave = clave;
    }

    public String getFecha() {
        return fecha;
    }

    public void setFecha(String fecha) {
        this.fecha = fecha;
    }

    public double getCantidadprestada() {
        return cantidadprestada;
    }

    public void setCantidadprestada(double cantidadprestada) {
        this.cantidadprestada = cantidadprestada;
    }

    public double getCantidaddevuelta() {
        return cantidaddevuelta;
    }

    public void setCantidaddevuelta(double cantidaddevuelta) {
        this.cantidaddevuelta = cantidaddevuelta;
    }

    public double getSemanapagada() {
        return semanapagada;
    }

    public void setSemanapagada(double semanapagada) {
        this.semanapagada = semanapagada;
    }

    public double getSemanasapagar() {
        return semanasapagar;
    }

    public void setSemanasapagar(double semanasapagar) {
        this.semanasapagar = semanasapagar;
    }

    
 
    
}
