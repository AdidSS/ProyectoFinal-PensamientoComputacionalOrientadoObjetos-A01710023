#include <iostream>
#include <string>
using namespace std;
class Cuadro{
    private:
        //atributos
        string material;
    public:
        //constructor
        Cuadro() {
            material = "";
        }
        //getter
        string getMaterial(){
            return material;
        }
        //setter
        void setMaterial(string mat){
            material = mat;
        }
};