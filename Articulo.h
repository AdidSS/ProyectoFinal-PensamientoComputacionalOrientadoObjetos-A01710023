#include <iostream>
#include <string>
using namespace std;
class Articulo{
    private:
        //atributos
        string tipo;
        string marca;
        string color;
        float precio;
        float peso;
    public:
        //Prueba de este constructor por omision
        Articulo();
        Articulo(string ti, string mar, string col, float prize, float w){
            tipo = ti;
            marca = mar;
            color = col;
            precio = prize;
            peso = w;
        }
        //Getters
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
        //setters
        void setTipo(string tipo){
            this->tipo = tipo;
        }
        void setMarca(string marca){
            this->marca = marca;
        }
        void setColor(string color){
            this->color = color;
        }
        virtual void imprimir_datos(){ //Metodo abstracto/virtual que se usará en las clases hijas
            cout<<endl;
            cout<<"Articulo "<<endl;
            cout<<"Tipo: "<< tipo <<endl;
            cout<<"Marca: "<< marca <<endl;
            cout<<"Color: "<< color <<endl;
            cout<<"Precio:"<< precio <<" pesos"<<endl;
            cout<<"Peso: "<< peso <<" gramos"<<endl;
        }
};