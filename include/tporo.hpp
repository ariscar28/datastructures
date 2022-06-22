#ifndef _TPORO_
#define _TPORO_
#include <iostream>
#include <string>

using namespace std;

class TPoro 
{
    friend ostream & operator<<(ostream &o, TPoro & p);

    private:
        int x, y;
        double volumen;
        char* color;

    public:
        TPoro();
        TPoro(int, int, double);
        TPoro(int, int, double, char*);
        TPoro(const TPoro &);
        ~TPoro();

         //operadores miembros
        TPoro & operator=(TPoro &);
        bool operator==(TPoro &);
        bool operator!=(TPoro &);

        
        void Posicion(int, int);
        void Volumen(double &);
        void Color(char *);
        bool EsVacio();
        int PosicionX();
        int PosicionY();
        double Volumen();
        char* Color();


};

#endif
