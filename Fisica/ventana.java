import java.text.DecimalFormat;
import javax.swing.JFrame;



public class ventana extends JFrame {
    Operaciones O1 = new Operaciones();
    DecimalFormat df = new DecimalFormat("#.00");
   


    public ventana() {
        initComponents();
        
        
        
    }


    @SuppressWarnings("Calculadora")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">                          
    private void initComponents() {

      
        jLabel1 = new javax.swing.JLabel();
        Cilindro = new javax.swing.JLabel();
        orificio = new javax.swing.JLabel();
        liquido = new javax.swing.JLabel();
        rcilindro = new javax.swing.JTextField();
        rdiametro = new javax.swing.JTextField();
        altura = new javax.swing.JTextField();
        resultado = new javax.swing.JLabel();
        contestado = new javax.swing.JLabel();
        resolver = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jLabel1.setFont(new java.awt.Font("Segoe UI", 1, 24)); // NOI18N
        jLabel1.setText("Teorema de torricelli");

        Cilindro.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        Cilindro.setText("Diametro del cilindro:");

        orificio.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        orificio.setText("Diametro del orificio:");

        liquido.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        liquido.setText("Altura del liquido:");

        rcilindro.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                rcilindroActionPerformed(evt);
            }
        });

        rdiametro.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                rdiametroActionPerformed(evt);
            }
        });

        altura.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                alturaActionPerformed(evt);
            }
        });

        resultado.setFont(new java.awt.Font("Segoe UI", 1, 14)); // NOI18N
        resultado.setText("Resultado: ");

        resolver.setText("Resolver");
        resolver.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                resolverActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(23, 23, 23)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(resultado)
                        .addGap(147, 147, 147)
                        .addComponent(resolver))
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                        .addGroup(javax.swing.GroupLayout.Alignment.LEADING, layout.createSequentialGroup()
                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                .addComponent(liquido)
                                .addComponent(orificio))
                            .addGap(21, 21, 21)
                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                .addComponent(rdiametro, javax.swing.GroupLayout.PREFERRED_SIZE, 130, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addComponent(altura, javax.swing.GroupLayout.PREFERRED_SIZE, 130, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGroup(javax.swing.GroupLayout.Alignment.LEADING, layout.createSequentialGroup()
                            .addComponent(Cilindro)
                            .addGap(18, 18, 18)
                            .addComponent(rcilindro, javax.swing.GroupLayout.PREFERRED_SIZE, 130, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 266, Short.MAX_VALUE)
                .addComponent(contestado, javax.swing.GroupLayout.PREFERRED_SIZE, 115, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap())
            .addGroup(layout.createSequentialGroup()
                .addGap(88, 88, 88)
                .addComponent(jLabel1)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(16, 16, 16)
                .addComponent(jLabel1)
                .addGap(32, 32, 32)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(Cilindro)
                    .addComponent(rcilindro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(30, 30, 30)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(orificio)
                    .addComponent(rdiametro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(29, 29, 29)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(liquido)
                    .addComponent(altura, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(resultado)
                    .addComponent(resolver))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(contestado, javax.swing.GroupLayout.PREFERRED_SIZE, 14, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(20, 20, 20))
        );

        pack();
    }// </editor-fold>                        

    private void rcilindroActionPerformed(java.awt.event.ActionEvent evt) {                                          
       
    }                                         

    private void rdiametroActionPerformed(java.awt.event.ActionEvent evt) {                                          

    }                                         

    private void alturaActionPerformed(java.awt.event.ActionEvent evt) {                                       

    }                                      

    private void resolverActionPerformed(java.awt.event.ActionEvent evt) {                                         
       double tiempo, area1, area2, metros1,metros2, metros3;
       double num1 = Double.parseDouble(rcilindro  .getText());
       O1.setDiametro1(num1);
       double num2 = Double.parseDouble(rdiametro  .getText());
       O1.setDiametro2(num2);
       double num3 = Double.parseDouble(altura  .getText());
       O1.setAltura2(num3);
        metros1 = O1.getDiametro1()/100;
        metros2 = O1.getDiametro2()/100;
        metros3 = O1.getAltura2()/100;
        area1 =Math.PI * O1.cuadrado(metros1);
        area2 =Math.PI * O1.cuadrado(metros2);
       
       tiempo = O1.raiz(((2*metros3)/O1.getGravedad())*((O1.cuadrado(area1)/O1.cuadrado(area2))-1));
       resultado.setText("Resultado: " + String.valueOf(tiempo));
       
    }                                         


    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new ventana().setVisible(true);
            }
        });
       
    }

    // Variables declaration - do not modify                     
    private javax.swing.JLabel Cilindro;
    private javax.swing.JTextField altura;
    private javax.swing.JLabel contestado;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel liquido;
    private javax.swing.JLabel orificio;
    private javax.swing.JTextField rcilindro;
    private javax.swing.JTextField rdiametro;
    private javax.swing.JButton resolver;
    private javax.swing.JLabel resultado;

    
    // End of variables declaration                   
}
