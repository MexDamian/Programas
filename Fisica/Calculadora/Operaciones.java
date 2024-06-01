

public class Operaciones {
    private double presion1;
    private double presion2;
    private double densidad;
    private double velocidad1;
    private double velocidad2;
    private double gravedad = 9.8;
    private double altura1;
    private double altura2;
    private double num1;
    private double num2;
    private double num3;
    private double radio;
    private double diametro1;
    private double diametro2;

    public double getPresion1() {
        return presion1;
    }
    public void setPresion1(double presion1) {
        this.presion1 = presion1;
    }
    public double getPresion2() {
        return presion2;
    }
    public void setPresion2(double presion2) {
        this.presion2 = presion2;
    }
    public double getDensidad() {
        return densidad;
    }
    public void setDensidad(double densidad) {
        this.densidad = densidad;
    }
    public double getVelocidad1() {
        return velocidad1;
    }
    public void setVelocidad1(double velocidad1) {
        this.velocidad1 = velocidad1;
    }
    public double getVelocidad2() {
        return velocidad2;
    }
    public void setVelocidad2(double velocidad2) {
        this.velocidad2 = velocidad2;
    }
    public double getGravedad() {
        return gravedad;
    }
    public void setGravedad(double gravedad) {
        this.gravedad = 9.8;
    }
    public double getAltura1() {
        return altura1;
    }
    public void setAltura1(double altura1) {
        this.altura1 = altura1;
    }
    public double getAltura2() {
        return altura2;
    }
    public void setAltura2(double altura2) {
        this.altura2 = altura2;
    }

    public double getNum1() {
        return num1;
    }
    public void setNum1(double num1) {
        this.num1 = num1;
    }
    public double getNum2() {
        return num2;
    }
    public void setNum2(double num2) {
        this.num2 = num2;
    }
    public double getNum3() {
        return num3;
    }
    public void setNum3(double num3) {
        this.num3 = num3;
    }

    public double getRadio() {
        return radio;
    }
    public void setRadio(double radio) {
        this.radio = radio;
    }

    
    
    public double getDiametro1() {
        return diametro1;
    }
    public void setDiametro1(double diametro1) {
        this.diametro1 = diametro1;
    }
    public double getDiametro2() {
        return diametro2;
    }
    public void setDiametro2(double diametro2) {
        this.diametro2 = diametro2;
    }
    public double suma(double num1, double num2){
        return num1 + num2;
    }

    public double resta(double num1, double num2){
        return num1 - num2;
    }

    public double dividir(double num1, double num2){
        return num1/num2;
    }

    public double multiplicar(double num1, double num2){
        return num1 * num2;
    }

    public double cuadrado(double num1){
        return Math.pow(num1, 2);
    }

    public double raiz(double num3){
        return java.lang.Math.sqrt(num3);
    }

   

    
}
