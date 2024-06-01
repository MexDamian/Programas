public abstract class Acredor {
    private String nombre;
    private String apellido;
    private int movimiento;

    public Acredor() {
        this.nombre = "";
        this.apellido = "";
        this.movimiento= 0;
    }

    public Acredor(int movimiento) {
        this.nombre = "";
        this.apellido = "";
        this.movimiento = movimiento;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getApellido() {
        return apellido;
    }

    public void setApellido(String apellido) {
        this.apellido = apellido;
    }

    public int getMovimiento() {
        return movimiento;
    }

    public void setMovimiento(int movimiento) {
        this.movimiento = movimiento;
    }

    public abstract String ToString();
    
}
