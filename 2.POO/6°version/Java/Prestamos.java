public class Prestamos extends Acredor implements Persona{
    
    private double cantidadPrestada;
    private double cantidadDeInteres;
    private double cantidadDeSemana;


// Setters y Getters------------------------------------

    // Cantidad prestada ...............................
    public double getCantidadPrestada() {
        return cantidadPrestada;
    }

    public void setCantidadPrestada(double cantidadPrestada) {
        this. cantidadPrestada = cantidadPrestada;
    }

    // Cantidad de interes-------------------------------
    public double getCantidadDeInteres() {
        return cantidadDeInteres;
    }
 
    public void setCantidadDeInteres(double cantidadDeInteres) {
        this. cantidadDeInteres = cantidadDeInteres;
    }

    // Cantidad de semana--------------------------------

    public double getCantidadDeSemana(){
        return cantidadDeSemana;
    }

    public void setCantidadDeSemana(double cantidadDeSemana){
        this.cantidadDeSemana = cantidadDeSemana;
    }

// Metodos------------------------------------------------
    public double Interes(){
        return cantidadPrestada * (cantidadDeInteres/100);
    }

    public double PrestamoTotal(){
        return cantidadPrestada + Interes();
    }

    public String DatosDelPrestamo(){
        String cadena= "";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";
        cadena += "Cantidad prestada: $" +  cantidadPrestada + "\n";
        cadena +="Semanas a pagar: " + cantidadDeSemana + "\n";
        cadena += "Interes (%): " + cantidadDeInteres + "%" + "\n";
        cadena += "Interes ($): $" + Interes() + "\n";
        cadena += "Cantidad total: $" + PrestamoTotal() + "\n";
        return cadena;
    }

    public String toString(){
       return DatosDelPrestamo();
    }
}
