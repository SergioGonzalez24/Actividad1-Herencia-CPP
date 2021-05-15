#include <iostream>
#ifndef ELECTRODOMESTICO_H
#define ELECTRODOMESTICO_H
	
class Electrodomestico {

    private: //Atributos 
        int id;
        bool encendido;

    public: //Metodos
        Electrodomestico(int id, bool encendido);
        int getId(){return id;}
        bool getEncendido(){return encendido;}
};
#endif