public class Devoluciones extends Acredor implements Persona {

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
       if (cantidadprestada > 0){ 
            this.cantidadprestada = cantidadprestada;
        }else {
            throw new IllegalArgumentException("La cantdad prestada debe ser mayor a 0");
        }
    }


    // Cantidad devuelta-----------------------------------------
    public double getCantidaddevuelta() {
        return cantidaddevuelta;
    }

    public void setCantidaddevuelta(double cantidaddevuelta) {
        if (cantidaddevuelta > 0){
            this.cantidaddevuelta = cantidaddevuelta;
        } else {
            throw new IllegalArgumentException("Cantidad devuelta debe ser mayor a 0");
        }
    }

    // Semana pagada---------------------------------------------
    public double getSemanapagada() {
        return semanapagada;
    }

    public void setSemanapagada(double semanapagada) {
        if (semanapagada > 0){
            this.semanapagada = semanapagada;
        } else  {
            throw new IllegalArgumentException("Cantidad de semana paga debe ser mayor a 0");
        }
    }

    // Semanas apagar---------------------------------------------
    public double getSemanasapagar() {
        return semanasapagar;
    }

    public void setSemanasapagar(double semanasapagar) {
        if (semanasapagar > 0){
            this.semanasapagar = semanasapagar;
        } else {
            throw new IllegalArgumentException("Cantidad de semanas a pagar debe ser mayor a 0");
        }
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



    @Override
    public String ToString() {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'ToString'");
    }
 

    
    
}
