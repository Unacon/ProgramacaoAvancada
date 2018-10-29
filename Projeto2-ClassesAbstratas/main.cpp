#include <iostream>
#include<fstream>
#include <string>

#include "screen.h"
#include "reta.h"
#include "circulo.h"
#include "retangulo.h"
#include "ler_arq.h"

using namespace std;

int main(){
    ofstream saida;
    string caminho;
    FiguraGeometrica *Fig;
    Screen tela (20,20);
    Reta r(0,0,5,0,'-');
    Retangulo R(2,2,10,6,0,'o');
    Circulo C(10,10,4,1,'x');
    Fig=&r;    
    Fig->draw(tela);
    Fig=&R;
    Fig->draw(tela);
    Fig=&C;
    Fig->draw(tela);
    cout<<tela;
    caminho="C:/Users/Administrador/Documents/LerTeste.txt";
    Ler_arq(caminho);
    saida.open("C:/Users/Administrador/Documents/Teste.txt");
    if(!saida.is_open()){
        cout<<"ERROR\n";
        exit(0);
    }
    saida<<tela;
    saida.close();   
   // Ler_arq(caminho);
    return 0;
}
