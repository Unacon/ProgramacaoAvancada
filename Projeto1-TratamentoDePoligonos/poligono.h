#ifndef POLIGONO_H
#define POLIGONO_H
#include <ponto.h>
/**
 * @brief A classe Poligono serve para representar
 * polígono convexos de no máximo 100 vértices.
 */
class Poligono{
private:
    //Ponteiro para armazenar as coordenadas X dos vértices do polígono.
    float *x;
    //Ponteiro para armazenar as coordenadas Y dos vértices do polígono.
    float *y;
    //Um contador de vértices do polígono.
    int i=0;
public:
    /**
     * @brief Poligono Contrutor do classe Poligono, o mesmo cria dois ponteiros
     * x e y do tipo float com tamanho 100.
     * <pre>
     * int main(void){
     *      Poligono J;
     * }
     * </pre>
     */
    Poligono();
    /**
     * @brief Inserir_Vert Inseri um ponto com coordenadas X e Y no vertíce do polígono.
     * @param P É o ponto a ser inserido.
     * <pre>
     * OBS: Cada vez que esse função é chamada, o contador 'i' incrementa uma unidade.
     * </pre>
     * <pre>
     * int main(void){
     *      Ponto p(10,10);
     *      Poligono J;
     *      J.Inserir_Vert(p);
     * </pre>
     */
    void Inserir_Vert(Ponto P);
    /**
     * @brief Inserir_Vert Inseri as coordenadas X e Y no vertíce do polígono.
     * @param _x É a coordenada X do vertíce.
     * @param _y É a coordenada Y do vertíce.
     * <pre>
     * OBS: Cada vez que esse função é chamada, o contador 'i' incrementa uma unidade.
     * </pre>
     * <pre>
     * int main(void){
     *      Poligono J;
     *      J.Inserir_Vert(10,10);
     *      J.Impri_Poli();
     * }
     * </pre>
     */
    void Inserir_Vert(float _x,float _y);
    /**
     * @brief Quant_Vert Calcula a quantidade de vertíces que o polígono possui.
     * @return O número de vertíces.
     * <pre>
     * int main(void){
     *      Poligono k;
     *      k.Inserir_Vert(10,10);
     *      k.Inserir_Vert(0,2);
     *      cout<<k.Quant_Vert()<<endl;
     * }
     * </pre>
     */
    int Quant_Vert();
    /**
     * @brief Impri_Poli Imprime polígono da forma (x0,y0)-->(x1,y1)-->(x2,y2)-->(xN-1,yN-1)-->(x0,y0).
     * <pre>
     * int main(void){
     *      Poligono k;
     *      k.Inserir_Vert(10,10);
     *      k.Inserir_Vert(0,2);
     *      k.Impri_Poli();
     * }
     * </pre>
     */
    void Impri_Poli();
    /**
     * @brief Transladar_Poli Translada o polígono em 'a' unidade(s) para X e 'b' unidade(s) para Y.
     * @param a Quantidade de unidade(s) deslocada(s) em X.
     * @param b Quantidade de unidade(s) deslocada(s) em Y.
     * <pre>
     * int main(void){
     *      Poligono k;
     *      k.Inserir_Vert(10,10);
     *      k.Inserir_Vert(0,2);
     *      k.Inserir_Vert(5,2);
     *      k.Inserir_Vert(-3,2);
     *      cout<<"Antes de Transladar : ";
     *      k.Impri_Poli();
     *      k.Transladar_Poli(-4,-7);
     *      cout<<"Depois de Transladar : ";
     *      k.Impri_Poli();
     * }
     * </pre>
     */
    void Transladar_Poli(float a, float b);
    /**
     * @brief Rotacionar_Poli Rotaciona o polígono em 'Theta' graus em torno da coordenada _x e _y;
     * @param Theta Quantidade em graus a ser rotacionada.
     * @param _x Coordenada X na qual será a coordenada de origem da rotação.
     * @param _y Coordenada Y na qual será a coordenada de origem da rotação.
     * <pre>
     * int main(void){
     *      Poligono k;
     *      k.Inserir_Vert(10,10);
     *      k.Inserir_Vert(0,2);
     *      k.Inserir_Vert(5,2);
     *      k.Inserir_Vert(-3,2);
     *      k.Rotacionar_Poli(45,5,5);
     *      k.Impri_Poli();
     * }
     * </pre>
     */
    void Rotacionar_Poli(double Theta, float _x, float _y);
    /**
     * @brief Area_Poli Calcula a área do polígono convexo.
     * @return O valor da área do polígono.
     * <pre>
     * int main(void){
     *      Poligono k;
     *      k.Inserir_Vert(10,10);
     *      k.Inserir_Vert(0,2);
     *      k.Inserir_Vert(5,2);
     *      cout<<k.Area_Poli()<<endl;
     * }
     * </pre>
     */
    float Area_Poli();
};

#endif // POLIGONO_H
