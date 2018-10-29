#include "screen.h"
#include <iostream>
using namespace std;

Screen::Screen(int _nlin, int _ncol){   
    nlin=_nlin;
    ncol=_ncol;
    mat = vector< vector<char> >(nlin, vector<char>(ncol, ' '));
}
void Screen::setPixel(int x, int y){
    if(x>=0 && x<nlin && y<ncol & y>=0){
    mat[x][y]=brush;
    }
}

void Screen::clear(){
    int i,j;
    for(i=0;i<nlin;i++){
        for(j=0;j<ncol;j++){
            mat[i][j]=' ';
        }
    }
}

void Screen::setBrush(char _brush){
    brush=_brush;
}

ostream& operator<<(ostream &os, Screen &t){
    int i,j=0;
    for(i=0;i<t.nlin;i++){
        for(j=0;j<t.ncol;j++){
        os<<t.mat[i][j];
        }
    os<<endl;
    }
return os;
}

