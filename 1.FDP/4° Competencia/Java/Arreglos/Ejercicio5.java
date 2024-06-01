import java.util.Scanner;

public class Ejercicio5 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		System.out.println("Calcular la convercion de pesos a dolares.\n");
		double matriz[][] = new double [1000][3];
		int Respuesta;
		System.out.println("Cuantas veces deceas que se repita:");
		Respuesta= scan.nextInt();
		
		// Procedimiento.----------------------------------------------------------------------------
		for (int i=0; i<Respuesta; i++) {
			System.out.println("Ingresar la cantidad de pesos:");
			matriz[i][0]= scan.nextDouble();
			if (matriz[i][0] > 0) {
				System.out.println("Ingresa el valor del dolar:");
				matriz[i][1]= scan.nextDouble();
				if (matriz[i][1] > 0) {
					matriz[i][2]= matriz[i][0]/matriz[i][1];
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
	
		// Impresion de resultados-----------------------------------------------------------------
		System.out.println("Ejercicios realizados");
		for (int i=0; i<Respuesta; i++){
			if( matriz[i][0] > 0 && matriz[i][1] > 0 ){
			System.out.println ("Ejercicios " + (i + 1) );
			System.out.println("Convertir: Pesos: $" + 
			matriz[i][0] + " / Valor: $" + matriz[i][1] + "= $" + matriz[i][2] + "\n");
			}
		}
		scan.close();

		// Creador y fecha------------------------------------------------------------------------
		System.out.println("\n");
		System.out.println("Creador Jesus A. Mex Damian 16/11/2022");
	}
}