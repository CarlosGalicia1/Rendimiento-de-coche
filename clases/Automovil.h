#include <iostream>
#include <string>
using namespace std;

class Automovil{
    private:
        string nombre;
        float  velocidadMaxima, manejabilidad, aceleracion, despegue, frenado, promedio;
    public:
        Automovil(float vel, float manejo, float acel, float desp, float freno);
        string getNombre();
        float getVelocidadMaxima();
        float getManejabilidad();
        float getAceleracion();
        float getDespegue();
        float getFrenado();
        float getRendimiento();
        void setVelocidadMaxima(float vel);
        void setManejabilidad(float manejo);
        void setAceleracion(float acel);
        void setDespegue(float desp);
        void setFrenado(float freno);

};

Automovil::Automovil(float vel, float manejo, float acel, float desp, float freno){
    velocidadMaxima = vel;
    manejabilidad = manejo;
    aceleracion = acel;
    despegue = desp;
    frenado = freno;
}


string Automovil::getNombre(){
    return nombre;
}

float Automovil::getVelocidadMaxima(){
    return velocidadMaxima;
}

float Automovil::getManejabilidad(){
    return manejabilidad;
}

float Automovil::getAceleracion(){
    return aceleracion;
}

float Automovil::getDespegue(){
    return despegue;
}

float Automovil::getFrenado(){
    return frenado;
}


float Automovil::getRendimiento(){
    float rendimiento = (getVelocidadMaxima()+getManejabilidad()+getAceleracion()+getDespegue()+getFrenado())/5;
    return rendimiento;
}

void Automovil::setVelocidadMaxima(float vel){
    velocidadMaxima = vel;
}

void Automovil::setManejabilidad(float manejo){
    manejabilidad = manejo;
}

void Automovil::setAceleracion(float acel){
    aceleracion = acel;
}

void Automovil::setDespegue(float desp){
    despegue = desp;
}

void Automovil::setFrenado(float freno){
    frenado = freno;
}
