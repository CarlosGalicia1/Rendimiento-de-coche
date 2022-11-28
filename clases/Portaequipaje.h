#include <string>
using namespace std;

class Portaequipaje{
    private:
        string tipo;

    public:
        Portaequipaje();
        string gettipo();
        void settipo(int num);
};

Portaequipaje::Portaequipaje(){
    tipo = "estandar";
}

string Portaequipaje::gettipo(){
    return tipo;
}

void Portaequipaje::settipo(int num){
    switch (num)
    {
    case 1:
        tipo = "Sin portaequipaje";
        break;

    case 2:
        tipo = "De railes";
        break;
    
    case 3:
        tipo = "En t";
        break;
    
    case 4:
        tipo = "Con puntos de fijacion";
        break;
    
    default:
        tipo = "Sin portaequipaje";
        break;
    }
}