#include <stdio.h>
#include <stdlib.h>

void fibo(int numero){

    int vetor[numero];
    vetor[0]=0;
    vetor[1]=1;
    for(int i=2;i<numero;i++)
    {
        vetor[i]=vetor[i-1]+vetor[i-2];
    }
    for(int j=0;j<numero;j++)
    {
        printf("%3d",vetor[j]);
    }

}

int main()
{
    int numero;
    printf("digite o numero da sequencia:");
    scanf("%d", &numero);

    fibo(numero);

    return 0;
}
