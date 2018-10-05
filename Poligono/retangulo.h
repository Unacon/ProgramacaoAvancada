#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
/**
 * @brief A classe retângulo é uma subclasse da classe polígono, que trabalha em um polígono
 * específico chamado Retângulo.
 */
class Retangulo : public Poligono{
private:
    //Largura do Retângulo
    float largura;
    //Altura do Retângulo
    float altura;
public:
    /**
     * @brief Retangulo Construtor da classe Retângulo.
     * @param _x Coordenada de X do canto superior esquerdo do Retângulo.
     * @param _y Coordenada de Y do canto superior esquerdo do Retângulo.
     * @param largura Largura do Retângulo.
     * @param altura Altura do Retângulo.
     * <pre>
     * OBS: A altura e largura devem ter valores maiores que 0.
     * </pre>
     * <pre>
     * int main(void){
     *      Retangulo b(0,0,3,4);
     *      b.Impri_Poli();
     * }
     * </pre>
     */
    Retangulo(float _x,float _y,float altura,float largura);
};

#endif // RETANGULO_H
