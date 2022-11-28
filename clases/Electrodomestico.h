#include <string>
using namespace std;

class Electrodomestico{
    private:
        string tipo;

    public:
        Electrodomestico();
        string gettipo();
        void settipo(int num);
};

Electrodomestico::Electrodomestico(){
    tipo = "estandar";
}

string Electrodomestico::gettipo(){
    return tipo;
}

void Electrodomestico::settipo(int num){
    switch (num)
    {
    case 1:
        tipo = "Sin electrodomestico";
        break;

    case 2:
        tipo = "Refrigerador";
        break;
    
    case 3:
        tipo = "Microondas";
        break;
    
    case 4:
        tipo = "Lavadora";
        break;
    
    default:
        tipo = "Sin electrodomestico";
        break;
    }
}