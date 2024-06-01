public class ListaDinamica {
    protected nodoPrestamo primero;
    protected nodoPrestamo ultimo;
    protected nodoPrestamo iterador;
    protected int elementos;

    public ListaDinamica(){
        primero = new nodoPrestamo();
        ultimo = new nodoPrestamo();
        iterador = new nodoPrestamo();
        elementos = 0;
    }

    public int getElementos(){
        return this.elementos;
    }

    public boolean isEmpty() {
        return this.elementos == 0;
    }

    public int agregaInicio (Prestamo nuevo){
        nodoPrestamo Np = new nodoPrestamo(nuevo);
        if(elementos > 0 ){
            Np.setEnlace(primero.getEnlace());
            primero.setEnlace(Np);
        } else {
            primero.setEnlace(Np);
            ultimo.setEnlace(Np);
        }
        return elementos++;
    }

    public int agregaFinal (Prestamo nuevo){
        nodoPrestamo Np = new nodoPrestamo(nuevo);
        if(elementos > 0 ){
            ultimo.getEnlace().setEnlace(Np);;
            ultimo.setEnlace(Np);
        } else {
            primero.setEnlace(Np);
            ultimo.setEnlace(Np);
        }
        return elementos++;
    }

    public Prestamo eliminaInicio(){
        nodoPrestamo extraido = new nodoPrestamo();
        if(elementos > 0){
            iterador = primero.getEnlace();
            extraido = iterador;
            iterador = iterador.getEnlace();
            extraido.setEnlace(null);
            primero.setEnlace(iterador);
            elementos--;
        }
        return extraido.getPrestamo();
    }

    public Prestamo eliminaFinal() {
        nodoPrestamo extraido = new nodoPrestamo();
        if(elementos > 0){
            iterador = primero.getEnlace();
            for(int i=0;i<elementos-2;i++){
                iterador = iterador.getEnlace();
            }
            extraido = iterador.getEnlace();
            iterador.setEnlace(null);
            ultimo.setEnlace(iterador);
            elementos--;
        }
        return extraido.getPrestamo();
    }

    public Prestamo getPrestamo(int posicion){
        Prestamo accedido = new Prestamo();
        if(posicion < elementos){
            iterador = primero.getEnlace();
            for(int i=0;i<posicion;i++){
                iterador = iterador.getEnlace();
            }
            accedido = iterador.getPrestamo();
        }
        return accedido;
    }

    public String getDatosPrestamos(int posicion){
        String contenido = "";
        if (posicion < elementos){
            iterador = primero.getEnlace();
            for(int i=0;i<posicion;i++){
                iterador = iterador.getEnlace();
            }
            contenido = iterador.getPrestamo().ToString();
        }
        return contenido;
    }

}