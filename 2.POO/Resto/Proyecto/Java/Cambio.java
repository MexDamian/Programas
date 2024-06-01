public class Cambio {

    private double pago;
    private double cantidad;

    public double getPago() {
        return pago;
    }

    public void setPago(double pago) {
        this.pago = pago;
    }

    public double getCantidad() {
        return cantidad;
    }

    public void setCantidad(double cantidad) {
        this.cantidad = cantidad;
    }

    public double Buelto(){
        return pago - cantidad;
    }



    
}
