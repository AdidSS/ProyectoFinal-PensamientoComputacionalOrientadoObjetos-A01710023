#include <iostream>
#include <string>
using namespace std;
class Bicicleta{
private://Atributos
    string tipo;
    string marca;
    string color;
    float rodada;
    float precio;
    float peso;

public:
    //constructor por omisión, pone los siguientes valores por default
    Bicicleta(){
        tipo = "";
        marca = "";
        color = "";
        rodada = 0;
        precio = 0;
        peso = 0;
    }
    //constructor con parametros
    Bicicleta(string tipo_b, string marca_b, string color_b, float rodada_b, float precio_b,float peso_b){
        tipo = tipo_b;
        marca = marca_b;
        color = color_b;
        rodada = rodada_b;
        precio = precio_b;
        peso = peso_b;
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
    float getRodada(){
        return rodada;
    }
    float getPrecio(){
        return precio;
    }
    float getPeso(){
        return peso;
    }
    //setters
    void setTipo(string tipo_bici){
        tipo = tipo_bici;
    }
    void setMarca(string marca_bici){
        marca = marca_bici;
    }
    void setColor(string color_bici){
        color = color_bici;
    }
    void setRodada(float rodada_bici){
        rodada = rodada_bici;
    }
    void setPrecio(float precio_bici){
        precio = precio_bici;
    }
    void setPeso(float peso_bici){
        peso = peso_bici;
    }
    //metodos adicionales
    void imprimir_datos(){
        cout<<endl;
        cout<<"Bicicleta "<<endl;
        cout<<"Tipo: "<< tipo <<endl;
        cout<<"Marca: "<< marca <<endl;
        cout<<"Color: "<< color <<endl;
        cout<<"Rodada: "<< rodada <<endl;
        cout<<"Precio:"<< precio <<" pesos"<<endl;
        cout<<"Peso: "<< peso <<" gramos"<<endl;
    }
};