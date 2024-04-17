#include <stdio.h>
#include <math.h>


int main()
{
    float a,b,c,perimetro,area,angulo1,angulo2,hipotenusa;

    printf("digite o 1 cateto:");
    scanf("%f", &a);
    printf("digite o 2 cateto:");
    scanf("%f", &b);
    printf("digite o 3 cateto:");
    scanf("%f", &c);

    area=0.5*(a*b);
    perimetro=a+b+c;
    hipotenusa= sqrt((a*a)*(b*b));

    angulo1=a/b;
    angulo2=90-angulo1;

    printf("a area e: %f\n", area);
    printf("o perimetro e: %f\n", perimetro);
    printf("a hipotenusa e e: %f\n", hipotenusa);
    printf("o angulo 1 e: %f\n", angulo1);
    printf("o angulo 2 e: %f", angulo2);

    return 0;
}
