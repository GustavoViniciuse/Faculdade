#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetor[10];
    int teste;

    for (int i=0;i<10;i++) {
        printf("Digite numero da posicao %d:\n", i);
        scanf("%d", &vetor[i]);
    }


    for (int i=0;i<10- 1;i++) {

        for (int j=0;j<10-i-1;j++) {

            if (vetor[j]>vetor[j+1]) {

                teste=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=teste;

            }
        }
    }

    printf("Vetorem ordem crescente:\n");
    for (int i=0;i<10;i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
