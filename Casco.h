#include <string>
#include <iostream>
using namespace std;
class Casco : public Articulo{
private: //atributos casco
    string talla;
public:
    //Constructor con parametros, viene por default la marca principal de la tienda y la talla de estos cascos
    Casco(string colo, float prize, float w):Articulo("Ciudad", "Wito", colo, prize, w){
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
    void imprimir_datos(){
        cout<<endl;
        cout<<"Casco" << endl;
        cout<< "Tipo: "<< tipo <<endl;
        cout<< "Marca: "<< marca <<endl;
        cout<< "Color: "<< color <<endl;
        cout << "Talla: "<< talla <<endl;
        cout << "Precio: "<< precio <<" pesos"<<endl;
        cout << "Peso: "<< peso <<" gramos"<<endl;
    }
};