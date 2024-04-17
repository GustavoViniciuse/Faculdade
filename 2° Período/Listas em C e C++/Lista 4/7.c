#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    bool check=true;
    printf("digite um numero: ");
    scanf("%d", &n);

    for(int i=2;i<n;i++){
        if(n%i==0){
            check=false;
            break;
        }
    }
    printf("\n");
    printf("%d: %s", n,check?"primo":"nao primo");


    return 0;
}
