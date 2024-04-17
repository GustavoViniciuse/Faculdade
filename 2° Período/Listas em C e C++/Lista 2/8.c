#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, inss,irpf;
    printf("Digite seu salario bruto: ");
    scanf("%f", &salario);


    //inss

    if(salario<2112.00){
        printf("voce nao precisa pagar inss");
    }


    if(salario>=2112.01 && salario<2826.65 ){
        inss=salario*0.075;
        printf("voce vai pagar %f  de imposto pro inss", inss);
    }


    if(salario>=2826.66 && salario<3751.05 ){
        inss=salario*0.15;
        printf("voce vai pagar %f de imposto pro inss", inss);
    }


    if(salario>=3751.06 && salario<4664.68 ){
        inss=salario*0.225;
        printf("voce vai pagar %f de imposto pro inss", inss);
    }


    if(salario>=4664.68 ){
        inss=salario*0.275;
        printf("voce vai pagar %f de imposto pro inss", inss);
    }


    //irpf


     if(salario<1320.00){
        irpf=salario*0.075;
        printf("\nvoce vai pagar %f  de imposto pro irpf", irpf);
    }


    if(salario>=1320.00 && salario<2571.29){
        irpf=salario*0.09;
        printf("\nvoce vai pagar %f  de imposto pro irpf", irpf);
    }


    if(salario>=2571.29 && salario<3856.94){
        irpf=salario*0.15;
        printf("\nvoce vai pagar %f  de imposto pro irpf", irpf);
    }


    if(salario>=3856.94 && salario<7507.49){
        irpf=salario*0.14;
        printf("\nvoce vai pagar %f  de imposto pro irpf", irpf);
    }


    if(salario>=7507.49 ){
        irpf=7507.49*0.14;
        printf("\nvoce vai pagar %f  de imposto pro irpf", irpf);
    }



    return 0;
}
