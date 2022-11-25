#include <iostream>
#include "Bicicleta.h"
#include "Casco.h"
#include "Lampara.h"
using namespace std;

int main() {
    //El programa ahora cuenta con agregacion y herencia, se esta trabajando para adaptar el metodo imprimirDatos(), pues parece un poco repetitivo
    //Creacion objeto tipo Casco
    Casco casco("rojo", 34, 34.3);
    casco.imprimir_datos();
    //Creacion objeto tipo Lampara
    Lampara lamparaGrande("focus", "azul", 1200,450,12,3,500);
    lamparaGrande.imprimir_datos();
    lamparaGrande.encender();//prueba metodos lampara
    cout<<endl;
    lamparaGrande.apagar();
    cout<<endl;
    //Crear objetos que pueden estar agregados a bicicleta
    //Pedales
    Pedal miPedal;
    Pedal pedalMtb;
    miPedal.setMarca("Rockbro");
    cout<<endl;
    cout<<"Dato pedal: "<<miPedal.getMarca()<<endl;
    pedalMtb.setMarca("Mongoose");
    //Ruedas
    Rueda ruedaGrande;
    Rueda ruedaMed;
    Rueda ruedaChica;
    ruedaGrande.setRodada(29);
    cout<<"Rueda grande rodada: " <<ruedaGrande.getRodada()<<endl;
    ruedaMed.setRodada(27.5);
    ruedaChica.setRodada(23);
    //Construccion objeto bici
    Bicicleta miBiciMTB("Montaña", "Alubike", "Rojo", 8000, 14000,24,ruedaGrande,ruedaGrande,miPedal,miPedal);
    miBiciMTB.imprimir_datos();
    cout<<endl;
    miPedal.pedalear();//Prueba metodos pedal y bici
    miBiciMTB.avanzar();
    miBiciMTB.frenar();
    miBiciMTB.girar(45);

    return 0;
}
