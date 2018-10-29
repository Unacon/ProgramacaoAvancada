#include <cmath>
#include "reta.h"
#include "screen.h"

int Reta::Sinal(int x){
    if(x<0)return -1;
    if(x>0)return 1;
    else return 0;
}

Reta::Reta(int _xi, int _yi, int _xf, int _yf, char _brush){
    xi=_xi;
    yi=_yi;
    xf=_xf;
    yf=_yf;
    brush=_brush;
}
//Reavaliar método
void Reta::draw(Screen &t){
       float Delta_x,Delta_y,Temp,new_e;
       float x = xi;
       float y = yi;
       int s1,s2,Troca,i;
       t.setBrush(brush);
        Delta_x = abs(xf - xi);
        Delta_y = abs(yf - yi);
        s1=Sinal(xf - xi);
        s2=Sinal(yf - yi);
        if(Delta_y > Delta_x){
          Temp = Delta_x;
          Delta_x = Delta_y;
          Delta_y = Temp;
          Troca = 1;
        }
        else{
          Troca = 0;
        }
        new_e = 2*Delta_y - Delta_x;
        for(i=0; i<= Delta_x; i++){
          t.setPixel(x,y);
          while (new_e >= 0){
            if(Troca == 1){
              //Muda para a proxima linha de rasterização
              x = x + s1;
            }
            else{
              y = y + s2;
            }
            new_e = new_e - 2*Delta_x;
          }

          //Permanece nesta linha de rasterização
          if(Troca == 1){
            y = y + s2;
          }
          else{
            x = x + s1;
          }
          new_e= new_e + 2*Delta_y;
        }
}
