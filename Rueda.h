#include <iostream>
#include <string>
using namespace std;
class Rueda{
private:
    float rodada;
public:
    Rueda(){
        rodada = 0;
    }
    float getRodada(){
        return rodada;
    }
    void setRodada(float rod){
        rodada= rod;
    }
};