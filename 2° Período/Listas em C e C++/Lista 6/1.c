#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int ano;
    int mes;
    int dia;

}data;

int main()
{
    data x;

    printf("Digite o dia:");
    scanf("%d", &x.dia);

    printf("Digite o mes:");
    scanf("%d", &x.mes);

    printf("Digite o ano:");
    scanf("%d", &x.ano);

    printf("A data e: %d/%d/%d", x.dia,x.mes,x.ano);


    return 0;
}
