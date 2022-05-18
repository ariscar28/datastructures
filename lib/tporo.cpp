#include <tporo.h>

TPoro::TPoro():x(0), y(0){
    x = 0;
    y = 0;
    volumen = 0;
    color = NULL;
}

TPoro::TPoro(int x,int posy, double _volumen){
    this->x = x;
    y = posy;
    volumen = _volumen;
}

TPoro::TPoro(int posx,int posy,double _volumen,char *color): x(posx)..., {
 
}
