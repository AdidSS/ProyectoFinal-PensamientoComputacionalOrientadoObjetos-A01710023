#include <iostream>
#include <string>
using namespace std;
class Cuadro{
private:
    string material;
    float tallaTam;
public:
    Cuadro() {
        material = "";
        tallaTam = 0;
    }
    string getMaterial(){
        return material;
    }
    float getTallaTam(){
        return tallaTam;
    }
    void setMaterial(string mat){
        material = mat;
    }
    void setTallaTam(float talla){
        tallaTam = talla;
    }

};