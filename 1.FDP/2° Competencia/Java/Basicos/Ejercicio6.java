import java.util.Scanner;	

public class Ejercicio6 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		//
		System.out.println("Calcular la convercion de grados fahrenhed.\n");
		double Fahrenhed, Convercion;
		System.out.println("Fahrenhed: ");
		Fahrenhed= scan.nextDouble();
		Convercion= (Fahrenhed - 32) * 5/9;
		System.out.println("Celsius= " + Convercion);
		//
	}
}