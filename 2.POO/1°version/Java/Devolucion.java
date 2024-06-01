import java.util.Scanner;
public class Devolucion {
    public static void main(String[] args) {
        Scanner mex= new Scanner(System.in);

        Devoluciones D1 = new Devoluciones();
        System.out.println("\n");
        System.out.println("Ingresa la fecha: ");
        D1.fecha= mex.nextLine();
        System.out.println("Ingresa el nombre: ");
        D1.nombre= mex.nextLine(); 
        System.out.println("Ingresa la clave: ");
        D1.clave= mex.nextLine();
        System.out.println("Ingresa la cantidad prestada: ");
        D1.cantidadprestada= mex.nextDouble();
        System.out.println("Ingresa la cantidad devuelta: ");
        D1.cantidaddevuelta= mex.nextDouble();
        System.out.println("Ingresa las semanas a pagar: ");
        D1.semanaapagar= mex.nextDouble();
        System.out.println("Ingresa la semana pagada: ");
        D1.semanapagada= mex.nextDouble();
        
        
        System.out.println( "Nombre: " + D1.nombre);
        System.out.println("Fecha: " + D1.fecha);
        System.out.println("Clave: " + D1.clave);
        System.out.println("Abono: $" + D1.cantidaddevuelta);
        System.out.println("Semanas restantes: " + (D1.semanaapagar - D1.semanapagada));
        System.out.println("Saldo restante: $" + (D1.cantidadprestada -(D1.cantidaddevuelta * D1.semanapagada)));

        
        System.out.println("---------------------------------------------------------------------------");
        System.out.println("Creador: Jesus A. Mex Damian 21/02/2023.");


    }
}
