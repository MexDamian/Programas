import java.util.Scanner;	

public class Ejercicio6 {
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		System.out.println("Calcular la convercion de grados fahrenhed.\n");
		double matriz [][] = new double [15][2];
		int i = 0;
		System.out.println("El programa se repite hasta 15 veces");
		int Respuesta;
		
		// Procedimiento.----------------------------------------------------------------------------
		do{
			if(i< 15){
				System.out.println("Ingresa fahrenhed: ");
				matriz[i][0]= scan.nextDouble();
				if (matriz[i][0] > -459.69) {
					matriz[i][1]= (matriz[i][0] - 32) * 5/9;
					System.out.println("/////////////////////////////////////.");
				} else {
					System.out.println("Error en los grados fahrenhed");
					System.out.println("////////////////////////////////////");
				}	
			}else{
				Respuesta = 0;
			}
			i++;
			System.out.println("Para finalizar oprima 0, para continuar 1.");
			Respuesta = scan.nextInt();
		} while (Respuesta != 0);
		
		// Impresion de resultados-----------------------------------------------------------------
		System.out.println("\n");
		for (int ii=0; ii<i; ii++) {
			if( matriz[ii][0] > -459.69){
			System.out.println ("Ejercicios " + (ii + 1) );
			System.out.println("Convertir: Fahrenhed: " + matriz[ii][0] + " = Celsius: " + matriz[ii][1]);
			}
		}
		scan.close();	
		
		// Creador y fecha------------------------------------------------------------------------
		System.out.println("\n");
		System.out.println("Creador Jesus A. Mex Damian 16/11/2022");
	}
}