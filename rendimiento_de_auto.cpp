#include <iostream>
#include <string>
#include "clases\Automovil.h"
#include "clases\Chasis.h"
#include "clases\Llantas.h"
#include "clases\Motor.h"
#include "clases\Transmision.h"
#include "clases\Frenos.h"

using namespace std;

int main(){
    int opcion;
    int tipo;
    float  velocidadMaxima, manejabilidad, aceleracion, despegue, frenado, promedio, v, m, a, d, f;
    cout << "============ Programa que evalua el rendimiento de coche modificado ==========="<< endl;
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
        v = velocidadMaxima;
        m = manejabilidad;
        a = aceleracion;
        d = despegue;
        f = frenado;

        Automovil coche_personalizado(velocidadMaxima, manejabilidad, aceleracion, despegue, frenado);
        Chasis chasis(1);
        Llantas llantas(1);
        Motor motor(1);
        Transmision transmision(1);
        Frenos frenos(1);
            
        while (true)
        {

            cout << "===================================== Coche personalizado =====================================" << endl
                << "Velocidad: " << coche_personalizado.getVelocidadMaxima() << endl
                << "Manejabilidad: " << coche_personalizado.getManejabilidad() << endl
                << "Aceleracion: " << coche_personalizado.getAceleracion() << endl
                << "Despegue: " << coche_personalizado.getDespegue() << endl
                << "Frenado: " << coche_personalizado.getFrenado() << endl
                << "================ El rendimiento de tu coche es: " << coche_personalizado.getRendimiento() << \
                " ================" << endl
                << "Deseas mejorar o modificar tu coche? 1/2" << endl
                << "   1.Si" << endl
                << "   2.No" << endl;
            cin >> opcion;
            if (opcion == 1){
                cout << "Que parte deseas mejorar? " << endl
                    << "   1.Chasis (velocidad)" << endl
                    << "   2.Llantas (manejabilidad)" << endl
                    << "   3.Motor (aceleracion)" << endl
                    << "   4.Tren de transmision (despegue)" << endl
                    << "   5.Frenos (frenado)" << endl;
                cin >> opcion;
                switch (opcion)
                {
                case 1:
                    cout << "Tipo de chasis actual: " << chasis.gettipo() << endl
                        << "Selecciona el tipo de chasis deseado:" << endl
                        << "   1. Chasis estandar" << endl
                        << "   2. Chasis de calle" << endl
                        << "   3. Chasis deportivo" << endl
                        << "   4. Chasis de carreras" << endl;
                    cin >> tipo;
                    chasis.settipo(tipo);
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
                    cout << "Tipo de llanta actual: " << llantas.gettipo() << endl
                        << "Selecciona el tipo de llanta deseado:" << endl
                        << "   1. Llanta estandar" << endl
                        << "   2. Llanta de calle" << endl
                        << "   3. Llanta deportiva" << endl
                        << "   4. Llanta de carreras" << endl;
                    cin >> tipo;
                    llantas.settipo(tipo);
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
                    cout << "Tipo de motor actual: " << motor.gettipo() << endl
                        << "Selecciona el tipo de motor deseado:" << endl
                        << "   1. Motor estandar" << endl
                        << "   2. Motor V6" << endl
                        << "   3. Motor V8" << endl
                        << "   4. Motor V10" << endl;
                    cin >> tipo;
                    motor.settipo(tipo);
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
                    cout << "Tipo de transmision actual: " << transmision.gettipo() << endl
                        << "Selecciona el tipo de transmision deseada:" << endl
                        << "   1. Transmision estandar" << endl
                        << "   2. Transmision deportiva" << endl
                        << "   3. Transmision de carreras" << endl;
                    cin >> tipo;
                    transmision.settipo(tipo);
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
                    cout << "Tipo de frenos actuales: " << frenos.gettipo() << endl
                        << "Selecciona el tipo de frenos deseados:" << endl
                        << "   1. Frenos estandar" << endl
                        << "   2. Frenos deportivos" << endl
                        << "   3. Frenos de carreras" << endl;
                    cin >> tipo;
                    frenos.settipo(tipo);
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

                default:
                    break;
                }
                coche_personalizado.setVelocidadMaxima(velocidadMaxima);
                coche_personalizado.setManejabilidad(manejabilidad);
                coche_personalizado.setAceleracion(aceleracion);
                coche_personalizado.setDespegue(despegue);
                coche_personalizado.setFrenado(frenado);
            }
            
            else if (opcion == 2){
                return false;
            }
        }
    return 0;
}