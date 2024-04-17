#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void palindromo(char *palavra){

    int esquerda=0;
    int direita=strlen(palavra)-1;
    bool check=true;

    while(esquerda<direita){
        if((palavra[esquerda]!=palavra[direita] )|| strlen(palavra)<3){
             check=false;
             break;
        }else{
            esquerda++;
            direita--;
        }
    }

    printf("%s : %s",palavra,check?"palindromo":"nao palindromo");
    puts("");
}

int main()
{

    char palavra[50];
    char *teste;

    printf("digite uma frase: ");
    scanf("%[^\n]", palavra);
    teste=strtok(palavra," ");


    while(teste!= NULL){
        palindromo(teste);
        teste=strtok(NULL, " ");
    }



    return 0;
}
