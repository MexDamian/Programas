import java.util.Scanner;
public class Calificacion {
  public static void main(String[] args) {
    Scanner mex= new Scanner(System.in);

    Calificaciones C1 = new Calificaciones();
    System.out.println("\n \n");
    System.out.println("Ingresa tu nombre: ");
    C1.nombre= mex.nextLine();
    System.out.println("Ingresa el nombre de la materia: ");
    C1.materia= mex.nextLine();
    System.out.println("Ingresa la calificacion del cognitivo: ");
    C1.cognitivo= mex.nextDouble();
    System.out.println("Ingresa la calificacion del formativo: ");
    C1.formativo= mex.nextDouble();
    System.out.println("Ingresa la calificacion del sumativo: ");
    C1.sumativo= mex.nextDouble();
    System.out.println(C1.nombre + " su calificacion de " + C1.materia + " es: " + 
    ((C1.cognitivo * 0.5) + (C1.formativo * 0.25) + (C1.sumativo * 0.25)) + "\n.");

    System.out.println("\n");
    System.out.println("---------------------------------------------------------------------------");
    System.out.println("Creador: Jesus A. Mex Damian 20/02/2023.");


  }  
}
