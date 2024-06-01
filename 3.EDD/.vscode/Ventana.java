import java.awt.FlowLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import javax.swing.JOptionPane;

public class Ventana extends JFrame{
// java swing 
// canva en java
    private JMenuBar mb;
    private JMenu menu1, m1;
    private JMenuItem mi1, mi2, mi3, mi4;



    public Ventana(){
        super("Alejandro Mex");
        setLayout(new FlowLayout ());

        mb = new JMenuBar();
        menu1 = new JMenu("Ventana");
        m1= new JMenu("Archivo");
        mi1= new JMenuItem("Manejadores");
        mi2= new JMenuItem("Archivos");
        mi3= new JMenuItem("Seguridad");
        mi4= new JMenuItem("Salida");
      
        
        
        setJMenuBar(mb);
        mb.add(m1);
        m1.add(mi4);
        mb.add(menu1);
        menu1.add(mi1);
        menu1.add(mi2);
        menu1.add(mi3);

        

        JButton btnSalidar = new JButton("Preciona");
        String nombre =JOptionPane.showInputDialog("Escribe tu nombre: ");
        add (new JLabel("Bienvenido " + nombre));
        

        add(btnSalidar);
        setSize(400, 300);
        setVisible(true);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
    }

    public static void main(String[] args){
        new Ventana();

         
        /*JOptionPane.showMessageDialog(
            null, 
            "Hola"
            
        
        );
        JOptionPane.showInputDialog(null, "Escribe");*/
    }

}