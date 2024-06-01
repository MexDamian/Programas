import java.util.Scanner;	

public class Ejercicio2 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		//
		System.out.println("Calcular el area de un rectagulo.\n");
		double Base, Altura, Area;
		System.out.println("Base: ");
		Base= scan.nextDouble();
		System.out.println("Altura: ");
		Altura= scan.nextDouble();
		Area= Base*Altura;
		System.out.println("Area= " + Area);
		//
	}
}