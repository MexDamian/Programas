import java.io.*;
import java.util.Scanner;
public class Financiera {
    public static void main(String[] args) {
        Scanner mex= new Scanner(System.in);
        int MAX_ELEMENS =100;
        Devoluciones D1[] = new Devoluciones[MAX_ELEMENS];
        for(int i=0; i<MAX_ELEMENS;i++){
            D1[i]= new Devoluciones();
        }
 
        Prestamos P1[] = new Prestamos[100];
        for(int i=0; i<MAX_ELEMENS; i++){
            P1[i]= new Prestamos();
        }
        int i=0, respuesta, D=0, P=0, a;
        String fecha, clave;

        System.out.println("Ingresa la clave del cliente: ");
        clave= mex.nextLine();
        clave += ".txt";

        try {
            FileWriter fw = new FileWriter(clave, true);
            fw.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
        

        System.out.println("Bienvenido a la financiera JAMD. \n");
        System.out.println("Ingresa la fecha: ");
        fecha=mex.nextLine();

        do {
            if (i<MAX_ELEMENS){
                System.out.println("\n");
                System.out.println("Al programa le quedan " + MAX_ELEMENS + " intentos");
                System.out.println("\n");
                System.out.println("Elige una opcion \n");
                System.out.println("1) Ingresar nuevo prestamo.");
                System.out.println("2) Ingrsar un abono.");
                System.out.println("Opcion: ");
                a=mex.nextInt();
                mex.nextLine();

            

                switch(a){

                    case 1:
                    try {
                        System.out.println("\n");
                        System.out.println("Ingresa el nombre: ");
                        P1[P].setNombre(mex.nextLine()); 
                        System.out.println("Ingresa el apellidos: ");
                        P1[P].setApellido(mex.nextLine());
                        System.out.println("Ingresa la cantidad a prestar: ");
                        P1[P].setCantidadPrestada(mex.nextDouble());
                        System.out.println("Ingresa el procentaje de interes: ");
                        P1[P].setCantidadDeInteres(mex.nextDouble());
                        System.out.println("Ingresa la cantidad de semanas a pagar: ");
                        P1[P].setCantidadDeSemana(mex.nextDouble());
                    } catch (Exception e) {
                        System.out.println(e.getMessage());
                    }
                    
                    P++;
                    break;

                    case 2:
                    try{
                        System.out.println("\n");
                        System.out.println("Ingresa el nombre: ");
                        D1[D].setNombre(mex.nextLine()); 
                        System.out.println("Ingresa el apellidos: ");
                        D1[D].setApellido(mex.nextLine());
                        System.out.println("Ingresa la cantidad prestada: ");
                        D1[D].setCantidadprestada(mex.nextDouble());
                        System.out.println("Ingresa la cantidad devuelta: ");
                        D1[D].setCantidaddevuelta(mex.nextDouble());
                        System.out.println("Ingresa las semanas a pagar: ");
                        D1[D].setSemanasapagar(mex.nextDouble());
                        System.out.println("Ingresa la semana pagada: ");
                        D1[D].setSemanapagada(mex.nextDouble());
                    } catch (Exception e){
                        System.out.println(e.getMessage());
                    }
                    D++;
                    break;
                }
                i++;
                MAX_ELEMENS--;
                System.out.println("\n");
                System.out.println("Presione 1 se desea repetir y 0 se desea finalizar: ");
                respuesta= mex.nextInt();
                mex.nextLine();
            }else {respuesta = 0;}

           

        }while(respuesta !=0);


        try {
            FileWriter fw = new FileWriter(clave, true);
            
            for(int ii=0; ii<i; ii++){
                if(P1[ii].getCantidadPrestada() > 0 && P1[ii].getCantidadDeInteres() > 0 && P1[ii].getCantidadDeSemana() > 0){
                    fw.write(" \n");   
                    fw.write("prestamos: --------------------------------------------------\n");
                    fw.write("Fecha: " + fecha + "\n");
                    fw.write( P1[ii].DatosDelPrestamo());
                    fw.write("---------------------------------------------------------------------------\n");
                }
            }
    
            for(int ii=0; ii<i; ii++) {
                if (D1[ii].getCantidaddevuelta() > 0 && D1[ii].getCantidadprestada() > 0 && D1[ii].getSemanapagada() > 0 
                && D1[ii].getSemanasapagar() > 0){ 
                    fw.write(" \n");               
                    fw.write("Devoluciones: --------------------------------------------------------------\n");
                    fw.write("Fecha: " + fecha + "\n");
                    fw.write( D1[ii].toString());
                    fw.write("---------------------------------------------------------------------------\n");
                }
            }

            fw.close();
            System.out.println("Se a almacenado los datos.\n");
        } catch (Exception e) {
            e.printStackTrace();
        }

        String Eleccion;
        System.out.println("Desea ver el historial del cliente [S][N]: ");
        Eleccion= mex.nextLine();

        if(Eleccion.equals("S") || Eleccion.equals("s")){
            BufferedReader bfr;
            try {
                bfr = new BufferedReader(new FileReader(clave));
                System.out.println("Historial del cliente: ");
                String texto = bfr.readLine();
                while (texto != null){
                    System.out.println(texto);
                    texto=bfr.readLine();
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
        mex.close();


       
        
        System.out.println("---------------------------------------------------------------------------");
        System.out.println("Creador: Jesus A. Mex Damian 24/03/2023.");

        mex.close();
    }
}