#ifndef _TVECTORPORO_
#define _TVECTORPORO_
#include "tporo.hpp"
#include <iostream>


using namespace std;

class TVectorPoro
{
	private:
		int dimension;
		TPoro *datos;
		TPoro error;
		
	public:
	   // Constructor por defecto
       TVectorPoro();
       // Constructor a partir de una dimensi�n
       TVectorPoro(int);
       // Constructor de copia
       TVectorPoro(TVectorPoro &);
       // Destructor
       ~TVectorPoro();
       
       
    //METODOS
    
	// Sobrecarga del operador asignaci�n
	TVectorPoro & operator=(TVectorPoro &);
	
    // Sobrecarga del operador igualdad
	bool operator==(TVectorPoro &);
	
	// Sobrecarga del operador desigualdad
	bool operator!=(TVectorPoro &);
	
	// Sobrecarga del operador corchete (parte IZQUIERDA)
	TVectorPoro & operator[](int);
	
	// Sobrecarga del operador corchete (parte DERECHA)
	TVectorPoro operator[](int) const;

	
	// Devuelve la longitud (dimensi�n) del vector
	int Longitud();
	
	// Devuelve la cantidad de posiciones ocupadas (no vac�as) en el vector
	int Cantidad();
	
	// REDIMENSIONAR el vector de TPoro
	bool Redimensionar(int);
	
	// Sobrecarga del operador salida
	friend ostream & operator<<(ostream &, TVectorPoro &);
	
	
    
      		
};

#endif
