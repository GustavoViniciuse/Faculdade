#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b,mdc, aux;

    printf("digite 1 numeros: ");
    scanf("%d", &a);
     printf("digite 2 numeros: ");
    scanf("%d", &b);

    while (b != 0) {
        aux=b;
        b=a%b;
        a = aux;
    }

    mdc=a;


    printf("o mdc e: %d", mdc);

    return 0;
}
