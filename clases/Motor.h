#include <string>
using namespace std;

class Motor{
    private:
        string tipo;

    public:
        Motor(int t);
        string gettipo();
        void settipo(int num);
};

Motor::Motor(int t){
    settipo(t);
}

string Motor::gettipo(){
    return tipo;
}

void Motor::settipo(int num){
    switch (num)
    {
    case 1:
        tipo = "estandar";
        break;

    case 2:
        tipo = "V6";
        break;
    
    case 3:
        tipo = "V8";
        break;
    
    case 4:
        tipo = "V10";
        break;
    
    default:
        tipo = "estandar";
        break;
    }
}