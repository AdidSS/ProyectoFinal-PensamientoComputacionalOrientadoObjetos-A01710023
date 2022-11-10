#include <iostream>
#include "Bicicleta.h"
#include "Casco.h"
#include "Lampara.h"
using namespace std;

int main() {
    //Bici
    Bicicleta biciMTB;
    biciMTB.imprimir_datos(); //Con valores por default
    //Modificamos los atributos con los setters
    biciMTB.setTipo("Montaña");
    biciMTB.setMarca("Alubike");
    biciMTB.setColor("rojo");
    biciMTB.setRodada(27.5);
    biciMTB.setPrecio(7600);
    biciMTB.setPeso(10.8);
    //Prueba de getters
    cout<<biciMTB.getPeso()<<endl;
    cout<<biciMTB.getTipo()<<endl;
    cout<<biciMTB.getMarca()<<endl;
    cout<<biciMTB.getColor()<<endl;
    cout<<biciMTB.getRodada()<<endl;
    cout<<biciMTB.getPrecio()<<endl;
    biciMTB.imprimir_datos();

    //Casco
    Casco miCasco; //creacion objeto constructor por omision
    miCasco.imprimir_datos();
    //setters
    miCasco.setTipo("infantil");
    miCasco.setMarca("Fox");
    miCasco.setColor("negro");
    miCasco.setTalla("chico");
    miCasco.setPrecio(2099.6);
    miCasco.setPeso(270);
    //getters
    cout<< miCasco.getTipo()<<endl;
    cout<< miCasco.getMarca()<<endl;
    cout<< miCasco.getColor()<<endl;
    cout<< miCasco.getTalla()<<endl;
    cout<< miCasco.getPrecio()<<endl;
    cout<< miCasco.getPeso()<<endl;
    miCasco.imprimir_datos();

    //Lampara
    Lampara lamparaPrueba;
    lamparaPrueba.imprimir_datos();
    //setters
    lamparaPrueba.setTipo("delantera");
    lamparaPrueba.setMarca("magicshine");
    lamparaPrueba.setColor("dorado");
    lamparaPrueba.setLumens(300);
    lamparaPrueba.setDuracion(3.5);
    lamparaPrueba.setTiempo_carga(2);
    lamparaPrueba.setPrecio(455.63);
    //getters
    cout<<lamparaPrueba.getTipo()<<endl;
    cout<< lamparaPrueba.getMarca()<<endl;
    cout<< lamparaPrueba.getColor()<<endl;
    cout<< lamparaPrueba.getLumens()<<endl;
    cout<< lamparaPrueba.getDuracion()<<endl;
    cout<< lamparaPrueba.getTiempo_carga()<<endl;
    cout<< lamparaPrueba.getPrecio()<<endl;
    lamparaPrueba.imprimir_datos();

    return 0;
}
