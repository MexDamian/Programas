class Devolucion {
    private:
    string fecha;
    string nombre;
    string clave;
    double cantidadprestada;
    double cantidaddevuelta;
    double semanapagada;
    double semanasapagar;

    public:
// Constructor vacio-------------------------------------------------------------------------
    Devolucion(){
        this-> nombre = nombre;
        this-> clave = clave;
        this-> fecha = fecha;
        this-> cantidadprestada = cantidadprestada;
        this-> cantidaddevuelta = cantidaddevuelta;
        this-> semanasapagar = semanasapagar;
        this-> semanapagada = semanapagada;
    }

// Construtor con parametros--------------------------------------------------------------------

    Devolucion(string nombre, string clave, string fecha){
        this-> nombre = nombre;
        this-> clave = clave;
        this-> fecha = fecha;
        this-> cantidadprestada = 1400;
        this-> cantidaddevuelta = 100;
        this-> semanasapagar = 14;
        this-> semanapagada = 3;
    }

// Construtor completo---------------------------------------------------------------------------

    Devolucion(double cantidadprestada, double cantidaddevuelta, double semanasapagar, double semanapagada){
        this-> nombre = "Mirdhe del Consuelo Damian Brito";
        this-> clave = "1100-83";
        this-> fecha = "23/02/2023";
        this-> cantidadprestada = cantidadprestada;
        this-> cantidaddevuelta = cantidaddevuelta;
        this-> semanasapagar = semanasapagar;
        this-> semanapagada = semanapagada;
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

   

    double getCantidadprestada() {
        return cantidadprestada;
    }

    void setCantidadprestada(double cantidadprestada) {
        this-> cantidadprestada = cantidadprestada;
    }

    double getCantidaddevuelta() {
        return cantidaddevuelta;
    }

    void setCantidaddevuelta(double cantidaddevuelta) {
        this-> cantidaddevuelta = cantidaddevuelta;
    }

    double getSemanapagada() {
        return semanapagada;
    }

    void setSemanapagada(double semanapagada) {
        this-> semanapagada = semanapagada;
    }

    double getSemanasapagar() {
        return semanasapagar;
    }

    void setSemanasapagar(double semanasapagar) {
        this-> semanasapagar = semanasapagar;
    }

    double SemanasRestantes(){
        return semanasapagar - semanapagada;
    }

    double SaldoRestante(){
        return  cantidadprestada-(cantidaddevuelta * semanapagada);
    }

    string tostring(){
        cout << "Nombre: " << nombre << "\n";
        cout << "Fecha: " << fecha << "\n";
        cout << "Clave: " << clave << "\n";
        cout << "Abono: $" << cantidaddevuelta << "\n";
        cout << "Semanas restantes: " << SemanasRestantes() << "\n";
        cout << "Saldo restante: $" << SaldoRestante() << "\n";
        cout << "\n";
    }
}; 