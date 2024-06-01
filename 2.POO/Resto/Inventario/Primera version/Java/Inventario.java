import java.util.Scanner;
public class Inventario {
    public static void main(String[] args) {
        Scanner mex= new Scanner(System.in);

        Inventarios I1 = new Inventarios();
        System.out.println("Ingresa el nombre del producto: ");
        I1.nombre= mex.nextLine();
        System.out.println("Ingresa un codigo: ");
        I1.codigo= mex.nextLine();
        System.out.println("Ingresa la cantidad de producto: ");
        I1.cantidad= mex.nextDouble();
        System.out.println("Ingresa el costo del producto: ");
        I1.costo= mex.nextDouble();
        I1.ganancia= I1.cantidad * I1.costo;

        System.out.println("Producto: " + I1.nombre);
        System.out.println("Codigo: " + I1.codigo);
        System.out.println("Cantidad del producto: " + I1.cantidad);
        System.out.println("Precio: " + I1.costo);
        System.out.println("Ganancia total: " + I1.ganancia);
    }
}
