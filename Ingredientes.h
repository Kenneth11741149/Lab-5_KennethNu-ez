#ifndef INGREDIENTES_H
#define INGREDIENTES_H
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

class Ingredientes {
	private:
		string nombre;
		string tipo;
		int aportesabor;
		int duracion;
		int cantidad;
	public:
		Ingredientes();
		Ingredientes(string,string,int,int,int);
		string getNombre();
		int getAportesabor();
		int getDuracion();
		int getCantidad();
		void setCantidad(int);
		void setAportesabor(int);
		void setDuracion(int);
		string toString();



};

#endif
