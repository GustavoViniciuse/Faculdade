#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,n;
    float ln,part1,part2;
    printf("digite o valor de x: ");
    scanf("%d", &x);
    printf("digite o valor de n: ");
    scanf("%d", &n);


    for(int i=1;i<=n;i++){

        part1=pow(-1,i);
        part2=pow((-1+x), i);

        ln+=(-((part1*part2)/i));
    }


    printf("ln de x e: %f", ln);



    return 0;
}
