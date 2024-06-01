import java.util.Scanner;
public class Financiera {
    public static void main(String[] args) {
        Scanner mex= new Scanner(System.in);
  
        Devoluciones D1 = new Devoluciones();
        Prestamos P1 = new Prestamos();
        int i=0;
        String fecha;
        
        System.out.println("Ingresa la fecha: ");
        fecha=mex.nextLine();

        do {
            System.out.println("\n");
            System.out.println("Elige una opcion \n");
            System.out.println("1) Ingresar nuevo prestamo.");
            System.out.println("2) Ingrsar un abono.");
            System.out.println("Opcion: ");
            P1.setMovimiento(mex.nextInt());
            mex.nextLine();

        

            switch(P1.getMovimiento()){

                case 1:
            

                System.out.println("\n");
                System.out.println("Ingresa el nombre: ");
                P1.setNombre(mex.nextLine()); 
                System.out.println("Ingresa el apellidos: ");
                P1.setApellido(mex.nextLine());
                System.out.println("Ingresa la clave: ");
                P1.setClave(mex.nextLine());
                System.out.println("\n");
                System.out.println("Ingresa la cantidad a prestar: ");
                P1.setCantidadPrestada(mex.nextDouble());
                System.out.println("Ingresa el procentaje de interes: ");
                P1.setCantidadDeInteres(mex.nextDouble());
                System.out.println("Ingresa la cantidad de semanas a pagar: ");
                P1.setCantidadDeSemana(mex.nextDouble());
                
                System.out.println("---------------------------------------------------------------------------");
                System.out.println("\n");
                System.out.println("Fecha: " + fecha);
                System.out.println(P1.DatosDelPrestamo());



                break;

                case 2:
            
   
                System.out.println("\n");
                System.out.println("Ingresa el nombre: ");
                D1.setNombre(mex.nextLine()); 
                System.out.println("Ingresa el apellidos: ");
                D1.setApellido(mex.nextLine());
                System.out.println("Ingresa la clave: ");
                D1.setClave(mex.nextLine());
                System.out.println("\n");
                System.out.println("Ingresa la cantidad prestada: ");
                D1.setCantidadprestada(mex.nextDouble());
                System.out.println("Ingresa la cantidad devuelta: ");
                D1.setCantidaddevuelta(mex.nextDouble());
                System.out.println("Ingresa las semanas a pagar: ");
                D1.setSemanasapagar(mex.nextDouble());
                System.out.println("Ingresa la semana pagada: ");
                D1.setSemanapagada(mex.nextDouble());
                
                System.out.println("---------------------------------------------------------------------------");
                System.out.println("\n");
                System.out.println("Fecha: " + fecha);
                System.out.println( D1.toString());
                break;
            }
            i++;
        }while(i<2);
        
        System.out.println("---------------------------------------------------------------------------");
        System.out.println("Creador: Jesus A. Mex Damian 1/03/2023.");


    }
}