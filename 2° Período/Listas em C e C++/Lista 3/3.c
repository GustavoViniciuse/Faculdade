#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,resultado;
    int conta=0;
    float teste;

    while(1){
    printf("digite os numeros e 0 para encerrar: ");
    scanf("%d", &x);

    resultado+=x;
    conta++;

    if(x==0){
        conta--;
        teste=resultado/conta;
        printf("a media dos numeros e: %f", teste);
        return 0;
    }


    }




    return 0;
}
