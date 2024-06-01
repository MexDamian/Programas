import java.util.Scanner;	

public class Ejercicio6 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		for (int i=0; i<3; i++) {
			System.out.println("Calcular la convercion de grados fahrenhed.\n");
			double Fahrenhed, Convercion;
			System.out.println("Fahrenhed: ");
			Fahrenhed= scan.nextDouble();
			if (Fahrenhed > -459.69) {
				Convercion= (Fahrenhed - 32) * 5/9;
				System.out.println("Celsius= " + Convercion);
				System.out.println("/////////////////////////////////////.");
			} else {
				System.out.println("Error en los grados fahrenhed");
				System.out.println("////////////////////////////////////");
			}	
		}
	}
}