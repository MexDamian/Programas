import java.util.Scanner;

public class Financiera {
    
    public static void recorridoNormal(nodoPrestamo iterador){
        if(iterador != null){
            System.out.println(iterador.getPrestamo().ToString());
            recorridoNormal(iterador.getEnlace());
        }
    }

    public static void recorridoInvertido(nodoPrestamo iterador){
        if(iterador != null){
            recorridoInvertido(iterador.getEnlace());
            System.out.println(iterador.getPrestamo().ToString());
        }
    }
    
    public static void main (String[] args){
        Scanner mex = new Scanner (System.in);
        nodoPrestamo inicio = new nodoPrestamo();

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
            System.out.println("Ingresa un nuemro telefonico: ");
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

            nodoPrestamo nuevo  = new nodoPrestamo(P1);
            nodoPrestamo iterador;
            iterador = inicio;

            while (iterador.getEnlace() != null) {
                iterador = iterador.getEnlace();
                
            }
            iterador.setEnlace(nuevo);

            System.out.println("Para continuar oprima 1, para finalizar 0: ");
            continuar = mex.nextInt();
            mex.nextLine();
        }

        System.out.println("\n \n");
        System.out.println("------------------------------------------------------------");
        System.out.println("\n Lista Normal \n");
        recorridoNormal(inicio.getEnlace());

        System.out.println("\n \n");
        System.out.println("------------------------------------------------------------");
        System.out.println("\n Lista Invertida \n");
        recorridoInvertido(inicio.getEnlace());
        mex.close();
    }
}
