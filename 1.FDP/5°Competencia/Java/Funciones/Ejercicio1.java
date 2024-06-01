import java.util.Scanner;	

public class Ejercicio1 {

// Funcion--------------------------------------------------------------------------------------------
	public static double CC (double P, double T){
		return P - T;
	}
//----------------------------------------------------------------------------------------------------

	public static void main(String[] args){
		Scanner scan= new Scanner(System.in);
		System.out.println("Calcular el cambio de una compra.\n");
		double matriz[][] = new double[3][3];
		
		// Procedimiento.----------------------------------------------------------------------------
		System.out.println("El programa se repetiira 3 veces");
		// Datos-------------------------------------------------------------------------------------
		for (int i=0; i<3; i++) {
			System.out.println("Ingresar el total de compra:");
			matriz[i][0] = scan.nextDouble();
			if (matriz[i][0] > 0) {
				System.out.println("Ingresar la cantidad de pago:");
				matriz[i][1]= scan.nextDouble();
				if (matriz[i][1] >= matriz[i][0]) {
					matriz[i][2]= CC(matriz[i][1], matriz[i][0]);
					System.out.println("//////////////////////////");
				}else{
					System.out.println("Error en el pago");
					System.out.println("//////////////////////////");
				}
			}else{
				System.out.println("Error en el total.\n");
				System.out.println("//////////////////////////");
			}
		}
		//-----------------------------------------------------------------------------------------

		// Impresion de resultados-----------------------------------------------------------------
		for (int i = 0; i < 3; i++) {
			if( matriz[i][1] > 0 && matriz[i][1] >= matriz[i][0] ){
			System.out.println ("Ejercicios " + (i + 1) );
			System.out.println("Cambio de $" + matriz[i][0] +
					" - $" + matriz[i][1] + "= $" + matriz[i][2] + "\n");
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