
public class Devolucion extends Acredor implements Datos{
    private String fecha;
    private double CantidadPrestada;
    private double CantidadDevuelta;
    private double SemanaPagada;
    private double SemanasAPagar;


    public String getFecha() {
        return fecha;
    }
    public void setFecha(String fecha) {
        this.fecha = fecha;
    }
    public double getCantidadPrestada() {
        return CantidadPrestada;
    }
    public void setCantidadPrestada(double cantidadPrestada) {
        CantidadPrestada = cantidadPrestada;
    }
    public double getCantidadDevuelta() {
        return CantidadDevuelta;
    }
    public void setCantidadDevuelta(double cantidadDevuelta) {
        CantidadDevuelta = cantidadDevuelta;
    }
    public double getSemanaPagada() {
        return SemanaPagada;
    }
    public void setSemanaPagada(double semanaPagada) {
        SemanaPagada = semanaPagada;
    }
    public double getSemanasAPagar() {
        return SemanasAPagar;
    }
    public void setSemanasAPagar(double semanasAPagar) {
        SemanasAPagar = semanasAPagar;
    }

    public double SemanasRestantes(){
        return SemanaPagada - SemanasAPagar;
    }

    public double SaldoRestante(){
        return  CantidadPrestada-(CantidadDevuelta * SemanaPagada);
    }

    public String ToString(){
        String cadena ="";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";       
        cadena += "Abono: $" + CantidadDevuelta + "\n";
        cadena += "Semanas restantes: " + SemanasRestantes() + "\n";
        cadena += "Saldo restante: $" + SaldoRestante() + "\n";
        return cadena;
    }

    public double Interes(){
        return 0;
    }

    public double PrestamoTotal(){
        return 0;
    }
}
