#include <stdio.h>
#include <stdlib.h>

int teste(int x){
    if(x%2==0){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int x;
    printf("digite um numero: ");
    scanf("%d", &x);

    int a=teste(x);

    if(a==1){
        printf("esse numero e par!");
    }else{
        printf("esse numero e impar!");
    }

    return 0;
}
