import java.util.Scanner;

public class Ejercicio4 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		//
		System.out.println("Calcular el area de un circulo.\n");
		double Radio, Area;
		System.out.println("Radio: ");
		Radio= scan.nextDouble();
		Area= 3.1416*(Radio*Radio);
		System.out.println("Area= " + Area);
		//
	}
}