#include <string>
using namespace std;

class Transmision{
    private:
        string tipo;

    public:
        Transmision(int t);
        string gettipo();
        void settipo(int num);
};

Transmision::Transmision(int t){
    settipo(t);
}

string Transmision::gettipo(){
    return tipo;
}

void Transmision::settipo(int num){
    switch (num)
    {
    case 1:
        tipo = "estandar";
        break;

    case 2:
        tipo = "deportiva";
        break;
    
    case 3:
        tipo = "de carreras";
        break;
    
    default:
        tipo = "estandar";
        break;
    }
}