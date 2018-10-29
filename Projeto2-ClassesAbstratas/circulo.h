#ifndef CIRCULO_H
#define CIRCULO_H

#include "figurageometrica.h"
#include "screen.h"
/**
 * @brief A classe Circulo é uma subclasse da FiguraGeometrica e serve para desenhar circunferência e círculos na tela
 */
class Circulo : public FiguraGeometrica{
private:
    int Xc,Yc,raio;
    int fullmode;
    char brush;
public:
    /**
     * @brief Circulo Circulo é o construtor da classe Circulo.
     * @param _xc É a coordenada X do centro da circunferência ou círculo.
     * @param _yc É a coordenada Y do centro da circunferência ou círculo.
     * @param _raio É o tamanho do raio.
     * @param fullmode Determinada se é círculo ou circunfêrencia.
     * @param _brush É o caractere a ser usado para desenhar.
     * <pre>
     * int main(void){
     *      Circulo x(10,10,5,1,'+');
     *      return 0;
     * }
     * </pre>
     */
    Circulo(int _xc, int _yc, int _raio, int fullmode, char _brush);
    /**
     * @brief draw É uma função que permite desenhar na tela.
     * @param t É a tela.
     * <pre>
     * int main(void){
     *      Circulo x(10,10,5,1,'+');
     *      Screen tela(20,20);
     *      x.draw(t);
     *      return 0;
     * }
     * </pre>
     */
    void draw(Screen &t);
    /**
     * @brief pontosdacircunferencia É a função que espelha os pontos do círculo
     * @param x É a coordenada x do ponto.
     * @param y É a coordenada y do ponto.
     * @param t É tela.
     * <pre>
     * Essa função é auxiliar da função draw.
     * </pre>
     */
    void pontosdacircunferencia(int x, int y, Screen &t);
    /**
     * @brief preencher É a função que preenche a circuferência, transformando em círculo.
     * @param t É a tela.
     * <pre>
     * Essa função é auxiliar da função draw.
     * </pre>
     */
    void preencher(Screen &t);
};

#endif // CIRCULO_H
