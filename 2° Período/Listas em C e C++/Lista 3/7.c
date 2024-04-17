#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador[4] = {0}, valor;

    while (1) {
        printf("Digite um numero entre 1 e 100 (0 para sair): ");
        scanf("%d", &valor);


        if (valor == 0) {
            break;
        }


        if (valor < 1 || valor > 100) {
            printf("Tente novamente.\n");
            continue;
        }


        if (valor >= 1 && valor <= 25) {
            contador[0]++;
        }

        if (valor >= 26 && valor <= 50) {
            contador[1]++;
        }

        if (valor >= 51 && valor <= 75) {
            contador[2]++;
        } else {
            contador[3]++;
        }
    }


    int total = contador[0] + contador[1] + contador[2] + contador[3];


    printf("Porcentagem no intervalo entre 1 e 25: %.2f%%\n", (float)contador[0] / total*100);
    printf("Porcentagem no intervalo entre 26 e 50: %.2f%%\n", (float)contador[1] / total*100);
    printf("Porcentagem no intervalo entre 51 e 75: %.2f%%\n", (float)contador[2] / total*100);
    printf("Porcentagem no intervalo entre 76 e 100: %.2f%%\n", (float)contador[3] / total* 00);

    return 0;
}
