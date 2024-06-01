import java.util.Scanner;	

public class A {

// Funcion--------------------------------------------------------------------------------------------
	public static double CC (double P, double T){
		return P - T;
	}
//----------------------------------------------------------------------------------------------------

	public static void main(String[] args){
		Scanner scan= new Scanner(System.in);
		System.out.println("Calcular el cambio de una compra.\n");
        double a, b, c;

        System.out.println("Ingresa numero a: ");
        a=scan.nextDouble();
        System.out.println("Ingresa numero b: ");
        b=scan.nextDouble();
        c= CC (a, b );
        System.out.println("Resultado: " + c);
    }
}