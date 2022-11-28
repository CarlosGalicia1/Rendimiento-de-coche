#include <typeinfo>
#include <iostream>
#include <string>
#include "clases\Camper.h"
#include "clases\Familiar.h"
#include "clases\Deportivo.h"
using namespace std;

template <class T>
T modificar(int opcion, int tipo, float velocidadMaxima, float manejabilidad, float aceleracion, float despegue,\
float frenado, float promedio, float v, float m, float a, float d, float f, T clase){
    velocidadMaxima = v;
    manejabilidad = m;
    aceleracion = a;
    despegue = d;
    frenado = f;
    while (true)
    {                     
        cout << "Velocidad: " << clase.getVelocidadMaxima() << endl
        << "Manejabilidad: " << clase.getManejabilidad() << endl
        << "Aceleracion: " << clase.getAceleracion() << endl
        << "Despegue: " << clase.getDespegue() << endl
        << "Frenado: " << clase.getFrenado() << endl
        << "================ El rendimiento de tu coche es: " << clase.getRendimiento() << \
        " ================" << endl
        << "Deseas mejorar o modificar tu coche? 1/2" << endl
        << "   1.Si" << endl
        << "   2.No" << endl;
        cin >> opcion;
        if (opcion==1)
        {
            cout << "Que parte deseas mejorar? " << endl
                << "   1.Chasis (velocidad)" << endl
                << "   2.Llantas (manejabilidad)" << endl
                << "   3.Motor (aceleracion)" << endl
                << "   4.Tren de transmision (despegue)" << endl
                << "   5.Frenos (frenado)" << endl
                << "   6.Aleron (Solo disponible con coches deportivos)" << endl
                << "   7.Portaequipaje (Solo disponible en coches familiares)" << endl
                << "   8.Electrodomestico (Solo disponible en campers)" << endl
                << "   9.Salir" << endl;
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                cout << "Tipo de chasis actual: " << clase.getChasis() << endl
                    << "Selecciona el tipo de chasis deseado:" << endl
                    << "   1. Chasis estandar" << endl
                    << "   2. Chasis de calle" << endl
                    << "   3. Chasis deportivo" << endl
                    << "   4. Chasis de carreras" << endl;
                cin >> tipo;
                clase.setChasis(tipo);
                switch (tipo)
                {
                case 1:
                    velocidadMaxima = v;
                    break;
                case 2:
                    velocidadMaxima = v + .2;
                    break;
                case 3:
                    velocidadMaxima = v + .4;
                    break;
                case 4:
                    velocidadMaxima = v + .7;
                    break;
                default:
                    velocidadMaxima = v;
                    break;
                }
                break;
            case 2:
                cout << "Tipo de llanta actual: " << clase.getLlantas() << endl
                    << "Selecciona el tipo de llanta deseado:" << endl
                    << "   1. Llanta estandar" << endl
                    << "   2. Llanta de calle" << endl
                    << "   3. Llanta deportiva" << endl
                    << "   4. Llanta de carreras" << endl;
                cin >> tipo;
                clase.setLlantas(tipo);
                switch (tipo)
                {
                case 1:
                    manejabilidad = m;
                    break;
                case 2:
                    manejabilidad = m + .2;
                    break;
                case 3:
                    manejabilidad = m + .4;
                    break;
                case 4:
                    manejabilidad = m + .7;
                    break;
                default:
                    manejabilidad = m;
                    break;
                }
                break;
            case 3:
                cout << "Tipo de motor actual: " << clase.getMotor() << endl
                    << "Selecciona el tipo de motor deseado:" << endl
                    << "   1. Motor estandar" << endl
                    << "   2. Motor V6" << endl
                    << "   3. Motor V8" << endl
                    << "   4. Motor V10" << endl;
                cin >> tipo;
                clase.setMotor(tipo);
                switch (tipo)
                {
                case 1:
                    aceleracion = a;
                    break;
                case 2:
                    aceleracion = a + .2;
                    break;
                case 3:
                    aceleracion = a + .4;
                    break;
                case 4:
                    aceleracion = a + .7;
                    break;
                default:
                    aceleracion = a;
                    break;
                }
                break;
            case 4:
                cout << "Tipo de transmision actual: " << clase.getTransmision() << endl
                    << "Selecciona el tipo de transmision deseada:" << endl
                    << "   1. Transmision estandar" << endl
                    << "   2. Transmision deportiva" << endl
                    << "   3. Transmision de carreras" << endl;
                cin >> tipo;
                clase.setTransmision(tipo);
                switch (tipo)
                {
                case 1:
                    despegue = d;
                    break;
                case 2:
                    despegue = d + .4;
                    break;
                case 3:
                    despegue = d + .7;
                    break;
                default:
                    despegue = d;
                    break;
                }
                break;
            case 5:
                cout << "Tipo de frenos actuales: " << clase.getFrenos() << endl
                    << "Selecciona el tipo de frenos deseados:" << endl
                    << "   1. Frenos estandar" << endl
                    << "   2. Frenos deportivos" << endl
                    << "   3. Frenos de carreras" << endl;
                cin >> tipo;
                clase.setFrenos(tipo);
                switch (tipo)
                {
                case 1:
                    frenado = f;
                    break;
                case 2:
                    frenado = f + .4;
                    break;
                case 3:
                    frenado = f + .7;
                    break;
                default:
                    frenado = f;
                    break;
                }
                break;
            case 6:
                if (typeid(clase).name() == typeid(Deportivo).name()){
                    cout << "Tipo de aleron actual: " << clase.getAleron() << endl
                    << "Selecciona el tipo de aleron deseado:" << endl
                    << "   1. Sin aleron" << endl
                    << "   2. Aleron de pedestal" << endl
                    << "   3. Aleron activo" << endl
                    << "   4. Aleron cola de ballena" << endl;
                cin >> tipo;
                clase.setAleron(tipo);
                }
                else{
                    cout << "========================" << endl
                    << "Tu coche no es deportivo" << endl
                    << "========================" << endl;
                }
                break;

            case 7:
                if (typeid(clase).name() == typeid(Familiar).name()){
                    cout << "Tipo de portaequipaje actual: " << clase.getPortaequipaje() << endl
                    << "Selecciona el tipo de portaequipaje deseado:" << endl
                    << "   1. Sin portaequipaje" << endl
                    << "   2. Portaequipaje de railes" << endl
                    << "   3. Portaequipaje en T" << endl
                    << "   4. Portaequipaje con puntos de fijacion" << endl;
                cin >> tipo;
                clase.setPortaequipaje(tipo);
                }
                else{
                    cout << "========================" << endl
                    << "Tu coche no es familiar" << endl
                    << "========================" << endl;
                }
                break;

            case 8:
                if (typeid(clase).name() == typeid(Camper).name()){
                    cout << "Tipo de electrodomestico actual: " << clase.getElectrodomestico() << endl
                    << "Selecciona el tipo de electrodomestico deseado:" << endl
                    << "   1. Sin electrodomestico" << endl
                    << "   2. Refrigerador" << endl
                    << "   3. Microondas" << endl
                    << "   4. Lavadora" << endl;
                cin >> tipo;
                clase.setElectrodomestico(tipo);
                }
                else{
                    cout << "========================" << endl
                    << "Tu coche no es camper" << endl
                    << "========================" << endl;
                }
                break;

            case 9:
                break;
            default:
                break;
            }
            clase.setVelocidadMaxima(velocidadMaxima);
            clase.setManejabilidad(manejabilidad);
            clase.setAceleracion(aceleracion);
            clase.setDespegue(despegue);
            clase.setFrenado(frenado);    
        }
        else{
            break;
        }
    }

}

int main(){ 
    int opcion, tipo;
    float velocidadMaxima, manejabilidad, aceleracion, despegue, frenado, promedio, v, m, a, d, f;

    cout << "Bienvenido al programa que evalua el rendimiento de tu coche personalizado"<< endl;

            cout <<"¿Que tipo de coche deseas crear?" << endl
                << "   1.Coche personalizado" << endl
                << "   2.Coche deportivo" << endl
                << "   3.Coche familiar" << endl
                << "   4.Camper" << endl
                << "   5.Salir" << endl;
            cin >> opcion;
            switch (opcion)
            {
                case 1:
                {
                    cout << "Ingresa el rating de velocidad (0-10) del coche: ";
                    cin >> velocidadMaxima;
                    cout << "Ingresa el rating de manejabilidad (0-10) del coche: ";
                    cin >> manejabilidad;
                    cout << "Ingresa el rating de aceleracion (0-10) del coche: ";
                    cin >> aceleracion;
                    cout << "Ingresa el rating de despegue (0-10) del coche: ";
                    cin >> despegue;
                    cout << "Ingresa el rating de frenado (0-10) del coche: ";
                    cin >> frenado;
                    Automovil coche_personalizado(velocidadMaxima, manejabilidad, aceleracion, despegue, frenado);
                    v = velocidadMaxima;
                    m = manejabilidad;
                    a = aceleracion;
                    d = despegue;
                    f = frenado;
                    cout << "===================================== Coche personalizado =====================================" << endl;
                    modificar<Automovil>(opcion, tipo, velocidadMaxima, manejabilidad, aceleracion, despegue, frenado, promedio, v, m, a\
                    , d, f, coche_personalizado);
                    break;
                }
                
                case 2:
                {
                    Deportivo coche_deportivo;
                    v = coche_deportivo.getVelocidadMaxima();
                    m = coche_deportivo.getManejabilidad();
                    a = coche_deportivo.getAceleracion();
                    d = coche_deportivo.getDespegue();
                    f = coche_deportivo.getFrenado();
                    cout << "===================================== Coche deportivo =====================================" << endl;
                    modificar<Deportivo>(opcion, tipo, velocidadMaxima, manejabilidad, aceleracion, despegue, frenado, promedio, v, m, a\
                    , d, f, coche_deportivo);
                    break;
                }

                case 3:
                {
                    Familiar coche_familiar;
                    v = coche_familiar.getVelocidadMaxima();
                    m = coche_familiar.getManejabilidad();
                    a = coche_familiar.getAceleracion();
                    d = coche_familiar.getDespegue();
                    f = coche_familiar.getFrenado();
                    cout << "===================================== Coche familiar =====================================" << endl;
                    modificar<Familiar>(opcion, tipo, velocidadMaxima, manejabilidad, aceleracion, despegue, frenado, promedio, v, m, a\
                    , d, f, coche_familiar);
                    break;
                }

                case 4:
                {
                    Camper coche_camper;
                    v = coche_camper.getVelocidadMaxima();
                    m = coche_camper.getManejabilidad();
                    a = coche_camper.getAceleracion();
                    d = coche_camper.getDespegue();
                    f = coche_camper.getFrenado();
                    cout << "===================================== Coche camper =====================================" << endl;
                    modificar<Camper>(opcion, tipo, velocidadMaxima, manejabilidad, aceleracion, despegue, frenado, promedio, v, m, a\
                    , d, f, coche_camper);
                    break;
                }
                case 5:
                {
                    return 0;
                    break;
                }
                default:
                {
                    return 0;
                    break;
                }
            }
    return 0;
}
