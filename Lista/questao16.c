#include <stdio.h>
#include <stdlib.h>

int compara(int *a,int* b){
    if(*a>*b) return 1;
    if(*a<*b) return -1;
    if(*a=*b) return 0;
}
void ordenacao(int *x,int n,int compara(int *a,int* b)){
    int i,j,aux;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(compara(x+i,x+j)>0){
                aux=x[i];
                x[i]=x[j];
                x[j]=aux;
            }
        }
    }
}
int main()
{
    int *x;
    int n,i;
    printf("Digite o tamanho do vetor : ");
    scanf("%i",&n);
    x=(int*)malloc(n*sizeof(int));
    if(x==NULL){
        printf("Falta de memoria\n");
    }
    srand(time(0));
    for(i=0;i<n;i++){
        x[i]=rand()%10;
        printf("x[%d]= %d , ",i,x[i]);
    }
    printf("\n");
    ordenacao(x,n,compara);
    for(i=0;i<n;i++){
        printf("x[%d]= %d , ",i,x[i]);
    }
    printf("\n");
    free(x);
    return 0;
}
