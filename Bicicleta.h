#include <iostream>
#include <string>
#include "Articulo.h"
#include "Cuadro.h"
#include "Rueda.h"
#include "Pedal.h"
using namespace std;
class Bicicleta : public Articulo{
    private:
        //Atributos de otras clases (agregacion)
        Rueda ruedaDelantera;
        Rueda ruedaTrasera;
        Pedal pedalDer;
        Pedal pedalIzq;
        //Composicion
        Cuadro cuadroBici;
        //Atributos propios de clase bici
        int cambios;

    public:
        //constructor con parametros + herencia
        Bicicleta(string tip, string marc, string colo, float prize, float w,int cambio, Rueda ruedaD, Rueda ruedaT, Pedal pedalD, Pedal pedalI):Articulo(tip, marc, colo, prize, w){
            Cuadro cuadro;
            cuadro.setMaterial("Aluminio");
            cuadroBici = cuadro;
            ruedaDelantera = ruedaD;
            ruedaTrasera = ruedaT;
            pedalDer = pedalD;
            pedalIzq = pedalI;
            cambios = cambio;
        }
        //getters propios
        int getCambios(){
            return cambios;
        }
        //setters propios
        void setCambios(int cambio){
            cambios = cambio;
        }
        //metodos adicionales
        void avanzar(){
            cout<<"Avanzando";
            cout<<endl;
        }
        void frenar(){
            cout<<"Frenando";
            cout<<endl;
        }
        void girar(float angulo){
            cout<<"Girando "<<angulo<<" grados";
            cout<<endl;
        }
        void imprimir_datos(){ //Se llama el metodo virtual de articulo y se complementa imprimiendo los atributos propios
            Articulo::imprimir_datos();
            cout<< "Rodada: "<<ruedaTrasera.getRodada()<<endl;
            cout<<"Pedales: "<<pedalDer.getMarca()<<endl;
            cout<<"Velocidades: "<<cambios<<endl;
        }
};