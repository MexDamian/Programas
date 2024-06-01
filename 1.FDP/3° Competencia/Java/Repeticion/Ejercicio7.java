import java.util.Scanner;	

public class Ejercicio7 {
	public static void main(String[] args){
		Scanner scan= new Scanner(System.in);
		for (int i=0; i<3; i++) {
			System.out.println("Calcular el costo de cada ingrediente.\n");
			double CantidadDeVenta, Costo1, Cantidad, Costo;
			System.out.println("Cantidad por la que se vende:");
			CantidadDeVenta= scan.nextDouble();
			if (CantidadDeVenta > 0) {
				System.out.println("Costo de venta por ingrediente por " + CantidadDeVenta + ":");
				Costo1= scan.nextDouble ();
				if (Costo1 > 0) {
					System.out.println("La cantidad a usar");
					Cantidad= scan.nextDouble ();
					if (Cantidad > 0) {
						Costo= Cantidad * Costo1 / CantidadDeVenta;
						System.out.println("Costo de ingrediente= $" + Costo);
						System.out.println("////////////////////////////////////////.");
					} else {
						System.out.println("Error en la cantidad a usar");
						System.out.println("/////////////////////////////////");
					}
				} else {
					System.out.println("Error en el de venta");
					System.out.println("//////////////////////////");
				}
			} else {
				System.out.println("Error en la cantidad de venta");
				System.out.println("////////////////////////////////////");
			}	
		}
	}
}