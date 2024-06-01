
import java.text.DecimalFormat;
import java.util.Scanner;  //Jframe 

public class Fisica {
    public static void main(String[] args) {
        Scanner mex = new Scanner(System.in);
        Operaciones O1 = new Operaciones();
        DecimalFormat df = new DecimalFormat("#.00");
        double presion, velocidad, area, caudal, tiempo, area1, area2, metros1,metros2, metro3, minutos, horas;

        int opc;

        do{
        System.out.println("Ingresa la opcion: ");
        opc = mex.nextInt();

        switch (opc) {
            case (1):{
                System.out.println("Ingresa la densidad: ");
                O1.setDensidad(mex.nextDouble());
                System.out.println("Ingresa la velocidad 1: ");
                O1.setVelocidad1(mex.nextDouble());
                System.out.println("Ingresa la velocidad 2: ");
                O1.setVelocidad2(mex.nextDouble());
                System.out.println("Ingresar la altura 1: ");
                O1.setAltura1(mex.nextDouble());
                System.out.println("Ingresar la altura 2: ");
                O1.setAltura2(mex.nextDouble());

                presion = (((0.5 * O1.getDensidad())*(O1.cuadrado(O1.getVelocidad2()) - O1.cuadrado(O1.getVelocidad1()))) + 
                ((O1.getDensidad() * O1.getGravedad()) * (O1.getAltura2() - O1.getAltura1())));

                System.out.println(presion);
            }
            break;

            case (2):{
                System.out.println("Ingresa la altura: ");
                O1.setAltura1(mex.nextDouble());
                velocidad = O1.raiz((2*O1.getGravedad()*O1.getAltura1()));
                System.out.println(df.format(velocidad));

            }
            break;

            case (3):{
                System.out.println("Ingresa el radio: ");
                O1.setRadio(mex.nextDouble());
                area = (Math.PI *(O1.cuadrado(O1.getRadio())));
                System.out.println("Ingresa la velocidad: ");
                O1.setVelocidad1(mex.nextDouble());
                caudal= area * O1.getVelocidad1();
                System.out.println(caudal);
            } break;

            case (4):{
                System.out.println("Ingresa el diametro del tanque: ");
                O1.setDiametro1(mex.nextDouble());
                System.out.println("Ingresa el diametro del agujero: ");
                O1.setDiametro2(mex.nextDouble());
                System.out.println("Ingresa la altura: ");
                O1.setAltura1(mex.nextDouble());
                tiempo = (O1.cuadrado(O1.getDiametro1())/O1.cuadrado(O1.getDiametro2()))
                * (O1.raiz((2*O1.getAltura1())/ O1.getGravedad()));
                System.out.println("Tiempo (s): " + tiempo);
                System.out.println("Tiempo (m): " + tiempo/60);
            }break;

            case (5):{
                System.out.println("Ingresa el diametro del tanque: ");
                O1.setDiametro1(mex.nextDouble());
                System.out.println("Ingresa el diametro del agujero: ");
                O1.setDiametro2(mex.nextDouble());
                System.out.println("Ingresa la altura: ");
                O1.setAltura1(mex.nextDouble());
                metros1 = O1.getDiametro1()/100;
                metros2 = O1.getDiametro2()/100;
                metro3 = O1.getAltura1()/100;
                area1 =Math.PI * O1.cuadrado(metros1);
                area2 =Math.PI * O1.cuadrado(metros2);
                tiempo= O1.raiz(((2*metro3)/O1.getGravedad())*((O1.cuadrado(area1)/O1.cuadrado(area2))-1));
                minutos= tiempo/60;
                horas = minutos/60;
                System.out.println("Tiempo (s): " + df.format(tiempo));
                System.out.println("Tiempo (m): " + df.format(minutos));
                System.out.println("Tiempo (h): " + df.format(horas));
            }break;

            case (6):{
                opc = 6;
            }break;
        
            default:
                break;
        }
        }while(opc != 6);


        

        mex.close();

    }
   
 

}
