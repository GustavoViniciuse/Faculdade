#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,mmc, aux;

    printf("digite 1 numeros: ");
    scanf("%d", &a);
     printf("digite 2 numeros: ");
    scanf("%d", &b);



    for (int i=2;i<=b;i++) {
        aux=a*i;

        if ((aux%b) == 0) {

            mmc=aux;
            i=b+1;
        }
    }

    printf("o mmc e: %d", mmc);



    return 0;
}
