#include <string>
using namespace std;

class Llantas{
    private:
        string tipo;

    public:
        Llantas(int t);
        string gettipo();
        void settipo(int num);
};

Llantas::Llantas(int t){
    settipo(t);
}

string Llantas::gettipo(){
    return tipo;
}

void Llantas::settipo(int num){
    switch (num)
    {
    case 1:
        tipo = "estandar";
        break;

    case 2:
        tipo = "de calle";
        break;
    
    case 3:
        tipo = "deportiva";
        break;
    
    case 4:
        tipo = "de carreras";
        break;
    
    default:
        tipo = "estandar";
        break;
    }
}