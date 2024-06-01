import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JProgressBar;
import javax.swing.Timer;

public class Avanzando implements Runnable {
    
    public int tiempo;
    public Timer tiempot;
    public int altura;
    JProgressBar bar;
    
  
 
    public int delay(int tiempo){
        return tiempo*72;
        // 16 ... 43.7
        // 17 ... 46
        // 20 ... 54.5
    }
    
    @Override
    public void run(){
        tiempo= delay(tiempo);
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