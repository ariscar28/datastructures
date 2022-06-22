#include "tporo.hpp"
#include "tvectorporo.hpp"

TPoro::TPoro():x(0), y(0), volumen(0), color(NULL){}

TPoro::TPoro(int x, int y, double volumen):x(x), y(y), volumen(volumen){}

TPoro::TPoro(int x, int y, double volumen, char *color):x(x), y(y), volumen(volumen), color(NULL){}

TPoro::TPoro(const TPoro &p)
{
   x = p.x;
   y = p.y;
   volumen = p.volumen;
   color = p.color;
}


// poner nombre a los params e implementarlos
TPoro & TPoro::operator=(TPoro & p )
{
   if (x != p.x && y != p.y && volumen != p.volumen && color != p.color)
   {
      if (p.x != 0) x = p.x;
      if (p.y != 0) y = p.y;
      if (p.volumen != 0) volumen = p.volumen;
      if (p.color != color) color = p.color; 
      
   }
   return p;
   
}
bool TPoro::operator==(TPoro &p)
{
   // if x == p.x && y(y) == p.y && volumen == p.volumen {
   //    // iterar color
   // }
   
   // int num = 1; // crear una variable num con el valor por defecto del tipo int y luego asignarle el 1.
   // num = 1;

   // int num2(1); // crear una variable int con valor 1
   // int num3{1}; // crear una variable int con valor 1

   // TPoro edad(num)
   // return p;
   return false;
}

bool TPoro::operator!=(TPoro & p)
{
   // char *c = "rojo";
   // cout << c; // direccion de memoria del primer elemento del array (direccion de r)
   // cout << *c; // accedemos al primer elemento del array (valor r)

   // char *z = "rosa";
   // if c == z; // false: valores de memoria diferentes direccion de R de rojo no es la misma que R de rosa.
   // if *c == *z; // true: r == r con *puntero cogemos SOLO el valor del primer elemento

   return false;
}


TPoro::~TPoro(){}

void TPoro::Posicion( int x, int y ) 
{ 
   this->x = x;
   this->y = y;
}


void TPoro::Volumen(double &volumen)
{
   this->volumen = volumen;
}

// Falta nombre de parámetro.
// Hay que hacer una copia del puntero que se recibe de parámetro, no asignarlo directamente
// al asignarlo directamente tenemos 2 punteros apuntando al mismo sitio de memoria (LO CUAL ESTA MAL)
void TPoro::Color(char *color)
{  

}


// 1. borrar memoria de this->color si la tuviera reservada
// 2. reservar nueva memoria del mismo tamaño del color parametro + 1
// 3. iterar uno a uno los chars de color param para asignarlo a this->color
// 4. el ultimo elemento, despues de color param, hay que ponerlo a /0 "rojo/0"
//color = *color;


// Falta implementarlo
bool TPoro::EsVacio()
{ 
   return (color == NULL && x == 0 && y == 0);
}

ostream & operator<<(ostream &os,  TPoro &poro)
{
   if(!poro.EsVacio())
   {
      os.setf(ios::fixed);
      os.precision( 2 );
      os<<"("<<poro.x<<", "<<poro.y<<") "<<poro.volumen<<" ";
      if(poro.color!=NULL)
         os<<poro.color;
      else
         os<<"-";
   } else
      os << "()";

   return os;
}

int TPoro::PosicionX()
{
   return x;
}

int TPoro::PosicionY()
{
   return y;   
}

double TPoro::Volumen()
{
   return volumen;
}

char * TPoro::Color()
{
   return color;
}

