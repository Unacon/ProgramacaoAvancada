#include <stdio.h>

int main()
{
    int i=3,j=5;
    int k;
    int *p, *q;
    p = &i;
    q = &j;
    printf("i = %p\n", p);
    /* No caso 'p == &i', a variavel ponteiro 'p' é o valor do endereço
      do inteiro i, tendo o endereço na maquina onde foi feito o procedimento
     de 0028FEB4 */
    /* No caso '*p - *q', irá ocorrer uma subtração do conteudo da variavel 'p'
     com o conteudo da variavel 'q' e essa operação será igual a '-2' */
    /* No caso **&p, ele irá pegar o conteudo do conteudo do endereço de 'p',
     que o conteudo do endereço de 'p' é o endereço  do 'i' e pegando o conteudo
     do endereço de 'i', temos o valor '3'*/
    k=**&p;
    printf("k = %d\n", k);
    /* No caso '3 - *p/(*q) + 7', vai haver uma divisão do conteudo de 'p' com
     o conteudo de 'q', resultando em '0' pq '3/5' em inteiros é '0'
     e posteriormente o restante dos calculos */
    k=3 - *p/(*q) + 7;
    printf("k = %d\n", k);
    return 0;
}
