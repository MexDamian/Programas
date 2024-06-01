#include<iostream>
using namespace std;

class Seguridad{
    private:
    std :: string usuario;
    string codigo;

    public: 

// Setters y Getters------------------------------------------------------------------------------------------------------

    // Usuario------------------------------------------------------------------------------------------------------------
    void setUsuario (string usuario){
        if(usuario == " "){
            this-> usuario = usuario;
        } else throw usuario;
    }

    string getUsuario(){
        return this-> usuario;

    }
    //--------------------------------------------------------------------------------------------------------------------
 
    // Codigo-------------------------------------------------------------------------------------------------------------
    void setCodigo(string codigo){
        if(codigo == " "){
            this-> codigo = codigo;
        } else throw -1;
    }

    string getCodigo(){
        return this-> codigo;
    }
    //--------------------------------------------------------------------------------------------------------------------
};