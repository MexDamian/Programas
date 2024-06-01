class Inventario {
    public:
    string nombre;
    string codigo;
    double cantidad;
    double costo;
    

    //

    Inventario(){
        this->nombre=nombre;
        this->codigo=codigo;
        this->cantidad=cantidad;
        this->costo=costo;
        
    }

    Inventario(string nombre, string codigo){
        this->nombre=nombre;
        this->codigo=codigo;
        this->cantidad=15;
        this->costo=27;
       
    }

    Inventario(double cantidad, double costo){
        this->nombre="Mediacrema Lala";
        this->codigo="941911";
        this->cantidad=cantidad;
        this->costo=costo;
    
    }
};