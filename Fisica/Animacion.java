
import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.util.Timer;
import java.util.TimerTask;
import javax.swing.JFrame;
import javax.swing.JPanel;
//import javax.swing.JCheckBox;
import javax.swing.WindowConstants;

public class Animacion extends JPanel{
    Operaciones O1 = new Operaciones();
    //JCheckBox verAnimacion;
    public static int a=70 , b, x1=90,y1=40,a1=45;

    public void actualizar(){
        repaint();
    }

    //public Animacion(){
      //  verAnimacion = new JCheckBox("Mostrar Animación");
        //add(verAnimacion);
    //}

    public void animacion(){
        Timer timer = new Timer();
        TimerTask tarea = new TimerTask() {
        
            @Override
            public void run(){               
                System.out.println(b);
                b = b < 0 ? b : a--;
                actualizar(); 
            
               // if(verAnimacion.isSelected()){
                //System.out.println("Mostrar animacion");
               //}
                                
            }
        };
        timer.schedule(tarea,100);
           
    }
    
    


    public Dimension getPreferredSize(){
        return new Dimension(500, 500);
    }

    public static void main(String[] args) {
        JFrame v = new JFrame("Toriselli");
        Animacion panel = new Animacion();

        v.getContentPane().add(panel);
        v.pack();
        v.setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        v.setVisible(true);
        
    }
        
    public void paint(Graphics g){
        super.paint(g);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setColor(Color.black);
        //g2d.setStroke(new BasicStroke(10.0f));
        g2d.draw(new Rectangle.Double(80, 30, 65, 100));        
        g2d.setColor(Color.BLUE);
        g2d.fillRect(90, 120-b, 45, b);
        g2d.draw(new Rectangle.Double(90, 40, 45, 80));
        animacion();
        
    }


}