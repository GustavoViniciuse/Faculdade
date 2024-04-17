#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    while(1){
    printf("\nDigite um numero da semana (1 ao 7): ");
    scanf("%d", &x);
    if(x<1 || x>7){

        printf("Nao existe dia da semana com esse numero!");
    }

    if(x==1){
        printf("Segunda-Feira");
    }
    if(x==2){
        printf("Terca-Feira");
    }
    if(x==3){
        printf("Quarta-Feira");
    }
    if(x==4){
        printf("Quinta-Feira");
    }
    if(x==5){
        printf("Sexta-Feira");
    }
    if(x==6){
        printf("Sabado");
    }
    if(x==7){
        printf("Domingo");
    }
    }





    return 0;
}
