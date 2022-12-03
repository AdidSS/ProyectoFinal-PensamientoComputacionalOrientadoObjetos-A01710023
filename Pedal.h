#include <iostream>
#include <string>
using namespace std;
class Pedal{
    private:
        string marca;//Atributos
    public:
        //constructor
        Pedal(){
            marca = "";
        }
        //getter
        string getMarca(){
            return marca;
        }
        //setter
        void setMarca(string mar){
            marca = mar;
        }
        //metodo pedal
        void pedalear(){
            cout<< "Pedaleando";
            cout<<endl;
        }
};