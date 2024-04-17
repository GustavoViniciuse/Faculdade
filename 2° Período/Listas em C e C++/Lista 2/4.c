#include <stdio.h>
#include <math.h>

int main()
{
    float peso,altura, imc;
    printf("Digite seu peso em Kg: ");
    scanf("%f", &peso);
    printf("digite sua altura em Metros: ");
    scanf("%f", &altura);


    imc=(altura*altura)/peso;

    printf("seu imc calculado e: %f", imc);
    printf("\nportanto sua ");

      if(imc<16){
        printf("Situacao: Hecticidade morbida");
    }else

    if(imc>=16 && imc<17){
        printf("Situacao: Hecticidade grave");
    }else

    if(imc>=17 && imc<18.5){
        printf("Situacao: Abaixo do peso");
    }else

    if(imc>=18.5 && imc<25){
        printf("Situacao: Peso normal");
    }else

    if(imc>=25 && imc<30){
        printf("Situacao: Sobrepeso");
    }else

    if(imc>=30 && imc<35){
        printf("Situacao: Obesidade");
    }else

    if(imc>=35 && imc<40){
        printf("Situacao: Obesidade grave");
    }else

    if(imc>=40){
        printf("Situacao: Obesidade morbida");
    }

    return 0;
}
