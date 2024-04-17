#include <stdio.h>
#include <stdlib.h>

void fibo(int x, int* vet){
    if(x==0){
        printf("0");
    }
    if(x==1 || x==2){
        printf("1    1");
    }

    for(int i=2;i<x;i++){
        vet[i]=vet[i-1]+vet[i-2];
        printf("%4d", vet[i]);
    }






}


int main()
{
    int x;
    printf("digite a sequencia do termo");
    scanf("%d", &x);

    int vet[x];
    vet[0]=0;
    vet[1]=1;

    fibo(x,vet);



    return 0;
}
