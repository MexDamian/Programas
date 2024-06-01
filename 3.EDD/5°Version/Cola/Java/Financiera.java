import java.util.Scanner;
import java.util.LinkedList;;
public class Financiera {
    public static void main (String[] args){
        Scanner mex = new Scanner (System.in);
        LinkedList<Prestamo> cola= new LinkedList<>();
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

            cola.addLast(P1);

            System.out.println("El prestamo a sido registrado");

           
            System.out.println("Para continuar oprima 1, para finalizar 0: ");
            continuar = mex.nextInt();
            mex.nextLine();
        }

        System.out.println("Extrayendo los elementos de la cola.\n");
        while (!cola.isEmpty()) {
            Prestamo iterador = cola.removeFirst();
            System.out.println(iterador.ToString());
        }
       
        mex.close();
    }
}
