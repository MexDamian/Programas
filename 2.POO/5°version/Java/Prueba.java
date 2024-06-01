import java.util.Scanner;
public class Prueba {
    public static void main(String[] args) {
        Scanner mex= new Scanner(System.in);
        
        Devoluciones D1 = new Devoluciones();
        int i=0, respuesta;
        String fecha;
        
        System.out.println("Ingresa la fecha: ");
        fecha=mex.nextLine();
    
        do {
            if (i<2){

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

                i++;
                System.out.println("Presione 1 se desea repetir y 0 se desea finalizar: ");
                respuesta= mex.nextInt();
                mex.nextLine();
            }else {respuesta = 0;}

            
        }while(respuesta !=0);

    
    
    
    
    
    
        mex.close();
    }
}
