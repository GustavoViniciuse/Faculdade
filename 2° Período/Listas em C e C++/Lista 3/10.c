#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,b, teste,mdc;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);


     while (b != 0) {
        teste = b;
        b = a % b;
        a = teste;
    }
    mdc=a;


    if (mdc == 1) {
        printf("sao primos entre si.\n");
    } else {
        printf("nao sao primos entre si.");
    }


    return 0;
}
