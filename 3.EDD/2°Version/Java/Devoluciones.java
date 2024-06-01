public class Devoluciones {
    private String nombre;
    private String clave;
    private String fecha;
    private double prestamo;
    private double devolucion;
    private double pagada;
    private double apagar;

    public Devoluciones() {
        this.nombre = " ";
        this.clave = " ";
        this.fecha = " ";
        this.prestamo = 0;
        this.devolucion = 0;
        this.pagada = 0;
        this.apagar = 0;
    }

    public Devoluciones(String nombre, String clave, String fecha) {
        this.nombre = nombre;
        this.clave = clave;
        this.fecha = fecha;
        this.prestamo = 1400;
        this.devolucion = 100;
        this.pagada = 5;
        this.apagar = 14;
    }

    public Devoluciones(String nombre, String clave, String fecha, double prestamo, double devolucion,
            double pagada, double apagar) {
        this.nombre = nombre;
        this.clave = clave;
        this.fecha = fecha;
        this.prestamo = prestamo;
        this.devolucion = devolucion;
        this.pagada = pagada;
        this.apagar = apagar;
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

    public double getPrestamo() {
        return prestamo;
    }

    public void setPrestamo(double prestamo) {
        this.prestamo = prestamo;
    }

    public double getDevolucion() {
        return devolucion;
    }

    public void setDevolucion(double devolucion) {
        this.devolucion = devolucion;
    }

    public double getPagada() {
        return pagada;
    }

    public void setPagada(double pagada) {
        this.pagada = pagada;
    }

    public double getApagar() {
        return apagar;
    }

    public void setApagar(double apagar) {
        this.apagar = apagar;
    }
}
