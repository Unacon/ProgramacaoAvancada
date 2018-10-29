#include "circulo.h"
#include <iostream>
#include <cmath>
Circulo::Circulo(int _xc, int _yc, int _raio, int _fullmode, char _brush){
    Xc=_xc;
    Yc=_yc;
    raio=_raio;
    brush=_brush;
    fullmode=_fullmode;
    //circ = 1 é preenchido
    //circ = 0 é contorno
    if(fullmode!=0 && fullmode!=1){
        cout<<" Erro no modo do circulo\n";
        exit(0);
    }
}

void Circulo::pontosdacircunferencia(int x, int y,Screen &t){
        t.setPixel(Xc+x,Yc+y);
        t.setPixel(Xc-x,Yc+y);
        t.setPixel(Xc-y,Yc+x);
        t.setPixel(Xc-y,Yc-x);
        t.setPixel(Xc-x,Yc-y);
        t.setPixel(Xc+x,Yc-y);
        t.setPixel(Xc+y,Yc-x);
        t.setPixel(Xc+y,Yc+x);
}

void Circulo::preencher( Screen &t){
int i,j;
t.setBrush(brush);
if(fullmode==1){
    for(i=(Xc-raio);i<=(Xc+raio);i++){
            for(j=(Yc-raio);j<=(Yc+raio);j++){
                if( (i-Xc)*(i-Xc)+(j-Yc)*(j-Yc) <= (raio*raio)){
                    t.setPixel(i,j);
                }
            }
        }
    }

}
void Circulo::draw(Screen &t){     
     int x,y,d;
     preencher(t);
     x = 0;
     y = raio;
     d = 1 - raio;
     pontosdacircunferencia(x,y,t);
     while(y > x){
       if(d < 0){
         d = d + 2*x + 3;
         x = x + 1;
       }
       else{
         d = d + 2*(x-y) + 5;
         x = x + 1;
         y = y - 1;
       }
       pontosdacircunferencia(x,y,t);
     }
}

