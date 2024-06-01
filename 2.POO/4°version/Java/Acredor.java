public class Acredor {
    private String nombre;
    private String clave;
    private String apellido;
    private int movimiento;
    

    public Acredor(){
        this.nombre = "";
        this.clave = "";
        this.apellido = "";
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

    
}
