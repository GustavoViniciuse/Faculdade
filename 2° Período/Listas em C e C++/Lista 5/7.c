#include <stdio.h>
#include <stdlib.h>


void triangulo(int tamanho){

    if(tamanho<=0){
        return;
    }
    if(tamanho==1){
        printf("* \n");
        return;
    }

   triangulo(tamanho-1);
   for(int i=0;i<5tamanho;i++){
    printf("*");
   }
   printf("\n");
}

int main()
{
    int x;

    printf("Digite  a o tamanho do triangulo");
    scanf("%d", &x);

    triangulo(x);


    return 0;
}
