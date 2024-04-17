#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int numeros[100];
    int tamanho = 0;
    int numero;


    printf("Digite numeros (0 para encerrar):\n");
    do {
        scanf("%d", &numero);
        if (numero != 0) {
            numeros[tamanho] = numero;
            tamanho++;
        }
    } while (numero != 0);

    if (tamanho == 0) {
        printf("Nenhum numero foi inserido.\n");
        return 1;
    }


    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    double media = (double)soma / tamanho;
    printf("Media: %.2f\n", media);


    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    double mediana;
    if (tamanho % 2 == 0) {

        int meio1 = numeros[tamanho / 2 - 1];
        int meio2 = numeros[tamanho / 2];
        mediana = (double)(meio1 + meio2) / 2.0;
    } else {

        mediana = numeros[tamanho / 2];
    }
    printf("Mediana: %.2f\n", mediana);


    int moda = numeros[0];
    int maxContagem = 1;
    int contagem = 1;

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] == numeros[i - 1]) {
            contagem++;
        } else {
            contagem = 1;
        }

        if (contagem > maxContagem) {
            maxContagem = contagem;
            moda = numeros[i];
        }
    }
    printf("Moda: %d\n", moda);


    double somaDiferencaQuadrada = 0.0;

    for (int i = 0; i < tamanho; i++) {
        double diferenca = numeros[i] - media;
        somaDiferencaQuadrada += diferenca * diferenca;
    }

    double variancia = somaDiferencaQuadrada / tamanho;
    double desvioPadrao = sqrt(variancia);
    printf("Desvio Padrao: %.2f\n", desvioPadrao);

    return 0;
}
