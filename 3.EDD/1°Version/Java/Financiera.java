import java.util.Scanner;
import javax.swing.JFrame;
public class Financiera extends JFrame {


    public static void main(String[] args) {

        Scanner mex= new Scanner(System.in);
        Devoluciones D1 = new Devoluciones();
        
        System.out.println("Ingresa la fecha: ");
        D1.setFecha(mex.nextLine());
        System.out.println("Ingresa el nombre: ");
        D1.setNombre(mex.nextLine()); 
        System.out.println("Ingresa la clave: ");
        D1.setClave(mex.nextLine());
        System.out.println("Ingresa la cantidad prestada: ");
        D1.setPrestamo(mex.nextDouble());
        System.out.println("Ingresa la cantidad devuelta: ");
        D1.setDevolucion(mex.nextDouble());
        System.out.println("Ingresa las semanas a pagar: ");
        D1.setApagar(mex.nextDouble());
        System.out.println("Ingresa la semana pagada: ");
        D1.setPagada(mex.nextDouble());
         
        
        System.out.println( "Nombre: " + D1.getNombre());
        System.out.println("Fecha: " + D1.getFecha());
        System.out.println("Clave: " + D1.getClave());
        System.out.println("Abono: $" + D1.getDevolucion());
        System.out.println("Semanas restantes: " + (D1.getApagar() - D1.getPagada()));
        System.out.println("Saldo restante: $" + (D1.getPrestamo() -(D1.getDevolucion() * D1.getPagada())));

        Devoluciones D2 = new Devoluciones("Maria Guadalupe Ten Coh","1554","31/08/2023");
        System.out.println("\n \n");
        System.out.println( "Nombre: " + D2.getNombre());
        System.out.println("Fecha: " + D2.getFecha());
        System.out.println("Clave: " + D2.getClave());
        System.out.println("Abono: $" + D2.getDevolucion());
        System.out.println("Semanas restantes: " + (D2.getApagar() - D2.getPagada()));
        System.out.println("Saldo restante: $" + (D2.getPrestamo() -(D2.getDevolucion() * D2.getPagada())));
        
        
        System.out.println("---------------------------------------------------------------------------");
        System.out.println("Creador: Jesus A. Mex Damian 31/08/2023.");

        mex.close();
    }
}
