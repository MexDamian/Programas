import java.util.Scanner;

public class Ejercicio5 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		//
		System.out.println("Calcular la convercion de pesos a dolares.\n");
		double Pesos, Dolares, Convercion;
		System.out.println("Pesos: ");
		Pesos= scan.nextDouble();
		if (Pesos > 0) {
			System.out.println("Valor del dolar: ");
			Dolares= scan.nextDouble();
			if (Dolares > 0) {
				Convercion= Pesos/Dolares;
				System.out.println("Cantidad de dolares= " + Convercion);
			} else {
				System.out.println("Error en el valor del dolar");
			}	
		} else {
			System.out.println("Error de pesos");
		}
		//
	}
}