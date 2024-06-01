import java.util.Scanner;
public class Financiera {
    public static void main(String[] args){
        Scanner mex = new Scanner(System.in);
        System.out.println("Arbol binario JAVA");
        ArbolBinario coleccion = new ArbolBinario();
        int respuesta;
        do {
            Prestamo P1 = new Prestamo();
            System.out.println("\n");
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
            coleccion.agregar(P1);
            System.out.println("Para continuar oprima 1, para finalizar 0: ");
            respuesta = mex.nextInt();
            mex.nextLine();
        } while (respuesta != 0);
        System.out.println("\n[PRE]_________________________________________P R E O R D E N_________________________________________[PRE]\n");
        coleccion.preorden();
        System.out.println("\n[IN]___________________________________________I N O R D E N__________________________________________[IN]\n");
        coleccion.inorden();
        System.out.println("\n[POST]_______________________________________P O S T O R D E N_______________________________________[POST]\n");
        coleccion.postorden();
        mex.close();
    }
    
}
