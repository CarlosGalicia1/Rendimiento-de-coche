#include <string>
using namespace std;

class Chasis{
    private:
        string tipo;

    public:
        Chasis(int t);
        string gettipo();
        void settipo(int num);
};

Chasis::Chasis(int t){
    settipo(t);
}

string Chasis::gettipo(){
    return tipo;
}

void Chasis::settipo(int num){
    switch (num)
    {
    case 1:
        tipo = "estandar";
        break;

    case 2:
        tipo = "de calle";
        break;
    
    case 3:
        tipo = "deportivo";
        break;
    
    case 4:
        tipo = "de carreras";
        break;
    
    default:
        tipo = "estandar";
        break;
    }
}