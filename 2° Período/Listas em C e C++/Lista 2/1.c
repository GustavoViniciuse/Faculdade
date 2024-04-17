#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    if(x%2==0){
        printf("esse numero e par!");
    }else{
        printf("esse numero e impar!");
    }

    return 0;
}
