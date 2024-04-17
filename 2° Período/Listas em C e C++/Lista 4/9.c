#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p, q;


    printf("Digite o numero de linhas e colunas da matriz A (m e n): ");
    scanf("%d %d", &m, &n);


    printf("Digite o numero de linhas e colunas da matriz B (p e q): ");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("A multiplicacao de matrizes nao e possivel. O n�mero de colunas deve ser igual ao n�mero de linhas .\n");
        return 1;
    }


    int A[m][n], B[p][q];

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int C[m][q];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    printf("Resultado da multiplicacao de A e B (matriz C):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
