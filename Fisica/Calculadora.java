import java.util.Scanner;
public class Calculadora extends javax.swing.JFrame {
    public static Scanner mex = new Scanner(System.in);
    public static Operaciones O1 = new Operaciones();
    public static Avanzando avanzando = new Avanzando();

    public Calculadora() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">                          
    private void initComponents() {

        Titulo = new javax.swing.JLabel();
        TCilindro = new javax.swing.JLabel();
        TOrificio = new javax.swing.JLabel();
        Medida = new javax.swing.JLabel();
        TLiquido = new javax.swing.JLabel();
        Rcilindro = new javax.swing.JTextField();
        Rorificio = new javax.swing.JTextField();
        Rliquido = new javax.swing.JTextField();
        Animacion = new javax.swing.JCheckBox();
        Calcular = new javax.swing.JButton();
        TResultado = new javax.swing.JLabel();
        Resultado = new javax.swing.JTextField();
        Segundos = new javax.swing.JLabel();
        jProgressBar1 = new javax.swing.JProgressBar();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        Titulo.setFont(new java.awt.Font("Arial", 1, 24)); // NOI18N
        Titulo.setText("Calculadora");

        TCilindro.setFont(new java.awt.Font("Arial", 1, 14)); // NOI18N
        TCilindro.setText("Diametro del cilindro:");

        TOrificio.setFont(new java.awt.Font("Arial", 1, 14)); // NOI18N
        TOrificio.setText("Diametro del orificio:");

        Medida.setFont(new java.awt.Font("Arial", 1, 14)); // NOI18N
        Medida.setText("Unidad: cm");

        TLiquido.setFont(new java.awt.Font("Arial", 1, 14)); // NOI18N
        TLiquido.setText("Altura de liquido:");

        Rcilindro.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                RcilindroActionPerformed(evt);
            }
        });

        Rorificio.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                RorificioActionPerformed(evt);
            }
        });

        Rliquido.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                RliquidoActionPerformed(evt);
            }
        });

        Animacion.setFont(new java.awt.Font("Arial", 1, 14)); // NOI18N
        Animacion.setText("Ver animacion");
        Animacion.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                AnimacionActionPerformed(evt);
            }
        });

        Calcular.setFont(new java.awt.Font("Arial", 1, 24)); // NOI18N
        Calcular.setText("Calcular");
        Calcular.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                CalcularActionPerformed(evt);
            }
        });

        TResultado.setFont(new java.awt.Font("Arial", 1, 18)); // NOI18N
        TResultado.setText("Resultado");

        Resultado.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                ResultadoActionPerformed(evt);
            }
        });

        Segundos.setFont(new java.awt.Font("Arial", 1, 18)); // NOI18N
        Segundos.setText("Segundos");

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(118, 118, 118)
                .addComponent(Calcular)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
            .addGroup(layout.createSequentialGroup()
                .addGap(17, 17, 17)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(Medida)
                            .addGroup(layout.createSequentialGroup()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(TCilindro)
                                    .addComponent(TLiquido)
                                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                        .addComponent(Animacion)
                                        .addComponent(TOrificio)))
                                .addGap(18, 18, 18)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addComponent(Rliquido, javax.swing.GroupLayout.PREFERRED_SIZE, 146, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(Rorificio, javax.swing.GroupLayout.PREFERRED_SIZE, 146, javax.swing.GroupLayout.PREFERRED_SIZE)
                                    .addComponent(Rcilindro, javax.swing.GroupLayout.PREFERRED_SIZE, 146, javax.swing.GroupLayout.PREFERRED_SIZE))))
                        .addGap(72, 72, 72)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(Segundos, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(TResultado, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(Resultado)))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(Titulo)
                        .addGap(48, 48, 48)))
                .addGap(25, 25, 25)
                .addComponent(jProgressBar1, javax.swing.GroupLayout.DEFAULT_SIZE, 104, Short.MAX_VALUE)
                .addGap(20, 20, 20))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(Titulo)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(Medida)
                    .addComponent(TResultado))
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addGap(18, 18, 18)
                        .addComponent(jProgressBar1, javax.swing.GroupLayout.DEFAULT_SIZE, 156, Short.MAX_VALUE)
                        .addGap(142, 142, 142))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addGap(15, 15, 15)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                                    .addComponent(TCilindro)
                                    .addComponent(Rcilindro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addGap(26, 26, 26)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                                    .addComponent(TOrificio)
                                    .addComponent(Rorificio, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addGap(34, 34, 34))
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(Resultado, javax.swing.GroupLayout.PREFERRED_SIZE, 95, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)))
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(Segundos)
                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                                .addComponent(TLiquido)
                                .addComponent(Rliquido, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(27, 27, 27)
                        .addComponent(Animacion)
                        .addGap(34, 34, 34)
                        .addComponent(Calcular)
                        .addGap(0, 0, Short.MAX_VALUE))))
        );

        pack();
    }// </editor-fold>                        

    private void AnimacionActionPerformed(java.awt.event.ActionEvent evt) {                                          
         
        Avanzando.setBar(jProgressBar1);
        
        Thread hilo = new Thread(Avanzando);
        
        hilo.start();
    }                                         

    private void CalcularActionPerformed(java.awt.event.ActionEvent evt) {                                         
       double tiempo, area1, area2, metros1,metros2, metros3;
       double num1 = Double.parseDouble(Rcilindro  .getText());
       O1.setDiametro1(num1);
       double num2 = Double.parseDouble(Rorificio  .getText());
       O1.setDiametro2(num2);
       int num3 = Int.parseInt(Rliquido  .getText());
       O1.setAltura1(num3);
       Avanzando.setAltura(num3);
       metros1 = O1.getDiametro1()/100;
       metros2 = O1.getDiametro2()/100;
       metros3 = O1.getAltura2()/100;
       area1 =Math.PI * O1.cuadrado(metros1);
       area2 =Math.PI * O1.cuadrado(metros2);
       
       tiempo = O1.raiz(((2*metros3)/O1.getGravedad())*((O1.cuadrado(area1)/O1.cuadrado(area2))-1));
       Resultado.setText(String.valueOf(tiempo));
        /*
        
        */
    }                                        

    private void ResultadoActionPerformed(java.awt.event.ActionEvent evt) {                                          
        // TODO add your handling code here:
    }                                         

    private void RcilindroActionPerformed(java.awt.event.ActionEvent evt) {                                          
        // TODO add your handling code here:
    }                                         

    private void RorificioActionPerformed(java.awt.event.ActionEvent evt) {                                          
        // TODO add your handling code here:
    }                                         

    private void RliquidoActionPerformed(java.awt.event.ActionEvent evt) {                                         
        // TODO add your handling code here:
    }                                        

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(Calculadora.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new Calculadora().setVisible(true);
            }
        });
    }
    
    

    // Variables declaration - do not modify                     
    private javax.swing.JCheckBox Animacion;
    private javax.swing.JButton Calcular;
    private javax.swing.JLabel Medida;
    private javax.swing.JTextField Rcilindro;
    private javax.swing.JTextField Resultado;
    private javax.swing.JTextField Rliquido;
    private javax.swing.JTextField Rorificio;
    private javax.swing.JLabel Segundos;
    private javax.swing.JLabel TCilindro;
    private javax.swing.JLabel TLiquido;
    private javax.swing.JLabel TOrificio;
    private javax.swing.JLabel TResultado;
    private javax.swing.JLabel Titulo;
    private javax.swing.JProgressBar jProgressBar1;
    // End of variables declaration                   
}
