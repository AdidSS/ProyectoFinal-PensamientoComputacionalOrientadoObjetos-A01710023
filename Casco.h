#include <string>
#include <iostream>
using namespace std;
class Casco{
private: //atributos casco
    string tipo;
    string marca;
    string color;
    string talla;
    float precio;
    float peso;

public:
    //constructor
    Casco(){
        tipo = "";
        marca = "";
        color = "";
        talla = "";
        precio = 0;
        peso = 0;
    }

    //Constructor con parametros, viene por default la marca principal de la tienda y la talla de estos cascos
    Casco(string tipo_c, string color_c, float precio_c, float peso_c){
        tipo = tipo_c;
        marca = "Wito";
        color = color_c;
        talla = "Unitalla";
        precio = precio_c;
        peso = peso_c;
    }

    //getters
    string getTipo(){
        return tipo;
    }
    string getMarca(){
        return marca;
    }
    string getColor(){
        return color;
    }
    string getTalla(){
        return talla;
    }
    float getPrecio(){
        return precio;
    }
    float getPeso(){
        return peso;
    }
    //setters
    void setTipo(string tipo_casco){
        tipo = tipo_casco;
    }
    void setMarca(string marca_casco){
        marca = marca_casco;
    }
    void setColor(string color_casco){
        color = color_casco;
    }
    void setTalla(string talla_casco){
        talla = talla_casco;
    }
    void setPrecio(float precio_casco){
        precio = precio_casco;
    }
    void setPeso(float peso_casco){
        peso = peso_casco;
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