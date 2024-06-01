import java.util.Scanner;	

public class Ejercicio1 {
	public static void main(String[] args){
		Scanner scan= new Scanner(System.in);
		//
		System.out.println("Calcular el cambio de una compra.\n");
		double Total, Pago, Cambio;
		System.out.println("Total de compra: ");
		Total= scan.nextDouble();
		System.out.println("Cantidad de pago: ");
		Pago= scan.nextDouble();
		Cambio= Pago-Total;
		System.out.println("Cambio= " + Cambio);
		//
	}
}