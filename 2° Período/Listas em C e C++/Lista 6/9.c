#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{

    int ano;
    int mes;
    int dia;

}data;


bool bi(int ano){

    if(ano%4==0){
        return true;
    }

    bool check=false;

    if(ano%100==0){
        if(ano%400==0){
            check=true;
        }
    }

    return check;
}


data validar(data x){

    int array[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    array[1]=bi(x.ano)? 29 :28;


    if(x.ano>2023){
        x.ano=0;
        x.mes=0;
        x.dia=0;
        return x;
    }

    if(x.mes>12 && x.mes>0){
        x.ano=0;
        x.mes=0;
        x.dia=0;
        return x;
    }

    if(x.dia>array[x.mes-1] || x.dia<=0){
        x.ano=0;
        x.mes=0;
        x.dia=0;
        return x;
    }

    return x;
}

typedef struct{

    int hora;
    int minuto;
    int segundo;

}horario;


horario valida(horario y){

    if(y.hora>24 || y.hora<0){
        y.hora=0;
        y.minuto=0;
        y.segundo=0;
        return y;
    }

    if(y.minuto>60 && y.minuto>0){
        y.hora=0;
        y.minuto=0;
        y.segundo=0;
        return y;
    }

    if(y.segundo>60 || y.segundo<0){
        y.hora=0;
        y.minuto=0;
        y.segundo=0;
        return y;
    }

    return y;
}


int main()
{
    data x;
    horario y;

    puts("---------DATA---------");
    printf("Digite o dia:");
    scanf("%d", &x.dia);

    printf("Digite o mes:");
    scanf("%d", &x.mes);

    printf("Digite o ano:");
    scanf("%d", &x.ano);

    x=validar(x);

    puts("--------HORARIO-------");
    printf("Digite a hora:");
    scanf("%d", &y.hora);

    printf("Digite o minuto:");
    scanf("%d", &y.minuto);

    printf("Digite o segundo:");
    scanf("%d", &y.segundo);

    y=valida(y);
    puts("-----------------");
    printf("Sao %dh:%dm:%ds do dia %d/%d/%d",y.hora,y.minuto,y.segundo,x.dia,x.mes,x.ano);



    return 0;
}
