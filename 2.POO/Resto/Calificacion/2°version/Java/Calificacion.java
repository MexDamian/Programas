import java.util.Scanner;
public class Calificacion {
  public static void main(String[] args) {
    Scanner mex= new Scanner(System.in);
    
     
    Calificaciones C1 = new Calificaciones();
    System.out.println("Ingresa tu nombre: ");
    C1.setNombre(mex.nextLine());
    System.out.println("Ingresa el nombre de la materia: ");
    C1.setMateria(mex.nextLine());
    System.out.println("Ingresa la calificacion del cognitivo: ");
    C1.setCognitivo(mex.nextDouble());
    System.out.println("Ingresa la calificacion del formativo: ");
    C1.setFormativo(mex.nextDouble());
    System.out.println("Ingresa la calificacion del sumativo: ");
    C1.setSumativo(mex.nextDouble());
    if(C1.Promedio() >= 7  ){
      System.out.println("\n");
      System.out.println(C1.toString());
      System.out.println("Materia aprobada");
    }else{ 
      System.out.println("\n");
      System.out.println(C1.toString());
      System.out.println("Materia no aprobada");
    }

   
    System.out.println("\n \n");
    System.out.println("---------------------------------------------------------------------------");
    System.out.println("Creador: Jesus A. Mex Damian 28/02/2023.");


  }  
}

/* 
    System.out.println("\n");

    Calificaciones C2 = new Calificaciones("Kelly Uc Panti", "contabilidad financiera");

    System.out.println(C2.nombre + " su calificacion de " + C2.materia + " es: " + 
    ((C2.cognitivo * 0.5) + (C2.formativo * 0.25) + (C2.sumativo * 0.25)));

    System.out.println("\n");

    Calificaciones C3 = new Calificaciones(8,8,8);

    System.out.println(C3.nombre + " su calificacion de " + C3.materia + " es: " + 
    ((C3.cognitivo * 0.5) + (C3.formativo * 0.25) + (C3.sumativo * 0.25)));

    System.out.println("\n");

    Calificaciones C4 = new Calificaciones("Alondra Tax Tec", "calculo integral", 10, 10, 10);

    System.out.println(C4.nombre + " su calificacion de " + C4.materia + " es: " + 
    ((C4.cognitivo * 0.5) + (C4.formativo * 0.25) + (C4.sumativo * 0.25)));
*/