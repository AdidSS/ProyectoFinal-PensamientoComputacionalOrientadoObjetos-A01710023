#include <iostream>
#include <string>
using namespace std;
class Lampara{
private:
    //atributos lampara
    string tipo; //delanteras, traseras, juego (ambas)
    string marca;
    string color;
    float duracion; //horas
    float tiempo_carga; //horas
    float lumens; //medida de la potencia luminosa
    float precio;
public:
    //constructor
    Lampara(){
        tipo = "";
        marca = "";
        color = "";
        duracion = 0;
        tiempo_carga = 0;
        lumens = 0;
        precio = 0;
    }
    Lampara(string tipo_lamp, string marca_lamp, string color_lamp, float duracion_lamp, float tiempo_lamp, float lumens_lamp, float precio_lamp){
        tipo = tipo_lamp;
        marca = marca_lamp;
        color = color_lamp;
        duracion = duracion_lamp;
        tiempo_carga = tiempo_lamp;
        lumens = lumens_lamp;
        precio = precio_lamp;
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
    float getDuracion(){
        return duracion;
    }
    float getTiempo_carga(){
        return tiempo_carga;
    }
    float getLumens(){
        return lumens;
    }
    float getPrecio(){
        return precio;
    }
    //setters
    void setTipo(string tipo_lamp){
        tipo = tipo_lamp;
    }
    void setMarca(string marca_lamp){
        marca = marca_lamp;
    }
    void setColor(string color_lamp){
        color = color_lamp;
    }
    void setDuracion(float duracion_lamp){
        duracion = duracion_lamp;
    }
    void setTiempo_carga(float tiempo_lamp){
        tiempo_carga = tiempo_lamp;
    }
    void setLumens(float lumens_lamp){
        lumens = lumens_lamp;
    }
    void setPrecio(float precio_lamp){
        precio = precio_lamp;
    }
    //metodos adicionales
    void imprimir_datos(){
        cout<<endl;
        cout<<"Lámpara"<<endl;
        cout<<"Tipo: "<< tipo <<endl;
        cout<<"Marca: "<< marca <<endl;
        cout<<"Color: "<< color <<endl;
        cout<<"Duracion (tiempo de uso): "<< duracion <<" horas"<<endl;
        cout<<"Tiempo de carga: "<< tiempo_carga <<" horas"<<endl;
        cout<<"Lumens: "<< lumens <<" lumens"<<endl;
        cout<<"Precio: "<< precio <<" pesos"<<endl;
    }
};