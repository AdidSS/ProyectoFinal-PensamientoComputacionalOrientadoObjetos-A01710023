#include <iostream>
#include <string>
using namespace std;
class Rueda{
private:
    float rodada;
    string marca;
public:
    Rueda(){
        rodada = 0;
        marca = "";
    }
    float getRodada(){
        return rodada;
    }
    string getMarca(){
        return marca;
    }
    void setRodada(float rod){
        rodada= rod;
    }
    void setMarca(string mar){
        marca = mar;
    }

};