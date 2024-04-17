#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void alteracao(char *palavra, char letra1, char letra2) {
    if (*palavra == '\0') {
        return;
    }

    if (*palavra == letra1) {
        *palavra = letra2;
    }

    alteracao(palavra + 1, letra1, letra2);
}

int main() {
    

    char palavra[1000];

    while (1) {
        scanf("%s", palavra);

        if (!(strcmp(palavra, "FIM"))) {
            break;
        }
        srand(4);
        char letra1 = 'a' + abs(rand() % 26);
        char letra2 = 'a' + abs(rand() % 26);

        alteracao(palavra, letra1, letra2);

        printf("%s\n", palavra);
    }

    return 0;
}
