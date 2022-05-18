#ifndef _TPORO_
#define _TPORO_

#include <iostream>
#include <string>

using namespace std;

class TPoro {
    private:
        int x, y;
        double volumen;
        char *color;
    public:
        TPoro();
        TPoro(int,int , double);
        TPoro(int,int,double,char*);
        ~TPoro();
        TPoro(TPoro &);
        TPoro & operator=(TPoro &);

};

#endif