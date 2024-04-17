#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade<16){
        printf("voce nao e eleitor!");
    }

    if(idade==16 || idade==17){
    printf("voce e um eleitor menor de idade facultativo!");
    }

    if(idade>=18 && idade<=64){
        printf("voce e um eleitor obrigatorio!");
    }

    if(idade>64){
        printf("voce e um eleitor facultativo!");
    }

    return 0;
}
