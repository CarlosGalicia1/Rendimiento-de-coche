#include <string>
using namespace std;

class Aleron{
    private:
        string tipo;

    public:
        Aleron();
        string gettipo();
        void settipo(int num);
};

Aleron::Aleron(){
    tipo = "estandar";
}

string Aleron::gettipo(){
    return tipo;
}

void Aleron::settipo(int num){
    switch (num)
    {
    case 1:
        tipo = "Sin aleron";
        break;

    case 2:
        tipo = "De pedestal";
        break;
    
    case 3:
        tipo = "Activo";
        break;
    
    case 4:
        tipo = "Cola de ballena";
        break;
    
    default:
        tipo = "Sin aleron";
        break;
    }
}