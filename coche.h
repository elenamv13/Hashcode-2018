#ifndef COCHE
#define COCHE

#include <list>
#include "coordenadas.hpp"

using namespace std;
const int MAX=1000;

class coche{

private:
	int filaActual;
	int columActual;
	//-------------
	int numRides;
	coordenadas orden[MAX];
	

public:
	coche(){
		filaActual=0;
		columActual=0;
		numRides=0;
		indice=0;
	}
	void nuevoTrayecto(coordenadas c){
		numRides++;
		dameCoord(filaActual, columActual);
	}
	/*int calcularDistancia(){

	}*/
	
	
};


#endif
