
public class Prestamo extends Acredor {
    
    private String fecha;
    private double prestamo;
    private double porcentaje;
    private double semana;

    Prestamo(){
        this.prestamo= 0;
        this.porcentaje= 0;
        this.semana= 0;
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
        if (prestamo > 0){
            this.prestamo = prestamo;
        } else {
            throw new IllegalArgumentException("Cantidad prestada debe ser mayor a 0");
        }
    }
    public double getPorcentaje() {
        return porcentaje;
    }
    public void setPorcentaje(double porcentaje) {
        if (porcentaje > 0){
            this.porcentaje = porcentaje;
        } else {
            throw new IllegalArgumentException("Cantidad de interes debe ser mayor a 0");
        }
    }
    public double getSemana() {
        return semana;
    }
    public void setSemana(double semana){
        if(semana > 0){
            this.semana = semana;
        } else {
            throw new IllegalArgumentException("Cantidad de semanas a pagar debe ser mayor a 0");
        }
    }

    public double Interes(){
        return prestamo * (porcentaje/100);
    }

    public double PrestamoTotal(){
        return this.prestamo + Interes();
    }

    public String ToString(){
        String cadena= "";
        cadena += "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";  
        cadena += "Telefono: " + getTelefono() + "\n";
        cadena += "Correo: " + getCorreo() + "\n"; 
        cadena += "Cantidad prestada: $" + prestamo + "\n";
        cadena +="Semanas a pagar: " + semana + "\n";
        cadena += "Interes (%): " + porcentaje + "%" + "\n";
        cadena += "Interes ($): $" + Interes() + "\n";
        cadena += "Cantidad total: $" + PrestamoTotal() + "\n";
        cadena += "------------------------------------------------------- \n";
        cadena += "Gracias por elegir CrediJAMD \n";
        cadena += "Numero de atencion XXX-XXX-XXXX \n";
        cadena += "Correo Anonimo7612@gmail.com \n";
        cadena += "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
        return cadena;
    }

}
