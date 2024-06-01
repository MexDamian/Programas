class Devoluciones {
    private:
    string fecha;
    string nombre;
    string clave;
    double prestamo;
    double devolucion;
    double pagada;
    double apagar;

    public:
// Constructor vacio-------------------------------------------------------------------------
    Devoluciones(){
        this-> nombre = nombre;
        this-> clave = clave;
        this-> fecha = fecha;
        this-> prestamo = prestamo;
        this-> devolucion = devolucion;
        this-> apagar = apagar;
        this-> pagada = pagada;
    }

// Construtor con parametros--------------------------------------------------------------------

    Devoluciones(string nombre, string clave, string fecha, double prestamo, 
    double devolucion, double apagar, double pagada){
        this-> nombre = nombre;
        this-> clave = clave;
        this-> fecha = fecha;
        this-> prestamo = prestamo;
        this-> devolucion = devolucion;
        this-> apagar = apagar;
        this-> pagada = pagada;
    }

// Construtor completo---------------------------------------------------------------------------

    Devoluciones(double prestamo, double devolucion, double apagar, double pagada){
        this-> nombre = "Mirdhe del Consuelo Damian Brito";
        this-> clave = "1100-83";
        this-> fecha = "23/02/2023";
        this-> prestamo = prestamo;
        this-> devolucion = devolucion;
        this-> apagar = apagar;
        this-> pagada = pagada;
    }

    string getFecha() {
        return fecha;
    }

    void setFecha(string fecha) {
        this-> fecha = fecha;
    }

    string getNombre() {
        return nombre;
    }

    void setNombre(string nombre) {
        this-> nombre = nombre;
    }

    string getClave() {
        return clave;
    }

    void setClave(string clave) {
        this-> clave = clave;
    }

    double getPrestamo() {
        return prestamo;
    }

    void setPrestamo(double prestamo) {
        this-> prestamo = prestamo;
    }

    double getDevolucion() {
        return devolucion;
    }

    void setDevolucion(double devolucion) {
        this-> devolucion = devolucion;
    }

    double getPagada() {
        return pagada;
    }

    void setPagada(double pagada) {
        this-> pagada = pagada;
    }

    double getApagar() {
        return apagar;
    }

    void setApagar(double apagar) {
        this-> apagar = apagar;
    }
}; 