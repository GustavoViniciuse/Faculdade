#include <stdio.h>
#include <stdlib.h>

void soma(int vetor1[], int vetor2[], int n){

    int vetor3[n];

    for(int i=0;i<n;i++){
        vetor3[i]=vetor1[i]+vetor2[i];
        printf("a soma dos dois vetores da posicao %d e: %d \n", i, vetor3[i]);
    }


}

int main()
{
    int n;
    printf("digite o tamanho dos vetores: ");
    scanf("%d", &n);
    int vetor1[n],vetor2[n];

    for(int i=0;i<n;i++){
        printf("digite os valores da posicao %d do primeiro vetor: ", i);
        scanf("%d", &vetor1[i]);
    }

    for(int i=0;i<n;i++){
        printf("digite os valores da posicao %d do segundo vetor : ", i);
        scanf("%d", &vetor2[i]);
    }

    soma(vetor1, vetor2, n);



    return 0;
}
