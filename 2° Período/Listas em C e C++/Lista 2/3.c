#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("digite um numero divisivel por 2,5 ou 10: ");
    scanf("%d", &x);

    if(x%2==0){
        printf("esse numero e divisivel por 2! \n");
    }else{
        printf("esse numero nao e divisivel por 2! \n");
    }

    if(x%5==0){
        printf("esse numero e divisivel por 5! \n");
    }else{
        printf("esse numero nao e divisivel por 5! \n");
    }

    if(x%10==0){
        printf("esse numero e divisivel por 10! \n");
    }else{
        printf("esse numero nao e divisivel por 10! \n");
    }



    return 0;
}
