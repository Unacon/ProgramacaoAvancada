#ifndef PONTO_H
#define PONTO_H

/**
 * @brief A classe Ponto serve para armazenar as coordenadas
 * x e y de um ponto no plano cartesiano.
 */
class Ponto{
private:
    //Coordenada X do ponto.
    float x;
    //Coordenada Y do ponto.
    float y;
public:
    /**
     * @brief Ponto é um construtor da classe.
     * <pre>
     * int main(void){
     *      Ponto p;
     * }
     * </pre>
     */
    Ponto();
    /**
     * @brief Ponto é um construtor da classe
     * @param _x é o valor inicial da coordenada X do ponto.
     * @param _y é o valor inicial da coordenada Y do ponto.
     * <pre>
     * int main(void){
     *      Ponto p(0,5);
     *      p.imprime();
     * }
     * </pre>
     */
    Ponto(int _x,int _y);
    /**
     * @brief SetX Recebe do usuário a coordenada X do ponto.
     * @param _x é o novo valor da coordenada X.
     * <pre>
     * int main(void){
     *      Ponto p;
     *      p.SetX(10);
     *      p.imprime();
     * }
     * </pre>
     */
    void SetX(float _x);
    /**
     * @brief SetY Recebe do usuário a coordenada Y do ponto.
     * @param _y é o novo valor da coordenada Y.
     * <pre>
     * int main(void){
     *      Ponto p;
     *      p.SetY(10);
     *      p.imprime();
     * }
     * </pre>
     */
    void SetY(float _y);
    /**
     * @brief SetXY Recebe do usuário respectivamente as coordenadas X e Y do ponto.
     * @param _x é o novo valor da coordenada X do ponto.
     * @param _y é o novo valor da coordenada Y do ponto.
     * <pre>
     * int main(void){
     *      Ponto p;
     *      p.SetXY(10,5);
     *      p.imprime();
     * }
     * </pre>
     */
    void SetXY(float _x,float _y);
    /**
     * @brief Getx Recupera o valor da coordenada X do ponto.
     * @return o valor da coordenada X do ponto.
     * <pre>
     * int main(void){
     *    Ponto e;
     *    cout << e.Getx()<<endl;;
     * }
     * </pre>
     */
    float Getx();
    /**
     * @brief Gety Recupera o valor da coordenada Y do ponto.
     * @return o valor da coordenada Y do ponto.
     * <pre>
     * int main(void){
     *    Ponto e;
     *    cout << e.Gety()<<endl;;
     * }
     * </pre>
     */
    float Gety();
    /**
     * @brief add Adiciona as coordenadas do ponto com um novo ponto.
     * @param p É o novo ponto a ser adicionado.
     * @return Um ponto cuja é o resultado da adição entre os dois pontos.
     * <pre>
     * int main(void){
     *      Ponto p(0,-6),a(2,6),R;
     *      R = p.add(a);
     *      R.imprime();
     * }
     * </pre>
     */
    Ponto add(Ponto p);
    /**
     * @brief sub Subtrai as coordenadas do ponto com um novo ponto.
     * @param p É o ponto a ser subtraido.
     * @return Um ponto cuja o resultado é a subtração entre os dois pontos.
     * <pre>
     * int main(void){
     *      Ponto k(0,-6),p(2,6),R;
     *      R = k.sub(p);
     *      R.imprime();
     * }
     * </pre>
     */
    Ponto sub(Ponto p);
    /**
     * @brief norma Calcula a distância do ponto até a origem do sistema de coordenadas.
     * @return O valor da distância entre o ponto e a origem.
     * <pre>
     * int main(void){
     *      Ponto a(4,3);
     *      cout<<a.norma<<endl;
     * }
     * </pre>
     */
    float norma();
    /**
     * @brief Translada Desloca o ponto em 'a' unidade(s) para X e 'b' unidade(s) para Y.
     * @param a Quantidade de unidades deslocada(s) na coordenada X.
     * @param b Quantidade de unidades deslocada(s) na coordenada Y.
     * <pre>
     * int main(void){
     *      Ponto p(2,2);
     *      p.translada(-2,-2);
     *      p.imprime();
     * }
     * </pre>
     */
    void translada(float a, float b);
    /**
     * @brief imprime As coordenadas do ponto na forma (X,Y).
     * <pre>
     * int main(void){
     *      Ponto p(50,4);
     *      p.imprime();
     * }
     * </pre>
     */
    void imprime();
};

#endif // PONTO_H
