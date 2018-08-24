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
#include "Ingredientes.h"
#include "Clientes.h"
void printIngredientes(vector<Ingredientes*>& ingredientes, vector<int>& cantidad);

int main(){
	cout << "Bienvenido al lab de Kenneth. " << endl;
	char resp = 's';
	while( resp == 'S' || resp == 's'){
		vector<Ingredientes*> bodega;
		vector<int> bodeganumerica;
		string input = "";
		string tipo = "";
		int type =  0; 
		cout << "1.	Ingresar a la bodega." << endl;
		cout << "2. Ingresar a ventas." << endl;
		cout << "3. Menu de platos. " << endl;
		cout << "4. Reg de clientes. " << endl;
		int option = 0;
		cin >> option;
		switch (option) {
				case 1:
						{
						cout << "Bienvenido a la bodega." << endl;
						cout << "1. Mostrar Ingredientes disponibles." << endl;
						cout << "2. Agregar Ingredientes al inventario." << endl;
						cout << "3. Insertar nuevo plato" << endl;
						int option2 = 0;
						cin >> option2;
						switch(option2){
							case 1:
									{
									cout << "Se imprimiran los ingredientes:" << endl;
									int temporal = 0;
									for (int i = 0; i < bodega.size(); ++i)
									{	
										temporal++;
										cout << temporal<<"."<<bodega[i] -> toString() <<":" << bodeganumerica[i]<< endl;
									}
									}
									break;
							case 2:
									{
									cout << "Ingrese el nombre del Ingrediente." << endl;
									cin >> input;
									cout << "Que tipo de Ingrediente es ? \n"
									<< "1. Lacteo. \n"
									<< "2. Vegetales \n"
									<< "3. Fruta \n"
									<< "4. otro." << endl;
									cin >> type;
									switch(type){
										case 1:
											tipo = "Lacteo";
											break;
										case 2:
											tipo = "Vegetales";
											break;
										case 3:
											tipo = "Fruta";
											break;
										case 4: 
											tipo = "Otro";
											break;
										default:
											cout << "Invalido. Se puso otro como default. " << endl;
											tipo = "Otro";
											break;
									}
									cout << "Ingrese el aporte de sabor (INT)" << endl;
									string aportesabor = "";
									int finalaportesabor = 0;
									cin >> aportesabor;
									stringstream stream;
									stream << aportesabor;
									stream >> finalaportesabor;
									cout << "Ingrese la duracion del producto (INT)" << endl;
									string duracionsabor = "";
									int finalduracionsabor = 0;
									cin >> duracionsabor;
									stream << duracionsabor;
									stream >> finalduracionsabor;
									cout << "Ingrese la cantidad del producto (INT)" << endl;
									string cantidadproducto = "";
									int finalcantidadproducto = 0;
									stream << cantidadproducto;
									stream >> finalcantidadproducto;
									Ingredientes* nuevo = new Ingredientes(input,tipo,finalaportesabor,finalduracionsabor,finalcantidadproducto); 
									bodega.push_back(nuevo);
									bodeganumerica.push_back(finalcantidadproducto);
									
									cout << "Creacion exitosa !" << endl;
								}
									break;
							case 3:
									{

									}
									break;
						}
						}	
						break;
				case 2:
						break;
				case 3:
						break;
				case 4:
						break;
				case 5:
						break;
				default:	
						cout << "Opcion Invalida." << endl;
						break;

		}


		cout << "Desea TERMINAR EL PROGRAMA (VOLVER AL MENU)? [S/N]" << endl;
		cin >> resp;
	}

	return 0;
}

void printIngredientes(vector<Ingredientes*>& ingredientes, vector<int>& cantidad){
	int temporal = 0;
	cout << "IMPRIMIENDO INGREDIENTES:" << endl;
	for (int i = 0; i < ingredientes.size(); ++i){
		temporal++;
		cout << temporal << ". " << ingredientes[i] -> toString() << cantidad[i] << endl;
	}
}
