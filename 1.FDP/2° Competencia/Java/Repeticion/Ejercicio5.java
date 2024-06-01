import java.util.Scanner;

public class Ejercicio5 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		System.out.println("Calcular la convercion de pesos a dolares.\n");
		double Pesos, Dolares, Convercion;
		int Respuesta;
		System.out.println("Cuantas veces deceas que se repita:");
		Respuesta= scan.nextInt();
		for (int i=0; i<Respuesta; i++) {
			System.out.println("Ingresar la cantidad de pesos:");
			Pesos= scan.nextDouble();
			if (Pesos > 0) {
				System.out.println("Ingresa el valor del dolar:");
				Dolares= scan.nextDouble();
				if (Dolares > 0) {
					Convercion= Pesos/Dolares;
					System.out.println("Cantidad de dolares= " + Convercion);
					System.out.println("//////////////////////////////////////.");
				} else {
					System.out.println("Error en el valor del dolar");
					System.out.println("////////////////////////////////");
				}	
			} else {
				System.out.println("Error de pesos");
				System.out.println("//////////////////////////");
			}	
		}
	}
}