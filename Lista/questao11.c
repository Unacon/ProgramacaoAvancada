#include <stdio.h>

int main()
{
    char c[4]={0,1,2,3};
    int i[4]={0,1,2,3};
    double d[4]={0,1,2,3};
    float f[4]={0,1,2,3};
    int k;
    printf("Para x sendo char\n");
    for(k=0;k<5;k++){
    printf("Endereco x = %X // Endereco de x + %d = %X\n",c,k,c+k);
    }
    printf("Para x sendo int\n");
    for(k=0;k<5;k++){
    printf("Endereco x = %X // Endereco de x + %d = %X\n",i,k,i+k);
    }
    printf("Para x sendo double\n");
    for(k=0;k<5;k++){
    printf("Endereco x = %X // Endereco de x + %d = %X\n",d,k,d+k);
    }
    printf("Para x sendo float\n");
    for(k=0;k<5;k++){
    printf("Endereco x = %X // Endereco de x + %d = %X\n",f,k,f+k);
    }
    return 0;
}
