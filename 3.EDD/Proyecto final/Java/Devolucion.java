import java.text.SimpleDateFormat;
import java.util.Date;
public class Devolucion extends Acredor{
    Date MyDate = new Date();
    private String fecha;
    private double prestada;
    private double devuelta;
    private double pagada;
    private double apagar;

    Devolucion(){
        this.prestada = 0;
        this.devuelta = 0;
        this.apagar = 0;
        this.pagada = 0;
    }

    public String getFecha() {
        return fecha;
    }
    public void setFecha(String fecha) {
        this.fecha = fecha;
    }
    public double getPrestada() {
        return prestada;
    }
    public void setPrestada(double cantidadPrestada) {
        prestada = cantidadPrestada;
    }
    public double getDevuelta() {
        return devuelta;
    }
    public void setDevuelta(double cantidadDevuelta) {
        devuelta = cantidadDevuelta;
    }
    public double getPagada() {
        return pagada;
    }
    public void setPagada(double semanaPagada) {
        pagada = semanaPagada;
    }
    public double getApagar() {
        return apagar;
    }
    public void setApagar(double semanasAPagar) {
        apagar = semanasAPagar;
    }

    public double SemanasRestantes(){
        return apagar - pagada;
    }

    public double SaldoRestante(){
        return  prestada-(devuelta * pagada);
    }

    public String ToString(){
        String cadena ="";
        cadena += "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
        cadena += "Fecha: " + new SimpleDateFormat("dd/MM/yyyy").format(MyDate) + "\t" + 
        "Hora: " + new SimpleDateFormat("h:m a").format(MyDate) + "\n";
        cadena += "---------------------------------------------------------- \n";
        cadena += "Nombre: " + getNombre() + " " + getApellido() + "\n";
        cadena += "Clave: " + getClave() + "\n";       
        cadena += "Abono: $" + devuelta + "\n";
        cadena += "Semanas restantes: " + SemanasRestantes() + "\n";
        cadena += "Saldo restante: $" + SaldoRestante() + "\n";
        cadena += "---------------------------------------------------------- \n";
        cadena += "Gracias por elegir CrediJAMD \n";
        cadena += "Numero de atencion XXX-XXX-XXXX \n";
        cadena += "Correo Anonimo7612@gmail.com \n";
        cadena += "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
        return cadena;
    }
}
