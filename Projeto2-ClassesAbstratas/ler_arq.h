#ifndef LER_ARQ_H
#define LER_ARQ_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "screen.h"
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

//Continuar Ler_arq.
void Ler_arq(string caminho){
    ifstream entrada;
    string linha;
    string cmd;
    stringstream ss;
    FiguraGeometrica *Fig;
    char brush;
    int larg, alt,fillmode;
    int x0,y0,x1,y1;
    entrada.open(caminho);
    if(!entrada.is_open()){
        cout<<"Arquivo nao foi aberto\n";
        exit(0);
    }
    if(entrada.good()){
        getline(entrada,linha);
        ss = stringstream(linha);
        ss >> cmd;
        if(cmd.compare("dim") == 0){
            ss >> larg>>alt;
        }
    }
    // Screen(int _nlin, int _ncol);
    Screen tela(alt,larg);
    while(entrada.good()){
        getline(entrada,linha);
        ss = stringstream(linha);
        ss >> cmd;
        if(cmd.compare("line")==0){
            ss>>x0>>y0>>x1>>y1>>brush;
            Reta r(x0,y0,x1,y1,brush);
            Fig=&r;
            Fig->draw(tela);
        }
        if(cmd.compare("rectangle")==0){
            ss>>x0>>y0>>larg>>alt>>fillmode>>brush;
            Retangulo R(x0,y0,larg,alt,fillmode,brush);
            Fig=&R;
            Fig->draw(tela);
        }
        if(cmd.compare("circle")==0){
            int raio;
            ss>>x0>>y0>>raio>>fillmode>>brush;
            Circulo C(x0,y0,raio,fillmode,brush);
            Fig=&C;
            Fig->draw(tela);
        }
    }
    cout<<tela;
    entrada.close();
}

#endif // LER_ARQ_H
