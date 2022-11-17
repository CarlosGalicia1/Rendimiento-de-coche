#include "Automovil.h"
using namespace std;

class Garaje{
    private:
        int numeroDeAutos;

    public:
        int getNumeroDeAutos();
        void setNumeroDeAutos();
        void crearCoche(float vel, float manejo, float acel, float desp, float freno);
        void liberarCoche(Automovil auto);
};