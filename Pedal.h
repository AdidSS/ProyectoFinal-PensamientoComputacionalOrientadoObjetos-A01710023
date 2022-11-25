#include <iostream>
#include <string>
using namespace std;
class Pedal{
private:
    string marca;
public:
    Pedal(){
        marca = "";
    }
    string getMarca(){
        return marca;
    }
    void setMarca(string mar){
        marca = mar;
    }
    void pedalear(){
        cout<< "Pedaleando";
        cout<<endl;
    }
};