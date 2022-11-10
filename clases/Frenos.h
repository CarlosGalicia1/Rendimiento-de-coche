#include <string>
using namespace std;

class Frenos{
    private:
        string tipo;

    public:
        Frenos(int t);
        string gettipo();
        void settipo(int num);
};

Frenos::Frenos(int t){
    settipo(t);
}

string Frenos::gettipo(){
    return tipo;
}

void Frenos::settipo(int num){
    switch (num)
    {
    case 1:
        tipo = "estandar";
        break;

    case 2:
        tipo = "deportivos";
        break;
    
    case 3:
        tipo = "de carreras";
        break;
    
    default:
        tipo = "estandar";
        break;
    }
}