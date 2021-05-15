#include <iostream>
#include "Electrodomestico.hpp"

#ifndef MICROONDAS_H
#define MICROONDAS_H

class Microondas : public Electrodomestico {

    private: //Atributos
        float capacidad;
        int tiempo;

    public: //Metodos
        Microondas(int id, bool encendido, float capacidad, int tiempo);
        void statusMicroondas();
};

#endif