#include <iostream>
#include <string>
using namespace std;
class Cuadro{
private:
    string material;
public:
    Cuadro() {
        material = "";
    }
    string getMaterial(){
        return material;
    }
    void setMaterial(string mat){
        material = mat;
    }
};