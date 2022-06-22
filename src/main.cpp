#include <iostream>
#include <tporo.hpp>
#include <tvectorporo.hpp>
#include <sstream>
#include <string>
//#include <ctring>
using namespace std;
int main()
{
    TPoro p11 ();
    TPoro p22 (1,2, 0.0f);
    TPoro p33 (1, 2, 3.0f);
    TPoro p44 (2, 3, 4, (char*)"rojo");
    
    TPoro p1;    
    p1.Posicion(10, 15);
    double num = 3.5;
    p1.Volumen(num);
    p1.Color((char*)"blue");

    cout <<p1<<endl;

    system("pause");
    return 0;
}

