#ifndef SCREEN_H
#define SCREEN_H

#include <vector>
#include<ostream>

using namespace std;
/**
 * @brief A classe Screen é a tela a ser desenhada.
 */
class Screen{
private:
  // armazenam o tamanho da tela de desenho
  // no de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;  
  // armazena a matriz da tela
  vector< vector<char> > mat;
public:
  /**
   * @brief Screen É o construtor da classe Screen.
   * @param _nlin É a quantidade de linhas da tela.
   * @param _ncol É a quantidade de colunas da tela.
   */
  Screen(int _nlin, int _ncol);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  /**
   * @brief setPixel É uma função para desenhar na tela.
   * @param x É a posição x a ser desenhada.
   * @param y É a posição y a ser desenhada.
   * <pre>
   * int main(void){
   *    Screen tela(20,20);
   *    tela.setPixel(10,10);
   *    return 0;
   * }
   * </pre>
   */
  void setPixel(int x, int y);

  // limpa a tela
  /**
   * @brief clear É a função de limpar a tela.
   * <pre>
   * int main(void){
   *    Screen tela(20,20);
   *    tela.clear;
   *    return 0;
   * }
   * </pre>
   */
  void clear();

  // muda o caractere de desenho
  /**
   * @brief setBrush É a função de mudar o caractere para desenho.
   * @param _brush É o novo caractere.
   * <pre>
   * int main(void){
   *    Screen tela(20,20);
   *    tela.setBrush('+');
   *    return 0;
   * }
   * </pre>
   */
  void setBrush(char _brush);

  // envia a tela para um stream de saida
  /**
   * @brief operator << É o operador sobrecarregado para imprimir a tela no terminal.
   * @param os É o ostream de saída.
   * @param t É a tela.
   * @return Retorna o endereço do ostream.
   * <pre>
   * int main(void){
   *    Screen tela(20,20);
   *    cout<<tela;
   *    return 0;
   * }
   * </pre>
   */
  friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
