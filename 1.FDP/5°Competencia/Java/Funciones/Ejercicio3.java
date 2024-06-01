import java.util.Scanner;

public class Ejercicio3 {

// Funcion--------------------------------------------------------------------------------------------
public static double AT (double B, double H){
	return (B * H) /2;
}
//----------------------------------------------------------------------------------------------------
	
	public static void main (String[] args){
		Scanner scan= new Scanner(System.in);
		double matriz[][] = new double [3][3];
		
		// Procedimiento.----------------------------------------------------------------------------
		System.out.println("Calcular el area de un triangulo.\n");
		System.out.println ("El programa se repite 3 veces");
		// Datos-------------------------------------------------------------------------------------
		for (int i=0; i<3; i++) {
			System.out.println("Ingresar base: ");
			matriz[i][0]= scan.nextDouble();
			if (matriz[i][0] > 0) {
				System.out.println("Ingresar altura: ");
				matriz[i][1]= scan.nextDouble();
				if (matriz[i][1] > 0) {
					matriz[i][2]= AT(matriz[i][0], matriz[i][1]);
					System.out.println("///////////////////////////.");
				} else {
					System.out.println("Error en la altura");
					System.out.println("//////////////////////////");
				}
			} else {
				System.out.println("Error en la base");
				System.out.println("//////////////////////////");
			}
		}
		//-----------------------------------------------------------------------------------------
		
		// Impresion de resultados-----------------------------------------------------------------
		for (int i=0; i<3; i++){
			if( matriz[i][1] > 0 && matriz[i][0] > 0 ){
			System.out.println ("Ejercicios " + (i + 1) );
			System.out.println("Area: Base: " + matriz[i][0] + " x Altura: "
			 + matriz[i][1] + "/2 =" + matriz[i][2]);
			}
		}
		scan.close();
		//----------------------------------------------------------------------------------------

		// Creador y fecha------------------------------------------------------------------------
		System.out.println("\n");
		System.out.println("Creador: Jesus A. Mex Damian 21/11/2022");
		//----------------------------------------------------------------------------------------
	}
}