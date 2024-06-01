import java.util.Scanner;	

public class Ejercicio1 {
	public static void main(String[] args){
		Scanner scan= new Scanner(System.in);
		for (int i=0; i<3; i++) {
			System.out.println("Calcular el cambio de una compra.\n");
			double Total, Pago, Cambio;
			System.out.println("Ingresar el total de compra:");
			Total= scan.nextDouble();
			if (Total > 0) {
				System.out.println("Ingresar la cantidad de pago:");
			Pago= scan.nextDouble();
				if (Pago >= Total) {
					Cambio= Pago-Total;
					System.out.println("Cambio= " + Cambio);
					System.out.println("//////////////////////////");
				}else{
					System.out.println("Error en el pago");
					System.out.println("//////////////////////////");
				}
			}else{
				System.out.println("Error en el total.\n");
				System.out.println("//////////////////////////");
			}
		}
		
	}
}