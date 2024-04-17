#include <stdio.h>
#include <stdlib.h>

int main() {

    int vetor[10];
    int valor;
    int ocorrencias = 0;



    for (int i=0;i<10;i++) {
        printf("Digite numeros da posicao %d:\n", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um novo valor: ");
    scanf("%d", &valor);

    printf("Ocorrencias de %d no vetor:\n", valor);
    for (int i=0;i<10;i++) {
        if (vetor[i]==valor) {
            printf("Posicao %d\n", i);
            ocorrencias++;
        }
    }

    printf("Numero de ocorrencias de %d no vetor: %d\n", valor, ocorrencias);

    return 0;
}
