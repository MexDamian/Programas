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

     public void ordenarNombre() { // RECURSIVO, MANIPULANDO APUNTADORES
        QuickNombre(primero, ultimo);

    }

    public void ordenarPrestamo() { // RECURSIVO, MANIPULANDO APUNTADORES
        QuickPrestamo(primero, ultimo);
    }


    private void QuickNombre(nodoPrestamo inicial, nodoPrestamo elfinal) {
        iterador = inicial.getEnlace();
        nodoPrestamo pivote = elfinal.getEnlace();
        if (iterador != pivote) {
            int menores = 0, mayores = 0;
            nodoPrestamo D_i = new nodoPrestamo();
            nodoPrestamo D_f = new nodoPrestamo();
            nodoPrestamo I_i = new nodoPrestamo();
            nodoPrestamo I_f = new nodoPrestamo();
            while (iterador != pivote) {
                if ((iterador.getPrestamo().getNombre()).compareTo(pivote.getPrestamo().getNombre()) > 0) {
                    if (mayores > 0) {
                        I_f.getEnlace().setEnlace(iterador);
                    } else {
                        I_i.setEnlace(iterador);
                    }
                    I_f.setEnlace(iterador);
                    mayores++;
                } else {
                    if (menores > 0) {
                        D_f.getEnlace().setEnlace(iterador);
                    } else {
                        D_i.setEnlace(iterador);
                    }
                    D_f.setEnlace(iterador);
                    menores++;
                }
                iterador = iterador.getEnlace();
            }
            if (menores > 1)
                QuickNombre(D_i, D_f);
            if (mayores > 1)
                QuickNombre(I_i, I_f);
            if (menores > 0 && mayores > 0) {
                D_f.getEnlace().setEnlace(pivote);
                inicial.setEnlace(D_i.getEnlace());
                pivote.setEnlace(I_i.getEnlace());
                elfinal.setEnlace(I_f.getEnlace());
            } else if (menores > 0 && mayores == 0) {
                D_f.getEnlace().setEnlace(pivote);
                inicial.setEnlace(D_i.getEnlace());
                elfinal.setEnlace(pivote);
            } else if (menores == 0 && mayores > 0) {
                inicial.setEnlace(pivote);
                pivote.setEnlace(I_i.getEnlace());
                elfinal.setEnlace(I_f.getEnlace());
            }
        }
    }

    private void QuickPrestamo(nodoPrestamo inicial, nodoPrestamo elfinal) {
        iterador = inicial.getEnlace();
        nodoPrestamo pivote = elfinal.getEnlace();
        if (iterador != pivote) {
            int menores = 0, mayores = 0;
            nodoPrestamo D_i = new nodoPrestamo();
            nodoPrestamo D_f = new nodoPrestamo();
            nodoPrestamo I_i = new nodoPrestamo();
            nodoPrestamo I_f = new nodoPrestamo();
            while (iterador != pivote) {
                if (iterador.getPrestamo().PrestamoTotal() < pivote.getPrestamo().PrestamoTotal()) {
                    if (mayores++ > 0) {
                        I_f.getEnlace().setEnlace(iterador);
                    } else {
                        I_i.setEnlace(iterador);
                    }
                    I_f.setEnlace(iterador);
                } else {
                    if (menores++ > 0) {
                        D_f.getEnlace().setEnlace(iterador);
                    } else {
                        D_i.setEnlace(iterador);
                    }
                    D_f.setEnlace(iterador);
                }
                iterador = iterador.getEnlace();
            }
            if (menores > 1)
                QuickPrestamo(D_i, D_f);
            if (mayores > 1)
                QuickPrestamo(I_i, I_f);
            if (menores > 0 && mayores > 0) {
                D_f.getEnlace().setEnlace(pivote);
                inicial.setEnlace(D_i.getEnlace());
                pivote.setEnlace(I_i.getEnlace());
                elfinal.setEnlace(I_f.getEnlace());
            } else if (menores > 0 && mayores == 0) {
                D_f.getEnlace().setEnlace(pivote);
                inicial.setEnlace(D_i.getEnlace());
                elfinal.setEnlace(pivote);
            } else if (menores == 0 && mayores > 0) {
                inicial.setEnlace(pivote);
                pivote.setEnlace(I_i.getEnlace());
                elfinal.setEnlace(I_f.getEnlace());
            }
        }
    }

    public Prestamo buscarNombre(String buscado) {
        Prestamo prestamo = new Prestamo();
        prestamo.setNombre("error");
        iterador = primero.getEnlace();
        while (iterador != null) {
            if ((iterador.getPrestamo().getNombre()).compareTo(buscado) == 0) {
                prestamo = iterador.getPrestamo();
                return prestamo;
            }
            iterador = iterador.getEnlace();
        }
        return prestamo;
    }

    ListaDinamica buscarNombres(String buscado) {
    ListaDinamica encontrados = new ListaDinamica();
        iterador = primero.getEnlace();
        while (iterador != null) {
            if ((iterador.getPrestamo().getNombre()).compareTo(buscado) == 0) {
                encontrados.agregaFinal(iterador.getPrestamo());
            }
            iterador = iterador.getEnlace();
        }
        return encontrados;
    }

}