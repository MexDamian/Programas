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
        if (cantidadPrestada > 0){
            this. cantidadPrestada = cantidadPrestada;
        } else {
            throw new IllegalArgumentException("Cantidad prestada debe ser mayor a 0");
        }
    }

    // Cantidad de interes-------------------------------
    public double getCantidadDeInteres() {
        return cantidadDeInteres;
    }
 
    public void setCantidadDeInteres(double cantidadDeInteres) {
        if (cantidadDeInteres > 0){
            this. cantidadDeInteres = cantidadDeInteres;
        } else {
            throw new IllegalArgumentException("Cantidad de interes debe ser mayor a 0");
        }
    }

    // Cantidad de semana--------------------------------

    public double getCantidadDeSemana(){
        return cantidadDeSemana;
    }

    public void setCantidadDeSemana(double cantidadDeSemana){
        if(cantidadDeSemana > 0){
            this.cantidadDeSemana = cantidadDeSemana;
        } else {
            throw new IllegalArgumentException("Cantidad de semanas a pagar debe ser mayor a 0");
        }
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

    @Override
    public String ToString() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'ToString'");
    }
}
