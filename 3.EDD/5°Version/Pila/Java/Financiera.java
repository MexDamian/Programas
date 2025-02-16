import java.util.Scanner;
import java.util.Stack;

public class Financiera { 
    public static void main (String[] args){
        Scanner mex = new Scanner (System.in);
        Stack<Prestamo> pila = new Stack<>();
        int continuar =1;

        while(continuar != 0){
            Prestamo P1 = new Prestamo();

            System.out.println("\n \n");
            System.out.println("Datos del acreedor");
            System.out.println("\n");
            System.out.println("Ingresa los nombres: ");
            P1.setNombre(mex.nextLine());
            System.out.println("Ingresa los apellidos: ");
            P1.setApellido(mex.nextLine());
            System.out.println("Ingresa un numero telefonico: ");
            P1.setTelefono(mex.nextLine());
            System.out.println("Ingresa un correo electronico (Opcional): ");
            P1.setCorreo(mex.nextLine());

            System.out.println("Ingrese la cantidad a prestar: ");
            P1.setPrestamo(mex.nextDouble());
            System.out.println("Ingresar el porcentaje de interes: ");
            P1.setPorcentaje(mex.nextDouble());
            System.out.println("Ingresa la cantidad de a pagar: ");
            P1.setSemana(mex.nextDouble());
            System.out.println("El prestamo a sido registrado");

            pila.push(P1);

            System.out.println("Para continuar oprima 1, para finalizar 0: ");
            continuar = mex.nextInt();
            mex.nextLine();
        }
        
        System.out.println("Extrayendo los elementos de la pila.\n");
        while(!pila.empty()){
            Prestamo iterador = pila.pop();
            System.out.println(iterador.ToString());
        }

        mex.close();
    }
}
