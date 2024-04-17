#include <stdio.h>

int main() {
    int r,g,b;


    printf("Digite o valor para o vermelha: ");
    if (scanf("%d", &r) != 1 || r < 0 || r > 255) {
        printf("Valor invalido\n");
        return 1;
    }

    printf("Digite o valor para o verde: ");
    if (scanf("%d", &g) != 1 || g < 0 || g > 255) {
        printf("Valor invalido\n");
        return 1;
    }

    printf("Digite o valor para o azul: ");
    if (scanf("%d", &b) != 1 || b < 0 || b > 255) {
        printf("Valor invalido\n");
        return 1;
    }

    // Imprimir os valores em formato hexadecimal
    printf("As cores RGB em hexadecimal sao: #%02X%02X%02X\n", r, g, b);

    return 0;
}
