#include <stdio.h>
#include <math.h>

int main() {
    double vetor1[2], vetor2[2];

    printf("Digite as coordenadas do primeiro vetor (x y): ");
    scanf("%lf %lf", &vetor1[0], &vetor1[1]);

    printf("Digite as coordenadas do segundo vetor (x y): ");
    scanf("%lf %lf", &vetor2[0], &vetor2[1]);


    double produtoEscalar = vetor1[0] * vetor2[0] + vetor1[1] * vetor2[1];
    printf("Produto Escalar: %.2lf\n", produtoEscalar);


    double normaVetor1 = sqrt(vetor1[0] * vetor1[0] + vetor1[1] * vetor1[1]);
    double normaVetor2 = sqrt(vetor2[0] * vetor2[0] + vetor2[1] * vetor2[1]);


    double anguloRad = acos(produtoEscalar / (normaVetor1 * normaVetor2));
    printf("angulo entre os vetores: %.2lf\n", anguloRad);


    double produtoVetorial = vetor1[0] * vetor2[1] - vetor1[1] * vetor2[0];
    printf("Produto Vetorial (valor z): %.2lf\n", produtoVetorial);

    return 0;
}
