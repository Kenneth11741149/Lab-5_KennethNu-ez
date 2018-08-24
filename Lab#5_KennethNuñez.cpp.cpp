#include <iostream>
using std::endl;
using std::cin;
using std::cout;

#include <string>
using std::string

#include <vector>
using std::vector;

#include <sstream>
using std::stringstream;

int main(){
	cout << "Bienvenido al lab de Kenneth. " << endl;
	char resp = 's';
	while( resp == 'S' || resp == 's'){

		string option = "";
		swtich(option){
				case 1:
						break;
				case 2:
						break;
				default:	
						cout << "Opcion Invalida." << endl;
						break;

		}


		cout << "Desea volver al menu? [S/N]" << endl;
		cin >> resp;
	}

	return 0;
}
