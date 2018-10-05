#include "retangulo.h"
#include <iostream>
using namespace std;
Retangulo::Retangulo(float _x, float _y, float altura, float largura){
    if(altura<1 || largura<1){
        cout<<"ERROR: Altura ou Largura inexistente.\n";
        return;
    }
        Inserir_Vert(_x,_y);
        Inserir_Vert(_x,_y-altura);
        Inserir_Vert(_x+largura,_y-altura);
        Inserir_Vert(_x+largura,_y);
        }
