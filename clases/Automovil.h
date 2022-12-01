#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H


#include <iostream>
#include <string>

#include "Chasis.h"
#include "Llantas.h"
#include "Motor.h"
#include "Transmision.h"
#include "Frenos.h"
#include "Aleron.h"
#include "Portaequipaje.h"
#include "Electrodomestico.h"

using namespace std;

class Automovil{
    protected:
        float velocidadMaxima, manejabilidad, aceleracion, despegue, frenado;
        Chasis chasis;
        Llantas llantas;
        Motor motor;
        Transmision transmision;
        Frenos frenos;
        Aleron aleron;
        Portaequipaje portaequipaje;
        Electrodomestico electrodomestico;
    public:
        Automovil(float vel, float manejo, float acel, float desp, float freno); //Incluir "string nombre" como parametro
        //=============================================getters===============================================//
        string getChasis();
        string getLlantas();
        string getMotor();
        string getTransmision();
        string getFrenos();
        string getAleron();
        string getPortaequipaje();
        string getElectrodomestico();
        float getVelocidadMaxima();
        float getManejabilidad();
        float getAceleracion();
        float getDespegue();
        float getFrenado();
        float getRendimiento(); 
        //=============================================setters===============================================//
        void setChasis(int tipo);
        void setLlantas(int tipo);        
        void setMotor(int tipo);
        void setTransmision(int tipo);        
        void setFrenos(int tipo);
        void setAleron(int tipo);
        void setPortaequipaje(int tipo);
        void setElectrodomestico(int tipo);
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


string Automovil::getChasis(){
    return chasis.gettipo();
}

string Automovil::getLlantas(){
    return llantas.gettipo();
}

string Automovil::getMotor(){
    return motor.gettipo();
}

string Automovil::getTransmision(){
    return transmision.gettipo();
}

string Automovil::getFrenos(){
    return frenos.gettipo();
}

string Automovil::getAleron(){
    return aleron.gettipo();
}

string Automovil::getPortaequipaje(){
    return portaequipaje.gettipo();
}

string Automovil::getElectrodomestico(){
    return electrodomestico.gettipo();
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

void Automovil::setChasis(int tipo){
    chasis.settipo(tipo);    
}

void Automovil::setLlantas(int tipo){
    llantas.settipo(tipo);    
}

void Automovil::setMotor(int tipo){
    motor.settipo(tipo);    
}

void Automovil::setTransmision(int tipo){
    transmision.settipo(tipo);    
}

void Automovil::setFrenos(int tipo){
    frenos.settipo(tipo);    
}

void Automovil::setAleron(int tipo){
    aleron.settipo(tipo);
}

void Automovil::setPortaequipaje(int tipo){
    portaequipaje.settipo(tipo);
}

void Automovil::setElectrodomestico(int tipo){
    electrodomestico.settipo(tipo);
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


#endif
