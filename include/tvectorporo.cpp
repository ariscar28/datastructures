#include "tporo.hpp"
#include "tvectorporo.hpp"

  // Constructor por defecto
       TVectorPoro::TVectorPoro():dimension(0){}
       // Constructor a partir de una dimension
       TVectorPoro::TVectorPoro(int dimension):dimension(dimension){}
       // Constructor de copia
       TVectorPoro::TVectorPoro(TVectorPoro &p)
       {
          dimension= p.dimension;
       }
       
       /*// Destructor 
       ~TVectorPoro();
       
       
    //METODOS
    
	// Sobrecarga del operador asignacion
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
	friend ostream & operator<<(ostream &, TVectorPoro &);*/
	