#ifndef RETA_H
#define RETA_H

#include "FiguraGeometrica.h"
#include "screen.h"
/**
 * @brief A classe Reta é uma subclasse da FiguraGeometrica e desenha reta na tela.
 */
class Reta : public FiguraGeometrica{
private:
    int xi,yi,xf,yf;
    char brush;
    int Sinal(int x);
public:
    /**
     * @brief Reta É o construtor da classe Reta.
     * @param _xi É o x inicial da reta.
     * @param _yi É o y inicial da reta
     * @param _xf É o x final da reta.
     * @param _yf É o y final da reta.
     * @param _brush É o caractere a ser usado para desenhar.
     * <pre>
     * int main(void){
     *      Reta x(0,0,5,5,'*');
     *      return 0;
     * }
     * </pre>
     */
    Reta(int _xi, int _yi, int _xf, int _yf,char _brush);
    /**
     * @brief draw É uma função que permite desenhar na tela.
     * @param t É a tela.
     * <pre>
     * int main(void){
     *      Reta x(0,0,5,5,'*');
     *      Screen tela(20,20);
     *      x.draw(tela);
     *      return 0;
     * }
     * </pre>
     */
    void draw(Screen &t);
};

#endif // RETA_H
