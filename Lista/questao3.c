#include <stdio.h>

int main()
{
    int i=4094, *p;
    p = &i;
    printf("%x %d %d %d %d\n", p,*p+2,**&p,3**p,**&p+4);
    /* No caso 'p' o valor é ffe pq o fator %x faz retornar um inteiro hexadecimal */
    /* No caso '*p+2', é computado o conteudo de 'p' e adicionado 2 unidades, resultando em 7 */
    /* No caso '**&p'recebe o conteudo do conteudo do endereço de 'p', que no final das contas
      será o próprio 'i' */
    /* No caso '3**p', ele pega o conteudo de 'p' e multiplica por '3' tendo o resultado '15'*/
    /* No caso '**&p+4', ele pega '**&p' que é igual ao 'i' e soma 4 unidades, resultando
      em 9 */
    return 0;
}
