#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("digite a dimensao quadratica da matriz: ");
    scanf("%d", &n);

    int matriz[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("digite:");
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                printf("[%d]", matriz[i][j]);
            }
        }
    }


    return 0;
}
