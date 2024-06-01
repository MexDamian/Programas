import java.util.Scanner;	

public class Ejercicio7 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		//
		System.out.println("Calcular el costo de cada ingrediente.\n");
		double CantidadDeVenta, Costo1, Cantidad, Costo;
		String Unidad;
		System.out.println("Ingresar la unidad de medicion:");
		Unidad= scan.nextLine ();
		System.out.println("Cantidad por la que se vende por " + Unidad + ":");
		CantidadDeVenta= scan.nextDouble();
		if (CantidadDeVenta > 0) {
			System.out.println("Costo de venta por ingrediente por " + CantidadDeVenta + Unidad + ":");
			Costo1= scan.nextDouble ();
			if (Costo1 > 0) {
				System.out.println("La cantidad a usar");
				Cantidad= scan.nextDouble ();
				if (Cantidad > 0) {
					Costo= Cantidad * Costo1 / CantidadDeVenta;
					System.out.println("Costo de ingrediente= $" + Costo);
				} else {
					System.out.println("Error en la cantidad a usar");
				}
			} else {
				System.out.println("Error en el de venta");
			}
		} else {
			System.out.println("Error en la cantidad de venta");
		}
		//
	}
}