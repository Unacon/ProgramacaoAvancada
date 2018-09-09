#include <stdio.h>
#include <stdlib.h>
void ordena (float *x ,int n){
   float aux;
   int i,j;
   for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++)
       if(x[i]>x[j]){
           aux=x[i];
           x[i]=x[j];
           x[j]=aux;
       }
   }
}
int main()
{
    float *x;
    int n,i;
    printf("Digite a quantidade : ");
    scanf("%d",&n);
    x=(float*)malloc(n*sizeof(float));
    if(x==NULL){
        printf("Memoria insuficiente\n");
        exit(0);
    }
    srand(time(NULL));
    for(i=0;i<n;i++){
        x[i]=rand()%10;
        printf("x[%d]=%.1f ; ",i,x[i]);
    }
    ordena(x,n);
    printf("\n");
    for(i=0;i<n;i++){
        printf("x[%d]=%.1f ; ",i,x[i]);
    }
    free(x);
    return 0;
}
