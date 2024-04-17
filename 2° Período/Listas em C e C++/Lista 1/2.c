#include <stdio.h>
#include <math.h>

int main(){

    float area,altura,lado, a,v;

    printf("Digite a area da base:");
    scanf("%f", &area);
    printf("digite a altura:");
    scanf("%f", &altura);
    printf("digite o lado:");
    scanf("%f", &lado);

    v=0.333*(area*altura);
    a=(lado*lado)+(2*(lado*altura));

    printf("o volume e: %f\n", v);
    printf("a area e: %f", a);




    return 0;
}
