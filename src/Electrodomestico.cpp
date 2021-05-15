#include <iostream>
#include "../include/Electrodomestico.hpp"  

//Constructor Electrodomestico

Electrodomestico::Electrodomestico(int id, bool encendido) {
    this -> id = id;
    this -> encendido = encendido;
}