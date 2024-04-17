#include <stdio.h>
#include <stdlib.h>

typedef struct{

    int hora;
    int minuto;
    int segundo;

}horario;

int main()
{
    horario x;

    printf("Digite a hora:");
    scanf("%d", &x.hora);
    printf("Digite o minuto:");
    scanf("%d", &x.minuto);
    printf("Digite o segundo:");
    scanf("%d", &x.segundo);


    printf("O horario e: %d:%d:%d", x.hora,x.minuto,x.segundo);


    return 0;
}
