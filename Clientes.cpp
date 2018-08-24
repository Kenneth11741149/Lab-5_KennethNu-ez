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
#include "Clientes.h"
#include "Platos.h"

Clientes::Clientes(){

}

Clientes::Clientes(int pevaluacion, int ptotalgastado, vector<Platos*> pplatos, int pcantidadplatos){
	evaluacion = pevaluacion;
	totalgastado = ptotalgastado;
	platos = pplatos;
	cantidadplatos = pcantidadplatos;
}

string Clientes::toString(){
		string retVAl = "";
		retVAl = getNombre();
		return retVAl;
}

int Clientes::getEvaluacion(){
	return evaluacion;
}

int Clientes::getTotalgastado(){
	return totalgastado;
}

vector<Platos*> Clientes::getPlatos(){
	return platos;
}

int Clientes::getCantidadplatos(){
	return cantidadplatos;
}

void Clientes::setEvaluacion(int pevaluaciones){
	evaluacion = pevaluaciones;
}	

void Clientes::setTotalgastado(int pgastado){
	totalgastado = pgastado;
}

void Clientes::setPlatos(vector<Platos*> pplates){
	platos = platos;
}

void Clientes::Setcantidadplatos(){
	cantidadplatos++;
}



