#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int ano;
    int mes;
    int dia;
} data;

int array[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

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
data contar(data x, int num){

    x.dia+=num;
    while(x.dia>array[x.mes-1]){
        x.dia-=array[x.mes-1];
        if(x.mes+1>12){
            x.mes=1;
            x.ano++;
        }else{
            x.mes++;
        }
    }



    return x;
}

int diferente(data data1, data data2) {
    int diferenca= 0;

    if (data1.ano>data2.ano||(data1.ano==data2.ano&&data1.mes> data2.mes) ||
        (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia > data2.dia)) {

        data temp = data1;
        data1 = data2;
        data2 = temp;
    }


    while (data1.ano < data2.ano || (data1.ano == data2.ano && data1.mes < data2.mes) ||
           (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia < data2.dia)) {
        data1 = contar(data1, 1);
        diferenca++;
    }

    return diferenca;
}

int main() {
    data x, y;

    printf("Digite a primeira data:\n");
    printf("Dia: ");
    scanf("%d", &x.dia);
    printf("Mes: ");
    scanf("%d", &x.mes);
    printf("Ano: ");
    scanf("%d", &x.ano);

    printf("Digite a segunda data:\n");
    printf("Dia: ");
    scanf("%d", &y.dia);
    printf("Mes: ");
    scanf("%d", &y.mes);
    printf("Ano: ");
    scanf("%d", &y.ano);

    x = validar(x);
    y = validar(y);

    if (x.ano == 0 || y.ano == 0) {
        printf("Datas inválidas!\n");
        return 1;
    }

    int z=diferente(x, y);

    printf("A diferenca em dias entre as datas e: %d dias\n", z);

    return 0;
}
