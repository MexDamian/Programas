public class Devoluciones extends Acredor {

    private double cantidadprestada;
    private double cantidaddevuelta;
    private double semanapagada;
    private double semanasapagar;

    public Devoluciones() {
        this.cantidadprestada = 0;
        this.cantidaddevuelta = 0;
        this.semanapagada = 0;
        this.semanasapagar = 0;
    }
 

 
// Setters y Getters------------------------------------

    // Cantidad Prestada--------------------------------------
    public double getCantidadprestada() {
        return cantidadprestada;
    }

    public void setCantidadprestada(double cantidadprestada) {
        this.cantidadprestada = cantidadprestada;
    }


    // Cantidad devuelta-----------------------------------------
    public double getCantidaddevuelta() {
        return cantidaddevuelta;
    }

    public void setCantidaddevuelta(double cantidaddevuelta) {
        this.cantidaddevuelta = cantidaddevuelta;
    }

    // Semana pagada---------------------------------------------
    public double getSemanapagada() {
        return semanapagada;
    }

    public void setSemanapagada(double semanapagada) {
        this.semanapagada = semanapagada;
    }

    // Semanas apagar---------------------------------------------
    public double getSemanasapagar() {
        return semanasapagar;
    }

    public void setSemanasapagar(double semanasapagar) {
        this.semanasapagar = semanasapagar;
    }

// Metodos----------------------------------------------------------------
    public double SemanasRestantes(){
        return semanasapagar - semanapagada;
    }

    public double SaldoRestante(){
        return  cantidadprestada-(cantidaddevuelta * semanapagada);
    }

    public String toString(){
        String datos = "Nombre: " + getNombre() + " " + getApellido() + "\n";
        datos += "Abono: $" + cantidaddevuelta + "\n";
        datos += "Semanas restantes: " + SemanasRestantes() + "\n";
        datos += "Saldo restante: $" + SaldoRestante() + "\n"; 
        return datos;
    }
 

    
    
}
