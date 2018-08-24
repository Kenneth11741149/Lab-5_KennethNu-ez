#ifndef PLATOS_H
#define PLATOS_H
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
class Platos{
	private:
	string nombre;
	vector<Ingredientes*> ingredientes;
	vector<int> cantingredientes;
	string review;
	int vecescocinado;
	int precio;
	int promvaloracion;

	public:
	Platos();
	Platos(string,vector<Ingredientes*>,vector<int>,string,int,int, int);
	string getNombre();
	vector<Ingredientes*> getingredientes();
	vector<int> getcantingredientes();
	int getvecescocinado();
	int getprecio();
	int getpromvaloracion();
	void setvecescocinado(int);
	void setprecio(int);
	void setpromvaloracion(int);
	string toString();




};
#endif
