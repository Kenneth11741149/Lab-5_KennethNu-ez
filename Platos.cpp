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
#include "Platos.h"

string Platos::toString(){
		string nombre = "";
		stringstream stream;
		stream << getNombre();
		stream >> nombre;
		return nombre;
}

Platos::Platos(){

}

Platos::Platos(string pnombre,vector<Ingredientes*> pingredientes, vector<int> pcantingredientes,string preview,int pvecescocinado,int pprecio,int ppromvaloracion){
	nombre = pnombre;
	ingredientes = pingredientes;
	cantingredientes = pcantingredientes;
	review = preview;
	vecescocinado = pvecescocinado;
	precio = pprecio;
	promvaloracion = ppromvaloracion;
}

string Platos::getNombre(){
	stringstream stream;
	stream << getNombre();
	string retVal;
	stream >> retVal;
	return retVal;
}

vector<Ingredientes*> Platos::getingredientes(){
	return ingredientes;
}

vector<int> Platos::getcantingredientes(){
	return cantingredientes;
}

int Platos::getvecescocinado(){
	return vecescocinado;
}

int Platos::getprecio(){
	return precio;
}

int Platos::getpromvaloracion(){
	return promvaloracion;
}

void Platos::setvecescocinado(int pveces){
	vecescocinado = pveces;
}
void Platos::setprecio(int pprecio){
	precio = pprecio;
}
void Platos::setpromvaloracion(int ppromedio){
	promvaloracion = ppromedio;
}
