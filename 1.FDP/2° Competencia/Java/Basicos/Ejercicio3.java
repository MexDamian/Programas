import java.util.Scanner;

public class Ejercicio3 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		//
		System.out.println("Calcular el area de un triangulo.\n");
		double Base, Altura, Area;
		System.out.println("Base: ");
		Base= scan.nextDouble();
		System.out.println("Area: ");
		Altura= scan.nextDouble();
		Area= (Base*Altura)/2;
		System.out.println("Area= " + Area);
		//
	}
}