#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];

    for(int i=0;i<10;i++){
        printf("digite um numero para a posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    int maior=vet[0];

    for(int i=0;i<10;i++){
        if(maior<vet[i]){
            maior=vet[i];
        }
    }

    printf("o maior da sequencia e: %d", maior);

    return 0;
}
