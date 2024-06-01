import java.util.Scanner;

public class SistemaPrestamos{
    private static void capturaDatos(ListaDinamica coleccion, String ubicacion){
        Scanner mex = new Scanner(System.in);
        Prestamo P1 = new Prestamo();

        System.out.println("\n \n");
        System.out.println(" Datos del acreedor");
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

        switch(ubicacion){
            case "i":
                coleccion.agregaInicio(P1);
            break;

            case "f":
                coleccion.agregaFinal(P1);
            break;

            default:
                System.out.println("Error");
            break;
        }
    }

    public static void main(String[] args) {
        Scanner mex = new Scanner(System.in);
        ListaDinamica coleccion = new ListaDinamica();
        int opcion;
        do {
            // Menu
            System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");
            System.out.println("Menu de prestamos.");
            System.out.println("(1) Agregar al inicio.");
            System.out.println("(2) Agregar al final.");
            System.out.println("(3) Eliminar primer prestamo.");
            System.out.println("(4) Eliminar ultimo prestamo.");
            System.out.println("(5) Cantidad de prestamos.");
            System.out.println("(6) Imprimir lista de prestamos.");
            System.out.println("(7) Imprimir los datos de un prestamos.");
            System.out.println("(8) Ordenar por nombre");
            System.out.println("(9) Ordenar por cantidad de prestamo");
            System.out.println("(10) Bucar prestamo por nombre.");
            System.out.println("(11) Buscar prestamos por nombre.");
            System.out.println("(12) Salir del programa.");
            System.out.print("Elegir opcion: ");
            opcion = mex.nextInt();
            mex.nextLine();
            System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");


            switch(opcion){
                case 1:
                capturaDatos(coleccion, "i");
                break;

                case 2:
                capturaDatos(coleccion, "f");
                break;
                

                case 3:
                coleccion.eliminaInicio();
                System.out.println("Se a borrado el primer prestamo");
                break;
                

                case 4:
                coleccion.eliminaFinal();
                System.out.println("Se a borrado el ultimo prestamo");
                break;
                

                case 5:
                System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n");
                System.out.println("Elementos de la lista: " + coleccion.getElementos() + "\n");
                System.out.println("=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=\n");
                break;

                case 6:
                if (!coleccion.isEmpty()){
                    for(int i=0;i<coleccion.getElementos();i++){
                        System.out.println(coleccion.getDatosPrestamos(i));
                    }
                } else {
                    System.out.println("No hay Prestamos almacenados");
                }
                break;

                case 7:
                int indice;
                System.out.println("Ingresar el indice del prestamo: ");
                indice = mex.nextInt();
                if(indice>-1 && indice < coleccion.getElementos()){
                    Prestamo accedido;
                    accedido = coleccion.getPrestamo(indice);
                    System.out.println(accedido.ToString());
                }
                break;

                case 8:
                coleccion.ordenarNombre();
                System.out.println("Se ordeno la lista por nombre");
                break;

                case 9:
                coleccion.ordenarPrestamo();
                System.out.println("Se ordeno la lista por cantidad prestada");
                break;

                case 10:
                System.out.println("Nombre del acreedor: ");
                Prestamo presta = coleccion.buscarNombre(mex.nextLine());
                if (presta.getNombre().compareTo("error") !=0){
                    System.out.println(presta.ToString());
                } else {
                    System.out.println("No se encontro el nombre del acreedor.\n");
                }
                break;

                case 11:
                System.out.println("Nombre del acreedor: ");
                ListaDinamica encontrados = coleccion.buscarNombres(mex.nextLine());
                if (encontrados.getElementos() > 0 ) {

                    for (int i=0;i<encontrados.getElementos();i++){
                        Prestamo prestamo2 = encontrados.getPrestamo(i);

                    }
                    System.out.println("----------------------------------------Oprima enter para continuar----------------------------------------");
                    mex.nextLine();
                } else {
                    System.out.println("No se encontraron prestamos de ese acreedor.\n");
                }
                break;

                case 12:
                System.out.println("Finalizar programa.");
                break;

                default:
                System.out.println("Error en la opcion elegida");

            }

        }while (opcion !=12);

        mex.close();
    }
}