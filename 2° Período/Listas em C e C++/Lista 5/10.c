#include <stdio.h>
#include <stdlib.h>

int calcular(int linha, int coluna) {

    if (coluna==0||coluna==linha) {

        return 1;
    } else {

        return calcular(linha-1,coluna-1)+calcular(linha-1,coluna);
    }
}

void triangulo(int n) {

    for (int linha=0;linha<n;linha++) {

        for (int espaco=0;espaco<n-linha-1;espaco++) {
            printf("   ");
        }

        for (int coluna=0;coluna<=linha;coluna++) {

            int coeficiente=calcular(linha,coluna);

            printf("%6d   ", coeficiente);
        }

        printf("\n");
    }
}

int main() {

    int n;

    printf("Digite o numero de linhas do triangulo: ");
    scanf("%d", &n);

    triangulo(n);


    return 0;
}
