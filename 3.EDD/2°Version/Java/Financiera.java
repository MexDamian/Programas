import java.util.Scanner;
public class Financiera {
    public static void main(String[] args) {
        Scanner mex= new Scanner(System.in);
        int jesus = 3;
        Devoluciones D1[] = new Devoluciones[jesus];
        for(int i=0; i<jesus;i++){
            D1[i]= new Devoluciones();
        }
        int D=0;

        for (int i=0;i<jesus;i++){  
            System.out.println("\n \n");  
            System.out.println("Ingresa la fecha: ");
            D1[D].setFecha(mex.nextLine());
            System.out.println("Ingresa el nombre: ");
            D1[D].setNombre(mex.nextLine()); 
            System.out.println("Ingresa la clave: ");
            D1[D].setClave(mex.nextLine());
            System.out.println("Ingresa la cantidad prestada: ");
            D1[D].setPrestamo(mex.nextDouble());
            System.out.println("Ingresa la cantidad devuelta: ");
            D1[D].setDevolucion(mex.nextDouble());
            System.out.println("Ingresa las semanas a pagar: ");
            D1[D].setApagar(mex.nextDouble());
            System.out.println("Ingresa la semana pagada: ");
            D1[D].setPagada(mex.nextDouble());
            mex.nextLine();
            D++;
        }
            
        for(int i=0;i<jesus;i++){
            System.out.println( "Nombre: " + D1[i].getNombre());
            System.out.println("Fecha: " + D1[i].getFecha());
            System.out.println("Clave: " + D1[i].getClave());
            System.out.println("Abono: $" + D1[i].getDevolucion());
            System.out.println("Semanas restantes: " + (D1[i].getApagar() - D1[i].getPagada()));
            System.out.println("Saldo restante: $" + (D1[i].getPrestamo() -(D1[i].getDevolucion() * D1[i].getPagada())));
        }

      
        
        System.out.println("---------------------------------------------------------------------------");
        System.out.println("Creador: Jesus A. Mex Damian 31/08/2023.");

        mex.close();
    }
}

