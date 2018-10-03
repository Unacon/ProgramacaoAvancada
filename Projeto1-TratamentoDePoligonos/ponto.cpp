#include "ponto.h"
#include <iostream>
#include <math.h>
using namespace std;
Ponto::Ponto(){
}
Ponto::Ponto(int _x, int _y){
x=_x;
y=_y;
}
void Ponto::SetX(float _x){
    x=_x;
}
void Ponto::SetY(float _y){
    y=_y;
}
void Ponto::SetXY(float _x,float _y){
    x=_x;
    y=_y;
}
float Ponto::Getx(){
    return x;
}
float Ponto::Gety(){
    return y;
}
Ponto Ponto::add(Ponto p){
    Ponto k;
    k.SetXY(x+p.Getx(),y+p.Gety());
    return k;
}

Ponto Ponto::sub(Ponto p){
    Ponto k;
    k.SetXY(x-p.Getx(),y-p.Gety());
    return k;
}
float Ponto::norma(){
    return sqrt(x*x+y*y);
}
void Ponto::translada(float a, float b){
    SetXY(x+a,y+b);
}
void Ponto::imprime(){
    cout<<"("<<Getx()<<", "<<Gety()<<")"<<endl;
}
