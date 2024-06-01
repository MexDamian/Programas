
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JProgressBar;

/**
 *
 * @author jesus
 */
class Avanzando implements Runnable {
    public int tiempo;
    public int altura;
    JProgressBar bar;
    
    
    static int num_bar = 1;
    @Override
    public void run() 
    {
        for (int i = altura; i >= 0; i--)
        {     
            try 
            {
                Thread.sleep(tiempo);
            } 
            catch (InterruptedException ex) 
            {
                Logger.getLogger(Avanzando.class.getName()).log(Level.SEVERE, null, ex);
            }
            
            this.getBar().setValue(i);
                                  
        }        
        num_bar--;
    }

    public void setBar(JProgressBar bar)
    {
        this.bar = bar;
    }
    
    public void setAltura(int altura){
        this.altura = altura;
    }
    
    public JProgressBar getBar()
    {
        return bar;
    }
    
    public int getAltura(){
        return altura;
    }
    
    public void setTiempo(int tiempo){
        this.tiempo = tiempo;
    }
    
    public int getTiempo(){
        return tiempo;
    }
}
