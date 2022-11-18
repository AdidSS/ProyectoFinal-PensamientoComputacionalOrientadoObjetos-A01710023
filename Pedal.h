#include <iostream>
#include <string>
using namespace std;
class Pedal{
private:
    string material;
    string marca;
public:
    Pedal(){
        material = "";
        marca = "";
    }
    string getMaterial(){
        return material;
    }
    string getMarca(){
        return marca;
    }
    void setMarca(string mar){
        marca = mar;
    }
    void setMaterial(string mat){
        material = mat;
    }
    void pedalear(){
        cout<< "Pedaleando";
    }
};