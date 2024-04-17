#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int soma;

    printf("Digite o valor de a:");
    scanf("%d", &a);
    printf("Digite o valor de b:");
    scanf("%d", &b);
    printf("Digite o valor de c:");
    scanf("%d", &c);

    soma=a+b+c;

    if(soma==180){
        printf("esses tres numeros forma um triangulo");
    }else{
        printf("esses numeros nao forma um triangulo");
        return 0;
    }

    //testando os angulos

    if(a>90){
        printf("\nangulo a e obtuso!");
    }
    if(a<90){
        printf("\nangulo a e agudo!");
    }
    if(a==90){
        printf("\nangulo a e reto!");
    }

    if(b>90){
        printf("\nangulo b e obtuso!");
    }
    if(b<90){
        printf("\nangulo b e agudo!");
    }
    if(b==90){
        printf("\nangulo b e reto!");
    }

    if(c>90){
        printf("\nangulo c e obtuso!");
    }
    if(c<90){
        printf("\nangulo c e agudo!");
    }
    if(c==90){
        printf("\nangulo c e reto!");
    }



    //testando o tipo do triangulo

    if(a==b && a==c){
        printf("\nesse triangulo e equilatero");
        return 0;
    }

    if(a==b || a==c || b==c){
        printf("\nesse triangulo e isoceles");
        return 0;
    }

    if(a>90 || b>90 || c>90){
        printf("\nesse triangulo e escaleno");
    }




    return 0;
}
