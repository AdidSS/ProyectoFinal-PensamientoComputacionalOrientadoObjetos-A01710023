#include <iostream>
#include <string>
using namespace std;
class Rueda{
    private:
        float rodada;//atributos
    public:
        //atributos
        Rueda(){
            rodada = 0;
        }
        //getters
        float getRodada(){
            return rodada;
        }
        //setters
        void setRodada(float rod){
            rodada= rod;
        }
};