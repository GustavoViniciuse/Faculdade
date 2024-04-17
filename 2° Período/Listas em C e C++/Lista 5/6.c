#include <stdio.h>
#include <stdlib.h>


int** produto(int** matriz1, int** matriz2, int coluna1, int coluna2, int linha1, int linha2){

    if((coluna1 *linha1)!=(coluna2*linha2)){
        return NULL;
    }

    int* matriz3[coluna1];

    for(int i=0;i<coluna1;i++){
        matriz3[i]=malloc(linha1*sizeof(int));
    }

    for(int i=0;i<coluna1;i++){
        for(int j=0;j<linhas1;i++){

            if(coluna1!=coluna2){
                matriz3[i][j]=matriz1[i][j]*matriz2[j][i];
            }else{
                matriz3[i][j]=matriz1[i][j]*matriz2[i][j];
            }

        }
    }
        return matriz;

}

int main(){

    int linha1, coluna1,linha2,coluna2;

    printf("digite o tamanho de coluna da primeira matriz:");
    scanf("%d", &coluna1);
    printf("digite o tamanho de linha da primeira matriz:");
    scanf("%d", &linha1);

    int* matriz1[coluna1];

    for(int i=0;i<coluna1;i++{
        matriz1[i]=malloc(linha1 *sizeof(int));
    }

    for(int i=0;i<coluna1;i++){
        for(int j=0;i<linhas1;i++){
            printf("digite os valor da primeira: ");
            scanf("%d", &matriz1[i][j]);
            }
    }



    printf("digite o tamanho de coluna da segunda matriz:");
    scanf("%d", &coluna2);
    printf("digite o tamanho de linha da segunda matriz:");
    scanf("%d", &linha2);

    int* matriz2[coluna2];

    for(int i=0;i<coluna2;i++{
        matriz2[i]=malloc(linha2 *sizeof(int));
    }

    for(int i=0;i<coluna2;i++){
        for(int j=0;i<linhas2;i++){
            printf("digite os valor da segunda: ");
            scanf("%d", &matriz2[i][j]);
            }
    }



    int** matriz3=produto(matriz1,matriz2,coluna1,coluna2,linha1,linha2);


     for(int i=0;i<coluna1;i++){
        for(int j=0;i<linhas1;i++){
            printf("valor: %3d", matriz3[i][j]);
            }
    }


    return 0;
}
