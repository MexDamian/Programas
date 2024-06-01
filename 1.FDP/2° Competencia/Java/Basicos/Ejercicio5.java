import java.util.Scanner;

public class Ejercicio5 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		//
		System.out.println("Calcular la convercion de pesos a dolares.\n");
		double Pesos, Dolares, Convercion;
		System.out.println("Pesos: ");
		Pesos= scan.nextDouble();
		System.out.println("Valor del dolar: ");
		Dolares= scan.nextDouble();
		Convercion= Pesos/Dolares;
		System.out.println("Cantidad de dolares= " + Convercion);
		//
	}
}