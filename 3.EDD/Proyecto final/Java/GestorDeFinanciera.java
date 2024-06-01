import java.util.Scanner;
import java.io.*;

public class GestorDeFinanciera {

    public static Scanner mex = new Scanner(System.in);
    private static void CapturaPrestamo(ListaDinamicaPrestamo prestamos, String ubicacion) {
        Prestamo P1 = new Prestamo();
        String clave;
        System.out.println("\n");
        System.out.println("Datos del acreedor");
        System.out.println("\n");
        System.out.println("Ingresa la clave del cliente: ");
        clave = mex.nextLine();
        P1.setClave(clave);
        clave += ".txt";

        try {
            FileWriter fw = new FileWriter(clave, true);
            fw.close();
        } catch (Exception e) {
            e.printStackTrace();
        }

        
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

        switch(ubicacion){
            case "i":
                prestamos.agregaInicio(P1);
            break;

            case "f":
                prestamos.agregaFinal(P1);
            break;

            default:
                System.out.println("Error");
            break;
        }
        if(P1.getPrestamo() > 0 && P1.getPorcentaje() > 0 && P1.getSemana() > 0){
            
            try {
                FileWriter fw = new FileWriter(clave, true);   
                fw.write("Prestamo: \n");
                fw.write( P1.ToString());
                fw.write("---------------------------------------------------------------------------\n");
                fw.close();
            } catch (IOException e) {

                e.printStackTrace();
            }
            System.out.println("Se a almacenado los datos.\n");  
        }
        System.out.println(P1.ToString());
        continuar();
    }

    private static void CapturaDevolucion(ListaDinamicaDevolucion prestamos, String ubicacion){
        Devolucion D1 = new Devolucion();
        String clave;
        System.out.println("\n");
        System.out.println("Datos del acreedor");
        System.out.println("\n");
        System.out.println("Ingresa la clave del cliente: ");
        clave = mex.nextLine();
        D1.setClave(clave);
        clave += ".txt";

        try {
            FileWriter fw = new FileWriter(clave, true);
            fw.close();
        } catch (Exception e) {
            e.printStackTrace();
        }
        System.out.println("\n \n");  
        System.out.println("Ingresa el nombre: ");
        D1.setNombre(mex.nextLine());
        System.out.println("Ingresa los apellidos: ");
        D1.setApellido(mex.nextLine()); 

        System.out.println("Ingresa la cantidad prestada: ");
        D1.setPrestada(mex.nextDouble());
        System.out.println("Ingresa la cantidad devuelta: ");
        D1.setDevuelta(mex.nextDouble());
        System.out.println("Ingresa las semanas a pagar: ");
        D1.setApagar(mex.nextDouble());
        System.out.println("Ingresa la semana pagada: ");
        D1.setPagada(mex.nextDouble());
        mex.nextLine();

        switch(ubicacion){
            case "i":
                prestamos.agregaInicio(D1);
            break;

            case "f":
                prestamos.agregaFinal(D1);
            break;

            default:
                System.out.println("Error");
            break;
        }
        if(D1.getPrestada() > 0 && D1.getDevuelta() > 0 && D1.getApagar() > 0 && D1.getPagada() > 0){ 
            try {
                FileWriter fw = new FileWriter(clave, true);
                fw.write("Devolucion: n");
                fw.write( D1.ToString());
                fw.write("---------------------------------------------------------------------------\n");
                fw.close();
            } catch (IOException e) {
                
                e.printStackTrace();
            }
            
            System.out.println("Se a almacenado los datos.\n");  
        }
        System.out.println(D1.ToString());
        continuar();
    }
    

    public static void main(String[] args) {
        int opcion;
        String clave;
        do{
            clearScreen();
            System.out.println("\033[32m-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
            System.out.println("Menu principal.                               |");
            System.out.println("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
            System.out.println("[1] Opciones de prestamo.                     |");
            System.out.println("[2] Opciones de devolucion.                   |");
            System.out.println("[3] Consultar historial.                      |");
            System.out.println("[4] Salir.                                    |");
            System.out.println("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");
            System.out.println("Opcion: ");
            opcion = mex.nextInt();
            mex.nextLine();

            switch (opcion) {
                case (1):{
                    opcionPrestamo();
                break;
                }
                     
                case (2):{
                    opcionDevolucion();
                break;
                }

                case (3):{
                    System.out.println("\n");
                    System.out.println("Ingresa la clave del cliente: ");
                        clave= mex.nextLine();
                        clave += ".txt";

                        try {
                            FileWriter fw = new FileWriter(clave, true);
                            fw.close();
                        } catch (Exception e) {
                            e.printStackTrace();
                        }

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
                    continuar();
                break;
                }

                case (4):{
                    opcion = 4;
                break;
                }

                default:
                    System.out.println("Error en la opcion elegida");
                    continuar();
                break;
                
            }


        }while(opcion != 4);
        
        
    }

    private static void opcionPrestamo(){
     
        ListaDinamicaPrestamo prestamos = new ListaDinamicaPrestamo();

        int opcion;
        
        do {
            clearScreen();
            System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");
            System.out.println("Menu de prestamos.                            |");
            System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");
            System.out.println("[1] Agregar al inicio.                        |");
            System.out.println("[2] Agregar al final.                         |");
            System.out.println("[3] Eliminar primer prestamo.                 |");
            System.out.println("[4] Eliminar ultimo prestamo.                 |");
            System.out.println("[5] Cantidad de prestamos.                    |");
            System.out.println("[6] Imprimir lista de prestamos.              |");
            System.out.println("[7] Imprimir los datos de un prestamo.        |");
            System.out.println("[8] Ordenar por nombre                        |");
            System.out.println("[9] Ordenar por cantidad de prestamo          |");
            System.out.println("[10] Bucar prestamo por nombre.               |");
            System.out.println("[11] Buscar prestamos por nombre.             |");
            System.out.println("[12] Regresar al menu principal.              |");
            System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");
            System.out.print("Elegir opcion: ");
            opcion = mex.nextInt();
            mex.nextLine();
            


            switch(opcion){
                case 1:
                CapturaPrestamo(prestamos, "i");
                break;

                case 2:
                CapturaPrestamo(prestamos, "f");
                break;
                

                case 3:
                prestamos.eliminaInicio();
                System.out.println("Se a borrado el primer prestamo");
                continuar();
                break;
                

                case 4:
                prestamos.eliminaFinal();
                System.out.println("Se a borrado el ultimo prestamo");
                continuar();
                break;
                

                case 5:
                System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n");
                System.out.println("Elementos de la lista: " + prestamos.getElementos() + "\n");
                System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n");
                continuar();
                break;

                case 6:
                if (!prestamos.isEmpty()){
                    prestamos.encabezadoTabla();
                    for(int i=0;i<prestamos.getElementos();i++){
                        Prestamo P2 = prestamos.getPrestamo(i);
                        prestamos.filaTabla(P2);
                        
                    }
                    prestamos.pieTabla();
                } else {
                    System.out.println("No hay Prestamos almacenados");
                }
                continuar();
                break;

                case 7:
                int indice;
                System.out.println("Ingresar el indice del prestamo: ");
                indice = mex.nextInt();
                if(indice>-1 && indice < prestamos.getElementos()){
                    Prestamo accedido;
                    accedido = prestamos.getPrestamo(indice);
                    System.out.println(accedido.ToString());
                }
                continuar();
                break;

                case 8:
                prestamos.ordenarNombre();
                System.out.println("Se ordeno la lista por nombre");
                continuar();
                break;

                case 9:
                prestamos.ordenarPrestamo();
                System.out.println("Se ordeno la lista por cantidad prestada");
                continuar();
                break;

                case 10:
                System.out.println("Nombre del acreedor: ");
                Prestamo presta = prestamos.buscarNombre(mex.nextLine());
                if (presta.getNombre().compareTo("error") !=0){
                    System.out.println(presta.ToString());
                } else {
                    System.out.println("No se encontro el nombre del acreedor.\n");
                }
                continuar();
                break;

                case 11:
                System.out.println("Nombre del acreedor: ");
                ListaDinamicaPrestamo encontrados = prestamos.buscarNombres(mex.nextLine());
                if (encontrados.getElementos() > 0 ) {
                    encontrados.encabezadoTabla();
                    for (int i=0;i<encontrados.getElementos();i++){
                        Prestamo prestamo2 = encontrados.getPrestamo(i);
                        encontrados.filaTabla(prestamo2);
                    }
                    encontrados.pieTabla();
                    System.out.println("----------------------------------------Oprima enter para continuar----------------------------------------");
                    mex.nextLine();
                } else {
                    System.out.println("No se encontraron prestamos de ese acreedor.\n");
                }
                continuar();
                break;

                case 12:
                System.out.println("Regreso a menu principal.");
                continuar();
                break;

                default:
                System.out.println("Error en la opcion elegida");
                continuar();
                break;

            }

        }while (opcion !=12);

    }

    private static void opcionDevolucion(){
        ListaDinamicaDevolucion devoluciones = new ListaDinamicaDevolucion();
        
        int opcion;
        do{
            clearScreen();
            System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");
            System.out.println("Menu de devoluciones.                         |");
            System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");
            System.out.println("[1] Agregar al inicio.                        |");
            System.out.println("[2] Agregar al final.                         |");
            System.out.println("[3] Eliminar primera devolucion.              |");
            System.out.println("[4] Eliminar ultima devolucion.               |");
            System.out.println("[5] Cantidad de devoluciones.                 |");
            System.out.println("[6] Imprimir lista de devoluciones.           |");
            System.out.println("[7] Imprimir los datos de una devolucion.     |");
            System.out.println("[8] Ordenar por nombre.                       |");
            System.out.println("[9] Ordenar por el saldo restante.            |");
            System.out.println("[10] Bucar edevolucion por nombre.            |");
            System.out.println("[11] Buscar devoluciones por nombre.          |");
            System.out.println("[12] Regredar a menu principal.               |");
            System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");
            System.out.print("Elegir opcion: ");
            opcion = mex.nextInt();
            mex.nextLine();

            switch (opcion) {
                case 1:
                    CapturaDevolucion(devoluciones, "i");
                break;

                case 2:
                    CapturaDevolucion(devoluciones, "f");
                break;

                case 3:
                    devoluciones.eliminaInicio();
                    System.out.println("Se a borrado la primera devolucion");
                    continuar();
                break;

                case 4:
                    devoluciones.eliminaFinal();
                    System.out.println("Se a borrado el ultimo devolucion");
                    continuar();
                break;

                case 5:
                    System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n");
                    System.out.println("Elementos de la lista: " + devoluciones.getElementos() + "\n");
                    System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n");
                    continuar();
                break;

                case 6:
                    if (!devoluciones.isEmpty()){
                        devoluciones.encabezadoTabla();
                        for(int i=0;i<devoluciones.getElementos();i++){
                            Devolucion D2 = devoluciones.getDevolucion(i);
                            devoluciones.filaTabla(D2);
                        }
                        devoluciones.pieTabla();
                    } else {
                        System.out.println("No hay devoluciones almacenadas");
                    }
                    continuar();
                break;

                case 7:
                    int indice;
                    System.out.println("Ingresa el indice de la devolcuion");
                    indice = mex.nextInt();
                    if (indice>-1 && indice<devoluciones.getElementos()){
                        Devolucion accendido;
                        accendido = devoluciones.getDevolucion(indice);
                        System.out.println(accendido.ToString());
                    }
                    continuar();
                break;

                case 8:
                    devoluciones.ordenarNombre();
                    System.out.println("Se ordeno por nombre.");
                    continuar();
                break;

                case 9:
                    devoluciones.ordenarSaldo();
                    System.out.println("Se ordeno por saldo");
                    continuar();
                break;

                case 10:
                    System.out.println("Nombre del acreedor: ");
                    Devolucion devol = devoluciones.buscarNombre(mex.nextLine());
                    if (devol.getNombre().compareTo("error") !=0){
                        System.out.println(devol.ToString());
                    } else {
                        System.out.println("No se encontro el nombre del acreedor.");
                    }
                    continuar();
                break;

                case 11:
                    System.out.println("Nombre del acreedor: ");
                    ListaDinamicaDevolucion encontrados = devoluciones.buscarNombres(mex.nextLine());
                    if (encontrados.getElementos() > 0){
                        encontrados.encabezadoTabla();
                        for(int i=0;i<encontrados.getElementos();i++){
                            Devolucion D2 = encontrados.getDevolucion(i);
                            encontrados.filaTabla(D2);
                        }
                        encontrados.pieTabla();
                    } else {
                        System.out.println("No se encontraron devoluciones de este acreedor.");
                    }
                    continuar();
                break;
                    

                case (12):
                    System.out.println("Regreso a menu inicial");
                    opcion =12;
                    continuar();
                break;
            
                default:
                    System.out.println("Error en la opcion elegida");
                    continuar();
                break;
            }

        }while(opcion != 12);
        

    }

        public static void clearScreen() {  
        System.out.print("\033[H\033[2J");  
        System.out.flush(); 
    }
    static public void continuar(){ 
        String seguir;
        Scanner continua = new Scanner(System.in);
        System.out.println("Preciona enter para continuar...");
        try{
            seguir = continua.nextLine();
        }   
        catch(Exception e)
        {}  
        
    }
   
}
