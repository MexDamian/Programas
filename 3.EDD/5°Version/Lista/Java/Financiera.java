import java.util.Scanner;
import java.util.LinkedList;

public class Financiera {
    
    public static void main (String[] args){
        Scanner mex = new Scanner (System.in);
        LinkedList<Prestamo> lista = new LinkedList<>();

        int continuar =1;
        String eleccion;

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
            mex.nextLine();

            System.out.println("[i] Agregar al inicio y [f] Agregar al final | Eleccion: ");
            eleccion = mex.nextLine();
            if(eleccion.equals("i")){
                lista.addFirst(P1);
            } else {
                lista.addLast(P1);
            }
            System.out.println("\n El prestamo a sido registrado");


          

            System.out.println("Para continuar oprima 1, para finalizar 0: ");
            continuar = mex.nextInt();
            mex.nextLine();
        }

        System.out.println("Extraer lista \n");
        while(!lista.isEmpty()){
            Prestamo iterador;
            System.out.println("[i] Extrae del inicio. [f] Extrae del final | Eleccion: ");
            eleccion = mex.nextLine();
            if(eleccion.equals("i")){
                iterador=lista.removeFirst();
            } else {
                iterador = lista.removeLast();
            }
            System.out.println(iterador.ToString());

        }

        mex.close();
    }
}
