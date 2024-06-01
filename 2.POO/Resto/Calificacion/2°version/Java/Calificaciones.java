public class Calificaciones{
    private String nombre;
    private String materia;
    private double cognitivo;
    private double sumativo;
    private double formativo;
    public double calificacion;
    
    

    // Constructor vacio---------------------------------------------------------

    public Calificaciones(){
        this.nombre = "";
        this.materia = "";
        this.cognitivo = 0;
        this.sumativo = 0;
        this.sumativo = 0;
    }

    // Constructor con parametros----------------------------------------------------

    public Calificaciones(String nombre, String materia) {
        this.nombre = nombre;
        this.materia = materia;
        this.cognitivo = 9;
        this.formativo = 9;
        this.sumativo = 9;
    }

    public Calificaciones(double cognitivo, double sumativo, double formativo) {
        this.nombre = "Maria Leticia Tec Coh";
        this.materia = "programacion orientada a objetos";
        this.cognitivo = cognitivo;
        this.sumativo = sumativo;
        this.formativo = formativo;
    }

    // Constructor completo-----------------------------------------------------------

    public Calificaciones(String nombre, String materia, double cognitivo, double sumativo, double formativo) {
        this.nombre = nombre;
        this.materia = materia;
        this.cognitivo = cognitivo;
        this.sumativo = sumativo;
        this.formativo = formativo;
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getMateria() {
        return materia;
    }

    public void setMateria(String materia) {
        this.materia = materia;
    }

    public double getCognitivo() {
        return cognitivo;
    }

    public void setCognitivo(double cognitivo) {
        this.cognitivo = cognitivo;
    }

    public double getSumativo() {
        return sumativo;
    }

    public void setSumativo(double sumativo) {
        this.sumativo = sumativo;
    }

    public double getFormativo() {
        return formativo;
    }

    public void setFormativo(double formativo) {
        this.formativo = formativo;
    }

    public double getCalificacion() {
        return calificacion;
    }

    public void setCalificacion(double calificacion) {
        this.calificacion = calificacion;
    }

    public double Promedio(){
        return (this.cognitivo * 0.5) + (this.formativo * 0.25) + (this.sumativo * 0.25);
    }

    public String toString() {
        String datos = "Nombre " + nombre + "\n";
        datos += "Materia: " + materia + "\n";
        datos += "Calificacion final: " + Promedio();
        return datos;
    }

     
 
   
};