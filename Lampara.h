#include <iostream>
#include <string>
using namespace std;
class Lampara : public Articulo{
    private:
        //atributos lampara
        float duracion; //horas
        float tiempo_carga; //horas
        float lumens; //medida de la potencia luminosa
        //variables
        bool encendido;
    public:
        //constructor con parametros
        Lampara( string marc, string colo, float prize, float w, float duration, float carga, float lumen):Articulo("Juego de lamparas", marc, colo, prize, w){
            duracion = duration;
            tiempo_carga = carga;
            lumens = lumen;
        }

        //getters
        float getDuracion(){
            return duracion;
        }
        float getTiempo_carga(){
            return tiempo_carga;
        }
        float getLumens(){
            return lumens;
        }
        //setters
        void setDuracion(float duracion_lamp){
            duracion = duracion_lamp;
        }
        void setTiempo_carga(float tiempo_lamp){
            tiempo_carga = tiempo_lamp;
        }
        void setLumens(float lumens_lamp){
            lumens = lumens_lamp;
        }
        //Se llama el metodo virtual de articulo y se complementa imprimiendo los atributos propios
        void imprimir_datos(){
            Articulo::imprimir_datos();
            cout<<"Duracion (tiempo de uso): "<< duracion <<" horas"<<endl;
            cout<<"Tiempo de carga: "<< tiempo_carga <<" horas"<<endl;
            cout<<"Lumens: "<< lumens <<" lumens"<<endl;
        }
        //metodos lampara
        void encender(){
            encendido = true;
            cout<<"Encendido";
        }
        void apagar(){
            encendido = false;
            cout<<"Apagado";
        }
};