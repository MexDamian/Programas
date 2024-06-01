import java.io.*;
import java.util.Scanner;
public class Financiera {
    public static void main(String[] args) {
        Scanner mex= new Scanner(System.in);
        int MAX_ELEMENS =100;
        Devolucion D1[] = new Devolucion[MAX_ELEMENS];
        for(int i=0; i<MAX_ELEMENS;i++){
            D1[i]= new Devolucion();
        }

        Prestamo P1[] = new Prestamo[MAX_ELEMENS];
        for(int i=0; i<MAX_ELEMENS; i++){
            P1[i]= new Prestamo();
        }

        Cambio C1 = new Cambio();
        int i=0, respuesta, D=0, P=0, a;
        String fecha, clave[][]= new String [50][3];
        double acumulador=0,contador=0,ganancia=0;
        
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
                System.out.println("3) Total recaudado de abonos.");
                System.out.println("4) Total del dinero prestado.");
                System.out.println("5) Total de ganancia esperada.");
                System.out.println("6) Calcular cambio.");
                System.out.println("7) Ver historia.");
                System.out.println("8) Cerrar programa.");
                System.out.println("Opcion: ");
                a=mex.nextInt();
                mex.nextLine();
 
            

                switch(a){

                    case 1:
                    try {
                        System.out.println("\n");
                        System.out.println("Ingresa la clave del cliente: ");
                        clave[i][0]= mex.nextLine();
                        clave[i][0] += ".txt";

                        try {
                            FileWriter fw = new FileWriter(clave[i][0], true);
                            fw.close();
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
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
                        P1[P].setCantidadSemanas(mex.nextDouble());
                        
                        
                    } catch (Exception e) {
                        System.out.println(e.getMessage());
                    }
                    acumulador+= P1[P].getCantidadPrestada();
                    ganancia+= P1[P].Interes(); 
                    P++;
                    break;

                    case 2:
                    try{
                        System.out.println("\n");
                        System.out.println("Ingresa la clave del cliente: ");
                        clave[i][1]= mex.nextLine();
                        clave[i][1] += ".txt";

                        try {
                            FileWriter fw = new FileWriter(clave[i][1], true);
                            fw.close();
                        } catch (Exception e) {
                            e.printStackTrace();
                        }
                        System.out.println("\n");
                        System.out.println("Ingresa el nombre: ");
                        D1[D].setNombre(mex.nextLine()); 
                        System.out.println("Ingresa el apellidos: ");
                        D1[D].setApellido(mex.nextLine());
                        System.out.println("Ingresa la cantidad prestada: ");
                        D1[D].setCantidadPrestada(mex.nextDouble());
                        System.out.println("Ingresa la cantidad devuelta: ");
                        D1[D].setCantidadDevuelta(mex.nextDouble());
                        System.out.println("Ingresa las semanas a pagar: ");
                        D1[D].setSemanasAPagar(mex.nextDouble());
                        System.out.println("Ingresa la semana pagada: ");
                        D1[D].setSemanaPagada(mex.nextDouble());
                    } catch (Exception e){
                        System.out.println(e.getMessage());
                    }
                    contador+= D1[D].getCantidadDevuelta();
                    D++;
                    break;

                    case 3:
                    System.out.println("\n");
                    System.out.println("Fecha: " + fecha);
                    System.out.println("Total de abonos: $" + contador);
                    break;

                    case 4:
                    System.out.println("\n");
                    System.out.println("Fecha: " + fecha);
                    System.out.println("Total de dinero prestado: $" + acumulador);
                    break;

                    case 5:
                    System.out.println("\n");
                    System.out.println("Fecha: " + fecha);
                    System.out.println("Ganancia esperada: $" + ganancia);
                    break;

                    case 6:
                    System.out.println("Ingresa la cantidad pagada: ");
                    C1.setPago(mex.nextDouble());
                    System.out.println("Ingresa la cantidad a pagar: ");
                    C1.setCantidad(mex.nextDouble());
                    System.out.println("\n");
                    System.out.println("Cambio: $" + C1.Buelto());

                    break;

                    case 7:
                    System.out.println("\n");
                    System.out.println("Ingresa la clave del cliente: ");
                        clave[i][2]= mex.nextLine();
                        clave[i][2] += ".txt";

                        try {
                            FileWriter fw = new FileWriter(clave[i][2], true);
                            fw.close();
                        } catch (Exception e) {
                            e.printStackTrace();
                        }

                    BufferedReader bfr;
                    try {
                        bfr = new BufferedReader(new FileReader(clave[i][2]));
                        System.out.println("Historial del cliente: ");
                        String texto = bfr.readLine();
                        while (texto != null){
                            System.out.println(texto);
                            texto=bfr.readLine();
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }  
                    break;

                    case 8:
                    System.out.println("Programa finalizado.");
                    respuesta = 0;
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
            int iii=0;
            
            for(int ii=0; ii<i; ii++){
                if(P1[ii].getCantidadPrestada() > 0 && P1[ii].getCantidadDeInteres() > 0 && P1[ii].getCantidadSemanas() > 0){
                    FileWriter fw = new FileWriter(clave[iii][0], true);
                    fw.write(" \n");   
                    fw.write("Prestamos: --------------------------------------------------\n");
                    fw.write("Fecha: " + fecha + "\n");
                    fw.write( P1[ii].ToString());
                    fw.write("---------------------------------------------------------------------------\n");
                    fw.close();
                    iii++;
                    
                }
            }
 
            for(int ii=0; ii<i; ii++) {
                if (D1[ii].getCantidadDevuelta() > 0 && D1[ii].getCantidadPrestada() > 0 && D1[ii].getSemanaPagada() > 0 
                && D1[ii].getSemanasAPagar() > 0){ 
                    FileWriter fw = new FileWriter(clave[iii][1], true);
                    fw.write(" \n");               
                    fw.write("Devoluciones: --------------------------------------------------------------\n");
                    fw.write("Fecha: " + fecha + "\n");
                    fw.write( D1[ii].ToString());
                    fw.write("---------------------------------------------------------------------------\n");
                    fw.close();
                    iii++;
    
                }
            }

            
            System.out.println("Se a almacenado los datos.\n");
        } catch (Exception e) {
            e.printStackTrace();
        }
               
        System.out.println("---------------------------------------------------------------------------");
        System.out.println("Creador: Jesus A. Mex Damian 24/05/2023.");

        mex.close();
    }
}
