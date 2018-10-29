#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "screen.h"
/**
 * @brief A classe FiguraGeometrica serve para facilitar na construção das figuras geométricas.
 */
class FiguraGeometrica{
private:       
public:    
    /**
     * @brief draw É uma função virtual pura.
     * @param t É a tela.
     */
    virtual void draw (Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
