#include <iostream>
#include <string>
using namespace std;
class Articulo{
private:
    string tipo;
    string marca;
    string color;
    float precio;
    float peso;
public:
    Articulo(){
        tipo = "";
        marca = "";
        color = "";
        precio = 0;
        peso = 0;
    }

    string getTipo(){
        return tipo;
    }
    string getMarca(){
        return marca;
    }
    string getColor(){
        return color;
    }
    float getPrecio(){
        return precio;
    }
    float getPeso(){
        return peso;
    }
    void setTipo(string tipo){
        this->tipo = tipo;
    }
    void setMarca(string marca){
        this->marca = marca;
    }
    void setColor(string color){
        this->color = color;
    }
    void imprimir_datos(){
        cout<<endl;
        cout<<"Bicicleta "<<endl;
        cout<<"Tipo: "<< tipo <<endl;
        cout<<"Marca: "<< marca <<endl;
        cout<<"Color: "<< color <<endl;
        cout<<"Precio:"<< precio <<" pesos"<<endl;
        cout<<"Peso: "<< peso <<" gramos"<<endl;
    }
};