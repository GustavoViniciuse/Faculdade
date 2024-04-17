#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char palavra[20];
    printf("digite uma palavra: ");
    scanf("%[^\n]", palavra);

    int esquerda=0;
    int direita=strlen(palavra)-1;
    bool check=true;

    while(esquerda<direita){
        if(palavra[esquerda]!=palavra[direita]){
             check=false;
             break;
        }else{
            esquerda++;
            direita--;
        }
    }

    printf("%s",check?"palindromo":"nao palindromo");


    return 0;
}
