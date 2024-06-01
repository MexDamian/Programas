import java.util.Scanner;
public class Panaderia {
    public static void main(String[] args) {
        Scanner mex= new Scanner(System.in);

        Panaderio P1 = new Panaderio();
        System.out.println("Ingresa el nombre del pan: ");
        P1.nombre= mex.nextLine();
        System.out.println("Ingresa un codigo para el pan: ");
        P1.codigo= mex.nextLine();
        System.out.println("Ingresa la cantidad del pan: ");
        P1.cantidad= mex.nextDouble();
        System.out.println("Ingresa el precio del pan: ");
        P1.costo= mex.nextDouble();

        System.out.println("Nombre del pan: " + P1.nombre);
        System.out.println("Codigo del pan: " + P1.codigo);
        System.out.println("Cantidad del pan: " + P1.cantidad);
        System.out.println("Precio del pan: $" + P1.costo);
        System.out.println("Ganancia del pan: $" + (P1.cantidad * P1.costo));
    } 
}
