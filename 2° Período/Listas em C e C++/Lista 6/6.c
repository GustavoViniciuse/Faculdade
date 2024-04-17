#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int hora;
    int minuto;
    int segundo;

}horario;


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
    horario x;

    printf("Digite a hora:");
    scanf("%d", &x.hora);
    printf("Digite o minuto:");
    scanf("%d", &x.minuto);
    printf("Digite o segundo:");
    scanf("%d", &x.segundo);

    x=validar(x);
    printf("O horario e: %d:%d:%d", x.hora,x.minuto,x.segundo);


    return 0;
}
