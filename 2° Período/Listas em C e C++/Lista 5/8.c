#include <stdio.h>
#include <stdlib.h>


void triangulo(int tamanho){

    if(tamanho<=0){
        return;
    }
    if(tamanho==1){
        printf("*");
        return;
    }


   for(int i=0;i<=tamanho;i++){
    printf("*");
   }
   printf("\n");
   triangulo(tamanho-1);
}

int main()
{
    int x;

    printf("Digite  a o tamanho do triangulo");
    scanf("%d", &x);

    triangulo(x);


    return 0;
}
