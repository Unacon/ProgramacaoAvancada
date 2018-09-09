#include <stdio.h>
#include <stdlib.h>
int compara(const void * a, const void * b){
    if(*(float*)a > *(float*)b){//Caso a>b, retorna 1 e a função qsort
        return 1;//entende que 'a' deve ir depois de 'b'
    }else if(*(float*)a < *(float*)b){//Caso a>b, retorna 1 e
        return -1;//a função qsort entende que 'a' deve ir antes de 'b'
    }else{//Aqui é caso 'a' seja igual a 'b'
        return 0;
    }
}
int main()
{
    float *x;//Criação do um vetor
    int n,i;//Crianção de 2 inteiros
    printf("Digite a quantidade : ");
    scanf("%d",&n);//Tamanho do vetor
    x=(float*)malloc(n*sizeof(float));//Alocação dinamica de memória
    if(x==NULL){//Verificação de espaço na memória
        printf("Memoria insuficiente\n");
        exit(0);
    }
    srand(time(NULL));//Resetador de aleatoriedade
    for(i=0;i<n;i++){//Criando números aleatórios no ponteiro
        x[i]=rand()%10;
        printf("x[%d]=%.1f ; ",i,x[i]);
    }
    printf("\n");
    qsort(x,n,sizeof(float),compara);
    //Função qsort(Vetor,Tamanho do vetor,Tamanho do tipo,Função comparar)
    for(i=0;i<n;i++){//Imprimir vetor x
        printf("x[%d]=%.1f ; ",i,x[i]);
    }
    printf("\n");
    free(x);
    return 0;
}
