public class Acredor {
    private String nombre;
    private String apellido;
    private String clave;
    private int movimiento;
    private String telefono;
    private String correo;

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

    public String getTelefono() {
        return telefono;
    }

    public void setTelefono(String telefono) {
        this.telefono = telefono;
    }

    public String getCorreo() {
        return correo;
    }

    public void setCorreo(String correo) {
        this.correo = correo;
    }

    public void setClave(String clave){
        this.clave = clave;
    }

    public String getClave(){
        return clave;
    }
    
}
 