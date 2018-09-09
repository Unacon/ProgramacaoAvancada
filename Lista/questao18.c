#include <stdio.h>
#include <stdlib.h>

void soma(int *a,int *b,int *c,int n){
    int i;
    for(i=0;i<n;i++){
        c[i]=a[i]+b[i];
    }
}
//Chamada da função : soma(a,b,c,n);

