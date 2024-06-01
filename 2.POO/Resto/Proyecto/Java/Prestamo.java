
public class Prestamo extends Acredor implements Datos {
    
    private String fecha;
    private double CantidadPrestada;
    private double CantidadDeInteres;
    private double CantidadSemanas;

    Prestamo(){
        this.CantidadPrestada= 0;
        this.CantidadDeInteres= 0;
        this.CantidadSemanas= 0;
    }

    public String getFecha() {
        return fecha;
    }
    public void setFecha(String fecha) {
        this.fecha = fecha;
    }
    public double getCantidadPrestada() {
        return CantidadPrestada;
    }
    public void setCantidadPrestada(double CantidadPrestada) {
        if (CantidadPrestada > 0){
            this.CantidadPrestada = CantidadPrestada;
        } else {
            throw new IllegalArgumentException("Cantidad prestada debe ser mayor a 0");
        }
    }
    public double getCantidadDeInteres() {
        return CantidadDeInteres;
    }
    public void setCantidadDeInteres(double CantidadDeInteres) {
        if (CantidadDeInteres > 0){
            this.CantidadDeInteres = CantidadDeInteres;
        } else {
            throw new IllegalArgumentException("Cantidad de interes debe ser mayor a 0");
        }
    }
    public double getCantidadSemanas() {
        return CantidadSemanas;
    }
    public void setCantidadSemanas(double CantidadSemanas){
        if(CantidadSemanas > 0){
            this.CantidadSemanas = CantidadSemanas;
        } else {
            throw new IllegalArgumentException("Cantidad de semanas a pagar debe ser mayor a 0");
        }
    }

    public double Interes(){
        return CantidadPrestada * (CantidadDeInteres/100);
    }

    public double PrestamoTotal(){
        return this.CantidadPrestada + Interes();
    }

    public String ToString(){
        String cadena= "";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";   
        cadena += "Cantidad prestada: $" + CantidadPrestada + "\n";
        cadena +="Semanas a pagar: " + CantidadSemanas + "\n";
        cadena += "Interes (%): " + CantidadDeInteres + "%" + "\n";
        cadena += "Interes ($): $" + Interes() + "\n";
        cadena += "Cantidad total: $" + PrestamoTotal() + "\n";
        return cadena;
    }

    public double SemanasRestantes(){
        return 0;
    }
    public double SaldoRestante(){
        return 0;
    }
}
