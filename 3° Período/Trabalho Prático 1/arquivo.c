#include <stdio.h>
#include <stdio.h>

void recu(FILE *arqR, int numEntrada) {
    float pub_out;
    if (numEntrada == 0) {
        return;
    }

    fseek(arqR, (numEntrada - 1) * sizeof(float), SEEK_SET);
    fread(&pub_out, sizeof(float), 1, arqR);
    printf("%g\n", pub_out);

    recu(arqR, numEntrada - 1);
}

int main() {
    FILE *arqW;
    FILE *arqR;
    const char *nomeArquivo = "Q09.txt";

    arqW = fopen(nomeArquivo, "wb");
    if (arqW == NULL) {
        return 0;
    }

    int numEntrada;
    scanf("%d", &numEntrada);

    float pub_in;
    for (int i = 0; i < numEntrada; i++) {
        scanf("%f", &pub_in);
        fwrite(&pub_in, sizeof(float), 1, arqW);
    }

    fclose(arqW);

    arqR = fopen(nomeArquivo, "rb");
    if (arqR == NULL) {
        return 0;
    }

    recu(arqR, numEntrada);

    fclose(arqR);

    return 0;
}
