#include <stdio.h>
#include <stdlib.h>

int main() {

    char hex[7];
    unsigned int r, g, b;

    printf("Digite o codigo: ");
    if (scanf("%6s", hex) != 1) {
        printf("Erro\n");
        return 1;
    }


    r = strtol(hex, NULL, 16);

    if (r < 0 || r > 255) {
        printf("Valor invalido\n");
        return 1;
    }


    printf("Digite o codigo para o verde : ");
    if (scanf("%6s", hex) != 1) {
        printf("Erro\n");
        return 1;
    }

    g = strtol(hex, NULL, 16);

    if (g < 0 || g > 255) {
        printf("Valor invalido para o verde\n");
        return 1;
    }

    printf("Digite o codigo para o azul: ");
    if (scanf("%6s", hex) != 1) {
        printf("Erro\n");
        return 1;
    }

    b = strtol(hex, NULL, 16);

    if (b < 0 || b > 255) {
        printf("Valor invalido para o azul\n");
        return 1;
    }

    printf("As cores RGB sao: R=%d, G=%d, B=%d\n", r, g, b);

    return 0;
}
