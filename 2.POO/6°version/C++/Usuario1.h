#include<iostream>
using namespace std;

class Usuario1{
    private:

    std :: string usuario;
    std :: string contrasena;

    public:
 /*   
    Usuario1(){
        this->usuario = "";
        this->contraseña = "";
    }

    Usuario1(string contraseña, string usuario){

        this->usuario = usuario;
        this->contraseña = contraseña;
    }
*/
    void setUsuario (string usuario){
        this-> usuario = usuario;
    }


    string getUsuario(){
        return this-> usuario;

    }

    void setContrasena(string contrasena){
        this-> contrasena = contrasena;
    }

    string getContrasena(){
        return this-> contrasena;
    }
};