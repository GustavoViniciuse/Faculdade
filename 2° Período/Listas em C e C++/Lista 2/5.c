#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,teste;

    printf("digite o valor de a:");
    scanf("%d", &a);
    printf("digite o valor de b:");
    scanf("%d", &b);
    printf("digite o valor de c:");
    scanf("%d", &c);

    if (a>b) {
        teste=a;
        a=b;
        b=teste;
    }

    if (a>c) {
        teste=a;
        a=c;
        c=teste;
    }

    if (b>c) {
        teste=b;
        b=c;
        c=teste;
    }



    printf("os valores em ordem sao %d, %d, %d.", a,b,c);

    return 0;
}
