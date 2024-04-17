#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float somatorio(int x){
    float soma=0;
   

    for(int i=1;i<=x;i++){
        soma+= pow(-1,i)*(4.0/((2*i)-1));
    }

    return soma;
}

int main()
{
    int x;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &x);
    float a=somatorio(x);
    printf("o resultado do somatorio e: %.2f", a);

    return 0;
}
