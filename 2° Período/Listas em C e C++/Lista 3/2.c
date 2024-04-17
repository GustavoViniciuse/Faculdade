#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n,pot,resultado;

    printf("Digite a quantidade de termos: ");
    scanf("%f", &n);

    for(int i=0;i<=n;i++){

        pot=pow(2,i);
        resultado+=1/pot;

    }

    printf("o resultado e: %f", resultado);



    return 0;
}
