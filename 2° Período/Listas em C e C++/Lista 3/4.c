#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, resultado, teste1=0,teste2=1;

    printf("digite a quantidade de termos: ");
    scanf("%d", &x);
    if(x==1){
        printf("resultado: 0");
    }

    if(x==2 || x==3){
        printf("resultado: 1");
    }

    for(int i=0;i<=x;i++){

        resultado=teste1+teste2;
        printf("sequencia: %d \n", resultado);

        teste1=teste2;
        teste2=resultado;

    }


    return 0;
}
