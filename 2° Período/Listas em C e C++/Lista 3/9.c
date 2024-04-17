#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("digite um numero: ");
    scanf("%d", &x);

    if(x==1){
        printf("esse numero não e primo");
        return 0;
    }

    if(x==2){
        printf("esse numero e primo!");
        return 0;
    }

    if(x%2==0){
        printf("esse numero não e primo");
        return 0;
    }

    if(x==5){
        printf("esse numero e primo!");
        return 0;
    }


    if(x%5==0){
        printf("esse numero não e primo");
        return 0;
    }

    if(x==3){
        printf("esse numero e primo!");
        return 0;
    }


    if(x%3==0){
        printf("esse numero não e primo");
        return 0;
    }

    if(x==7){
        printf("esse numero e primo!");
        return 0;
    }

    if(x%7==0){
        printf("esse numero não e primo");
        return 0;
    }


    printf("esse numero e primo");





    return 0;
}
