public class ListaDinamicaDevolucion {
    protected nodoDevolucion primero;
    protected nodoDevolucion ultimo;
    protected nodoDevolucion iterador;
    protected int elementos;

    public ListaDinamicaDevolucion(){
        primero = new nodoDevolucion();
        ultimo = new nodoDevolucion();
        iterador = new nodoDevolucion();
        elementos = 0;
    }

    public int getElementos(){
        return this.elementos;
    }

    public boolean isEmpty() {
        return this.elementos == 0;
    }
    
    public int agregaInicio (Devolucion nuevo){
        nodoDevolucion Np = new nodoDevolucion(nuevo);
        if(elementos > 0 ){
            Np.setEnlace(primero.getEnlace());
            primero.setEnlace(Np);
        } else {
            primero.setEnlace(Np);
            ultimo.setEnlace(Np);
        }
        return elementos++;
    }

    public void encabezadoTabla(){
        System.out.println("_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=__=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=_=");

        System.out.print(String.format("%1$-12s", "Clave"));
        System.out.print(String.format("%1$-18s", "Apellido"));
        System.out.print(String.format("%1$-18s", "Nombre"));
        System.out.print(String.format("%1$-21s", "Cantidad prestada"));
        System.out.print(String.format("%1$-20s", "Semanas restantes"));
        System.out.print(String.format("%1$-21s", "Saldo restante"));
        System.out.println("-----------------------------------------------------------------------------------------------------------");
    }

    public void pieTabla(){
        System.out.println("-----------------------------------------------------------------------------------------------------------");
    }
    // Crea un objeto de tu clase y con ese objeto creas los datos que tenga clase
    public void filaTabla(Devolucion devolucion){
        System.out.print(String.format("%1$-12s", devolucion.getClave()));
        System.out.print(String.format("%1$-18s", devolucion.getNombre()));
        System.out.print(String.format("%1$-18s", devolucion.getApellido()));
        System.out.print(String.format("%1$-21s", devolucion.getPrestada()));
        System.out.print(String.format("%1$-20s", devolucion.SemanasRestantes()));
        System.out.println(String.format("%1$-21s", devolucion.SaldoRestante()));
        
    }

    public int agregaFinal (Devolucion nuevo){
        nodoDevolucion Np = new nodoDevolucion(nuevo);
        if(elementos > 0 ){
            ultimo.getEnlace().setEnlace(Np);;
            ultimo.setEnlace(Np);
        } else {
            primero.setEnlace(Np);
            ultimo.setEnlace(Np);
        }
        return elementos++;
    }

    public Devolucion eliminaInicio(){
        nodoDevolucion extraido = new nodoDevolucion();
        if(elementos > 0){
            iterador = primero.getEnlace();
            extraido = iterador;
            iterador = iterador.getEnlace();
            extraido.setEnlace(null);
            primero.setEnlace(iterador);
            elementos--;
        }
        return extraido.getDevolucion();
    }

    public Devolucion eliminaFinal() {
        nodoDevolucion extraido = new nodoDevolucion();
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
        return extraido.getDevolucion();
    }

    public Devolucion getDevolucion(int posicion){
        Devolucion accedido = new Devolucion();
        if(posicion < elementos){
            iterador = primero.getEnlace();
            for(int i=0;i<posicion;i++){
                iterador = iterador.getEnlace();
            }
            accedido = iterador.getDevolucion();
        }
        return accedido;
    }

    public String getDatosDevolucion(int posicion){
        String contenido = "";
        if (posicion < elementos){
            iterador = primero.getEnlace();
            for(int i=0;i<posicion;i++){
                iterador = iterador.getEnlace();
            }
            contenido = iterador.getDevolucion().ToString();
        }
        return contenido;
    }

     public void ordenarNombre() { // RECURSIVO, MANIPULANDO APUNTADORES
        QuickNombre(primero, ultimo);

    }

    public void ordenarSaldo() { // RECURSIVO, MANIPULANDO APUNTADORES
        QuickSaldo(primero, ultimo);
    }


    private void QuickNombre(nodoDevolucion inicial, nodoDevolucion elfinal) {
        iterador = inicial.getEnlace();
        nodoDevolucion pivote = elfinal.getEnlace();
        if (iterador != pivote) {
            int menores = 0, mayores = 0;
            nodoDevolucion D_i = new nodoDevolucion();
            nodoDevolucion D_f = new nodoDevolucion();
            nodoDevolucion I_i = new nodoDevolucion();
            nodoDevolucion I_f = new nodoDevolucion();
            while (iterador != pivote) {
                if ((iterador.getDevolucion().getNombre()).compareTo(pivote.getDevolucion().getNombre()) > 0) {
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

    private void QuickSaldo(nodoDevolucion inicial, nodoDevolucion elfinal) {
        iterador = inicial.getEnlace();
        nodoDevolucion pivote = elfinal.getEnlace();
        if (iterador != pivote) {
            int menores = 0, mayores = 0;
            nodoDevolucion D_i = new nodoDevolucion();
            nodoDevolucion D_f = new nodoDevolucion();
            nodoDevolucion I_i = new nodoDevolucion();
            nodoDevolucion I_f = new nodoDevolucion();
            while (iterador != pivote) {
                if (iterador.getDevolucion().SaldoRestante() < pivote.getDevolucion().SaldoRestante()) {
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
                QuickSaldo(D_i, D_f);
            if (mayores > 1)
                QuickSaldo(I_i, I_f);
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

    public Devolucion buscarNombre(String buscado) {
        Devolucion devolucion = new Devolucion();
        devolucion.setNombre("error");
        iterador = primero.getEnlace();
        while (iterador != null) {
            if ((iterador.getDevolucion().getNombre()).compareTo(buscado) == 0) {
                devolucion = iterador.getDevolucion();
                return devolucion;
            }
            iterador = iterador.getEnlace();
        }
        return devolucion;
    }

    ListaDinamicaDevolucion buscarNombres(String buscado) {
    ListaDinamicaDevolucion encontrados = new ListaDinamicaDevolucion();
        iterador = primero.getEnlace();
        while (iterador != null) {
            if ((iterador.getDevolucion().getNombre()).compareTo(buscado) == 0) {
                encontrados.agregaFinal(iterador.getDevolucion());
            }
            iterador = iterador.getEnlace();
        }
        return encontrados;
    }

}

