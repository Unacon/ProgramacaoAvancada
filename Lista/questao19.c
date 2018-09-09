#include <stdio.h>
#include <stdlib.h>

void multvetorial(int **a,int **b,int **c,int nla,int nca,int ncb){
    int nlb,i,j,l,k;
    nlb=nca;
    for(i=0;i<nla;i++){
        for(j=0;j<ncb;j++){
            k=0;
            for(l=0;l<nca;l++){
                k=k+a[i][l]*b[l][j];
            }
            c[i][j]=k;
        }
    }
}
int main()
{
    int **a,**b,**c;
    int nla,nca,nlb,ncb,i,j;
    printf("Digite o numero de linhas e colunas da matriz A : ");
    scanf("%d %d",&nla,&nca);
    printf("Digite o numero colunas da matriz B : ");
    scanf("%d",&ncb);
    nlb=nca;
    a=(int**)malloc(nla*sizeof(int*));
    b=(int**)malloc(nlb*sizeof(int*));
    c=(int**)malloc(nla*sizeof(int*));
    for(i=0;i<nla;i++){
        a[i]=(int*)malloc(nca*sizeof(int));
    }
    for(i=0;i<nlb;i++){
        b[i]=(int*)malloc(ncb*sizeof(int));
    }
    for(i=0;i<nla;i++){
        c[i]=(int*)malloc(ncb*sizeof(int));
    }
    if(a==0 || b==0 || c==0){
        printf("Memoria insuficiente\n");
        exit(0);
    }
    srand(time(0));
    printf("Matriz A: \n");
    for(i=0;i<nla;i++){
        for(j=0;j<nca;j++){
        a[i][j]=rand()%10;
        printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B: \n");
    for(i=0;i<nlb;i++){
        for(j=0;j<ncb;j++){
        b[i][j]=rand()%10;
        printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    multvetorial(a,b,c,nla,nca,ncb);
    printf("Matriz C: \n");
    for(i=0;i<nla;i++){
        for(j=0;j<ncb;j++){
        printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<nla;i++){
       free(a[i]);
    }
    for(i=0;i<nlb;i++){
        free(b[i]);
    }
    for(i=0;i<nla;i++){
        free(c[i]);
    }
    free(a);
    free(b);
    free(c);
    return 0;
}
