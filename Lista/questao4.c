#include <stdio.h>

int main()
{

    /* As atribuições ileguais serão as seguintes:
        p = i (Apesar de rodar no Qt, o ponteiro 'p' armazenou o 'i=2' como sendo endereço)
        i = (*&)j (Inválido o termo (*&) porque 'j' não é ponteiro)
        i = (*p)++ + *q
      */
    return 0;
}
