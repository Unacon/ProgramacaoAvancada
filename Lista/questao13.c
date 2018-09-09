#include <stdio.h>

int soma (int x, int y){
    return x+y;
}
int soma2(int(*p)(int,int),int x,int y){
    return p(x,y);
}
int main()
{
    int x,y,z,z2;
    /* Um ponteiro para função é um ponteiro que aponta para a função e facilita na chamada
     * e alteração da mesma */
    int (*p)(int,int);
    scanf("%d %d",&x,&y);
    p = soma;
    z=p(x,y);
    printf("%d\n",z);
    z2=soma2(soma,x,y);
    printf("%d\n",z2);
    return 0;
}
