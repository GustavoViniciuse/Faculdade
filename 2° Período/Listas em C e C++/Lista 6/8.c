#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int hora;
    int minuto;
    int segundo;

}horario;


int calcular(horario x){
    int soma;

    soma=x.segundo+(x.minuto * 60)+((x.hora *60)*60);

    return soma;
}



horario somar(horario* x){

    x[2].segundo= x[0].segundo+ x[1].segundo;
    x[2].minuto= x[0].minuto+ x[1].minuto;
    x[2].hora= x[0].hora+ x[1].hora;

    while(x[2].segundo>=60){
        x[2].segundo-=60;
        x[2].minuto++;
    }

    while(x[2].minuto>=60){
        x[2].minuto-=60;
        x[2].hora++;
    }


    return x[2];

}



horario validar(horario x){

    if(x.hora>24 || x.hora<0){
        x.hora=0;
        x.minuto=0;
        x.segundo=0;
        return x;
    }

    if(x.minuto>60 && x.minuto>0){
        x.hora=0;
        x.minuto=0;
        x.segundo=0;
        return x;
    }

    if(x.segundo>60 || x.segundo<0){
        x.hora=0;
        x.minuto=0;
        x.segundo=0;
        return x;
    }

    return x;
}



int main()
{
    horario x[3];
    puts("------horario 1------");
    printf("Digite a hora:");
    scanf("%d", &x[0].hora);
    printf("Digite o minuto:");
    scanf("%d", &x[0].minuto);
    printf("Digite o segundo:");
    scanf("%d", &x[0].segundo);

    x[0]=validar(x[0]);

    puts("------horario 2------");
    printf("Digite a hora:");
    scanf("%d", &x[1].hora);
    printf("Digite o minuto:");
    scanf("%d", &x[1].minuto);
    printf("Digite o segundo:");
    scanf("%d", &x[1].segundo);

    x[1]=validar(x[1]);
    puts("---------------------");
    printf("Horario 1: %dh:%dm:%ds  \n", x[0].hora,x[0].minuto,x[0].segundo);
    printf("Horario 2: %dh :%dm:%ds \n", x[1].hora,x[1].minuto,x[1].segundo);

    x[2]=somar(x);
    x[2]=validar(x[2]);

    int s=calcular(x[2]);

    puts("------SOMA--------");
    printf("%dh:%dm:%ds \n", x[2].hora,x[2].minuto,x[2].segundo);
    printf("segundos: %d", s);

    return 0;
}
