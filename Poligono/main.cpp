#include <iostream>
#include "ponto.h"
#include "poligono.h"
#include "retangulo.h"
using namespace std;

int main(void){
     Retangulo b(0,0,3,4);
     cout<<b.Area_Poli()<<endl;
     b.Transladar_Poli(-3,4);
     cout<<b.Area_Poli()<<endl;
     return 0;
}
