#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, resultado;

    printf("digite um numero: ");
    scanf("%d", &x);
    resultado=x;

    for(int i=1;i<=x;i++){

        resultado=resultado*i;
    }

    printf("o fatorial e: %d ", resultado);

    return 0;
}
