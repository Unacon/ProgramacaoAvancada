#include <iostream>
#include "retangulo.h"

Retangulo::Retangulo(int _xe, int _ye, int _larg, int _alt, int _fullmode, char _brush){
        xe=_xe;
        ye=_ye;
        larg=_larg;
        alt=_alt;
        brush=_brush;
        fullmode=_fullmode;
        if(fullmode!=0 && fullmode!=1){
            cout<<"Erro no fullmode\n";
            exit(0);
        }
}
//Verificar função
void Retangulo::draw(Screen &t){
    int i,j;
    t.setBrush(brush);
    if(fullmode==1){
        for(i=xe;i<xe+alt;i++){
            for(j=ye;j<ye+larg;j++){
                t.setPixel(i,j);
            }
        }
    }else
        for(i=0;i<alt;i++){
            for(j=0;j<=larg;j++){
                t.setPixel(xe+i,ye);
                t.setPixel(xe,ye+j);
                t.setPixel(xe+i,ye+larg);
                t.setPixel(xe+alt,ye+j);
            }
        }
}
