#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[50];
    char teste[1]=("\n");
    int conta;
    printf("digite seu nome:");
    scanf(" %[^\n]", nome);

    conta=strlen(nome);

    //FOR PARA NÃO CONTAR O ESPAÇO
    for(int i=0;i<50;i++){

        if(nome[i]==teste[1]){
            conta--;
        }
    }


    printf("\nseu nome e: %s\n", nome);
    printf("seu nome tem %d letras!", conta);


    return 0;
}
