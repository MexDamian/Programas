import java.util.Scanner;

public class Ejercicio3 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		//
		System.out.println("Calcular el area de un triangulo.\n");
		double Base, Altura, Area;
		System.out.println("Base: ");
		Base= scan.nextDouble();
		if (Base > 0) {
			System.out.println("Altura: ");
			Altura= scan.nextDouble();
			if (Altura > 0) {
					Area= (Base*Altura)/2;
				System.out.println("Area= " + Area);
			} else {
				System.out.println("Error en la altura");
			}
		} else {
			System.out.println("Error en la base");
		}
		//
	}
}