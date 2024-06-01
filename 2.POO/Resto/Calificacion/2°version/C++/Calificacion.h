class Calificacion {
    private:
    string nombre;
    string materia;
    double cognitivo;
    double sumativo;
    double formativo;
    public:
    double calificacionF;

    // Constructor vacio-------------------------------------------------------------------------------

    Calificacion(){
        this-> nombre = nombre;
        this-> materia = materia;
        this-> cognitivo = cognitivo;
        this-> formativo = formativo;
        this-> sumativo= sumativo;
    }
 
    // Constructor con parametros-------------------------------------------------------------------------

    Calificacion(string nombre, string materia){
        this-> nombre = nombre;
        this-> materia = materia;
        this-> cognitivo = 10;
        this-> formativo = 10;
        this-> sumativo= 9;

    }

    Calificacion(double cognitivo, double sumativo, double formativo){
        this-> nombre = "Jesus A. Mex Damian";
        this-> materia = "programacion orientada a objetos";
        this-> cognitivo = cognitivo;
        this-> formativo = formativo;
        this-> sumativo= sumativo;
    }

    //Constructor completos---------------------------------------------------------------------------

    Calificacion(string nombre, string materia, double cognitivo, double sumativo, double formativo){
        this-> nombre = nombre;
        this-> materia = materia;
        this-> cognitivo = cognitivo;
        this-> formativo = formativo;
        this-> sumativo= sumativo;
    }
    
    string getNombre(){
        return nombre;
    }

    void setNombre(string nombre) {
        this-> nombre = nombre;
    }

    string getMateria() {
        return materia;
    }

    void setMateria(string materia) {
        this-> materia = materia;
    }

    double getCognitivo() {
        return cognitivo;
    }

    void setCognitivo(double cognitivo) {
        this-> cognitivo = cognitivo;
    }

    double getSumativo() {
        return sumativo;
    }

    void setSumativo(double sumativo) {
        this-> sumativo = sumativo;
    }

    double getFormativo() {
        return formativo;
    }

    void setFormativo(double formativo) {
        this-> formativo = formativo;
    }

    double getCalificacion() {
        return calificacionF;
    }

    void setCalificacionF(double calificacionF) {
        this-> calificacionF = calificacionF;
    }

  // Metodos------------------------------------------------------------------------------------------

    string tostring(){
        return "Nombre: " + this-> nombre + "\n" + "Materia: " + this-> materia;
    }

    double promedio(){
        return ((this-> cognitivo * 0.5) + (this-> formativo * 0.25) + (this-> sumativo * 0.25));
    }
 
    string estado(){
        if(promedio() >= 7){
            cout << "\n";
            cout << tostring() << "\n";
            cout << "Calificacion final: " << promedio() << "\n";
            cout << "Materia aprobada";
        } else {
            cout << "\n";
            cout << tostring() << "\n";
            cout << "Calificacion final: " << promedio() << "\n";
            cout << "Materia no aprobada";
        }
    }

    // Siempre que hagas un metodo nombralo de tal manera que no sea decessario abrir la clase
};