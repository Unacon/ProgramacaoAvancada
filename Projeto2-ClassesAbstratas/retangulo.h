#ifndef RETANGULO_H
#define RETANGULO_H

#include "screen.h"
#include "figurageometrica.h"
/**
 * @brief A classe Retangulo é uma subclasse da FiguraGeometrica e desenha retângulo na tela.
 */
class Retangulo: public FiguraGeometrica{
private:
    int xe,ye,larg,alt;
    int fullmode;
    char brush;
public:
    /**
     * @brief Retangulo É o construtor da classe Retangulo.
     * @param _xe É o x do canto superior esquerdo do retângulo.
     * @param _ye É o y do canto superior esquerdo da retângulo.
     * @param _larg É a largura do retângulo.
     * @param _alt É a altura do retângulo.
     * @param fullmode Determinada se o retângulo será preenchido.
     * @param _brush É o caractere a ser usado para desenhar.
     * <pre>
     * int main (void){
     *      Retangulo x(0,0,5,5,1,'p');
     *      return 0;
     * }
     * </pre>
     */
    Retangulo(int _xe,int _ye,int _larg,int _alt,int fullmode,char _brush);
    /**
     * @brief draw É a função para desenhar na tela.
     * @param t É a tela.
     * <pre>
     * int main (void){
     *      Retangulo x(0,0,5,5,1,'p');
     *      Screen tela(20,20);
     *      x.draw(tela);
     *      return 0;
     * }
     * </pre>
     */
    void  draw(Screen &t);
};

#endif // RETANGULO_H
