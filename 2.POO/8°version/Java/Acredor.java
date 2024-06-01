public class Acredor {
    private String nombre;
    private String clave;
    private String apellido;

    

    public Acredor(){
        this.nombre = "";
        this.clave = "";
        this.apellido = "";
    }

// Setters y Getters------------------------------------

    // Nombre-------------------------------------------
    public String getNombre() {
        return nombre;
    }
 
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    //Clave --------------------------------------------
    public String getClave() {
        return clave;
    }

    public void setClave(String clave) {
        this.clave = clave;
    }

    // Apellido -----------------------------------------
    public String getApellido() {
        return apellido;
    }

    public void setApellido(String apellido) {
        this.apellido = apellido;
    }

/*  Abstraccion -------------------------------------------

    public abstract String toString();
*/
}
