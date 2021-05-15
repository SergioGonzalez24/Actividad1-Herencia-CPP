#include <iostream>
#include "../include/Microondas.hpp"

using namespace std;

//Constructor Microondas
Microondas::Microondas(int id, bool encendido, float capacidad, int tiempo) : Electrodomestico(id,encendido) {

    this -> capacidad = capacidad;
    this -> tiempo = tiempo;
}

void Microondas::statusMicroondas() {
    cout << "ID: " << getId() << endl;
    cout << "Status: " << getEncendido() << endl;
    cout << "Capacidad: " << capacidad << endl;
    cout << "Tiempo: " << tiempo << endl;
}
