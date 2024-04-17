#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int meses;
    const double taxaja= 0.10;
    double valor, entrada, financiamento, jurosm, amc, prestacaom, total;;

    printf("Digite o valor do imovel: R$ ");
    scanf("%lf", &valor);

    if (valor< 100000) {
        printf("O valor do imovel deve ser superior a R$ 100.000,00.\n");
        return 1;
    }

    printf("Digite o valor da entrada: R$ ");
    scanf("%lf", &entrada);

    if (entrada < valor*0.20 || entrada>valor*0.75) {
        printf("O valor da entrada deve estar entre 20%% e 75%% do valor total do imovel.\n");
        return 1;
    }

    printf("Digite o número de meses do emprestimo (entre 60 e 360 meses): ");
    scanf("%d", &meses);

    if (meses< 60 || meses> 360) {
        printf("O numero de meses do empréstimo deve estar entre 60 e 360 meses.\n");
        return 1;
    }

    financiamento=valor-entrada;
    double taxaj=taxaja/12;

    amc=financiamento/meses;
    total= 0.0;

    printf("\nMes\tPrestacao Mensal\n");
    for (int i = 1; i <= meses; i++) {

        jurosm=financiamento*taxaj;
        prestacaom=amc+jurosm;
        total+=prestacaom;

        printf("%d\t%.2lf\t\n", i, prestacaom);

        financiamento -= amc;
    }


    printf("\nValor da Primeira Prestacao: R$ %.2lf\n", amc+jurosm);
    printf("Valor Total Pago: R$ %.2lf\n", total);

    return 0;
}
