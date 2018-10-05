#include "poligono.h"
#include "ponto.h"
#include <iostream>
#include <cmath>
#define PI  3.14159265
using namespace std;
Poligono::Poligono(){
    x=new float[100];
    if(x==nullptr){
        cout<<"Error no X"<<endl;
        exit(0);
    }
    y=new float[100];
    if(y==nullptr){
        cout<<"Error no X"<<endl;
        exit(0);
    }
}
void Poligono::Inserir_Vert(Ponto P){
    int k;
    for(k=0;k<i;k++){
        if(x[k]==P.Getx() && y[k]==P.Gety()){
            cout<<"Voce ja inseriu esse vertice ("<<P.Getx()<<", "<<P.Gety()<<")."<<endl;
            return;
        }
    }
    x[i]=P.Getx();
    y[i]=P.Gety();
    i++;
}

void Poligono::Inserir_Vert(float _x, float _y){
    int k;
    for(k=0;k<i;k++){
        if(x[k]==_x && y[k]==_y){
            cout<<"Voce ja inseriu esse vertice ("<<_x<<", "<<_y<<")."<<endl;
            return;
        }
    }
    x[i]=_x;
    y[i]=_y;
    i++;
}

int Poligono::Quant_Vert(){
return i;
}

void Poligono::Impri_Poli(){
    int j=0;
    for(j=0;j<i;j++){
        cout<<"("<<x[j]<<", "<<y[j]<<")"<<"--> ";
    }
    cout<<"("<<x[0]<<", "<<y[0]<<")\n";
}

void Poligono::Transladar_Poli(float a, float b){
    int j=0;
    if(i<3){
        cout<<"Erro: Seu poligono possui menos de 3 vertices,por causa disso ainda nao eh considerado poligono.\n";
        return;
    }
    for(j=0;j<i;j++){
    x[j]+=a;
    y[j]+=b;
}
}

void Poligono::Rotacionar_Poli(double Theta, float _x, float _y){
     float p;
     int j;
     if(i<3){
         cout<<"Erro: Seu poligono possui menos de 3 vertices,por causa disso ainda nao eh considerado poligono.\n";
         return;
     }
     Theta=(Theta*PI)/180.0;
     Transladar_Poli(-_x,-_y);
     Impri_Poli();
     for(j=0;j<i;j++){      
       p=x[j]*cos(Theta) - y[j]*sin(Theta);
       y[j]=x[j]*sin(Theta) + y[j]*cos(Theta);
       x[j]=p;
    }
     Transladar_Poli(_x,_y);
}

float Poligono::Area_Poli(){
    float M=0,N=0;
    int l;
   if(i<3){
       cout<<"Erro: Seu poligono possui menos de 3 vertices,por causa disso ainda nao eh considerado poligono.\n";
       return -1;
    }
    for(l=0;l<i;l++){
        M+=x[l]*y[l+1];
                if(l==i-1){
                   M+=x[l]*y[0];
                }
    }
    for(l=0;l<i;l++){
        N+=y[l]*x[l+1];
                if(l==i-1){
                   N+=y[l]*x[0];
                }
    }
    return fabs(M-N)/2;
}
