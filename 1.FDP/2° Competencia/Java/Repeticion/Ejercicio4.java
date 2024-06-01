import java.util.Scanner;

public class Ejercicio4 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		System.out.println("Calcular el area de un circulo.\n");
		double Radio, Area;
		int Respuesta;
		System.out.println("Cuantas veces deceas que se repita:");
		Respuesta= scan.nextInt();
		for (int i=0; i<Respuesta; i++) {
			System.out.println("Radio: ");
			Radio= scan.nextDouble();
			if (Radio > 0){
				Area= 3.14*(Radio*Radio);
				System.out.println("Area= " + Area);
				System.out.println("//////////////////////////////.");
			} else {
				System.out.println("Error en el radio");
				System.out.println("//////////////////////////");
			}	
		}
	}
}