#ifndef CLIENTES_H
#define CLIENTES_H
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
#include "Platos.h"

class Clientes{
	private:
		string nombre;
		int evaluacion;
		int totalgastado;
		vector<Platos*> platos;
		int cantidadplatos;

	public:
		Clientes();
		Clientes(int,int,vector<Platos*>,int);

		string getNombre();
		int getEvaluacion();
		int getTotalgastado();
		vector<Platos*> getPlatos();
		int getCantidadplatos();

		void setEvaluacion(int);
		void setTotalgastado(int);
		void setPlatos(vector<Platos*>);
		void Setcantidadplatos();
		string toString();
};

#endif