#include <string>
#include <iostream>
using namespace std;
class Casco : public Articulo{
private: //atributos casco
    string talla;
public:
    //Constructor con parametros, viene por default la marca principal de la tienda y la talla de estos cascos
    Casco(string colo, float prize, float w):Articulo("Casco Ciudad", "Wito", colo, prize, w){
        talla = "Unitalla";
    }
    //getters
    string getTalla(){
        return talla;
    }
    //setters
    void setTalla(string talla_casco){
        talla = talla_casco;
    }
    //metodos adicionales
    void imprimir_datos(){//Se llama el metodo virtual de articulo y se complementa imprimiendo los atributos propios
        Articulo::imprimir_datos();
        cout << "Talla: "<< talla <<endl;
    }
};