#include <iostream>
using std::endl;
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <sstream>
using std::stringstream;
#include "Ingredientes.h"

string Ingredientes::toString(){
	return nombre;
}

Ingredientes::Ingredientes(){

}

Ingredientes::Ingredientes(string pnombre, string ptipo, int paportes, int pduracion, int pcantidad){
	nombre = pnombre;
	tipo = ptipo;
	aportesabor = paportes;
	duracion = pduracion;
	cantidad = pcantidad;
}

string Ingredientes::getNombre(){
	return nombre;
}

int Ingredientes::getAportesabor(){
	return aportesabor;
}

int Ingredientes::getDuracion(){
	return duracion;
}

int Ingredientes::getCantidad(){
	return cantidad;
}

void Ingredientes::setCantidad(int pcant){
	cantidad = pcant;
}

void Ingredientes::setAportesabor(int paportesabor){
	aportesabor = paportesabor;
}

void Ingredientes::setDuracion(int pduraciones){
	duracion = pduraciones;
}
