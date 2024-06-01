import java.util.Scanner;
public class Devolucion {
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
        D1.setCantidadprestada(mex.nextDouble());
        System.out.println("Ingresa la cantidad devuelta: ");
        D1.setCantidaddevuelta(mex.nextDouble());
        System.out.println("Ingresa las semanas a pagar: ");
        D1.setSemanasapagar(mex.nextDouble());
        System.out.println("Ingresa la semana pagada: ");
        D1.setSemanapagada(mex.nextDouble());
         
        
        System.out.println( D1.toString());
        

        
        System.out.println("---------------------------------------------------------------------------");
        System.out.println("Creador: Jesus A. Mex Damian 1/03/2023.");


    }
}
