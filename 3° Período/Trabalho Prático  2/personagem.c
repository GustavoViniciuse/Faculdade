#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool parseBool(char cadeia[])
{
    for (int i = 0; i < strlen(cadeia); i++)
    {
        tolower(cadeia[i]);
    }

    char V[] = "true";
    bool isTrue = true;

    if (strcmp(V, cadeia))
    {
        return true;
    }
    else
    {
        return false;
    }
}

typedef struct Personagem
{
    char pos[100];
    char name[100];
    char alternate_names[500];
    char house[100];
    char ancestry[100];
    char species[100];
    char patronus[100];
    char hogwartsStaff[100];
    char hogwartsStudent[100];
    char actorName[100];
    char alive[100];
    char DataNascimento[100];
    char anoNascimento[100];
    char eyeColour[100];
    char gender[100];
    char hairColour[100];
    char wizard[100];
} Personagem;

typedef struct Personagens
{
    int pos;
    int tam;
    Personagem personagens[500];

} Personagens;

char *exception_alternate_names(char string[])
{
    int count = 0;
    char *newChar = (char *)malloc((strlen(string) + 1) * sizeof(char));
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == '\'' || string[i] == '[' || string[i] == ']')
            continue;
        newChar[count++] = string[i];
    }
    newChar[count] = '\0';

    return newChar;
}

void leitor(FILE *arq, Personagens *lista)
{
    char linha[1024];
    char tmp[100];
    arq = fopen("/tmp/characters.csv", "r");

    if (arq == NULL)
    {
        printf("ERRO");
        return;
    }

    fgets(linha, sizeof(linha), arq);

    while (!feof(arq))
    {
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].pos);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].name);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].alternate_names);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].house);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].ancestry);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].species);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].patronus);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].hogwartsStaff);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].hogwartsStudent);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].actorName);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].alive);
        fgetc(arq);
        fscanf(arq, " %[^;]", tmp);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].DataNascimento);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].anoNascimento);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].eyeColour);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].gender);
        fgetc(arq);
        fscanf(arq, " %[^;]", lista->personagens[lista->pos].hairColour);
        fgetc(arq);
        fscanf(arq, " %[^\n]", lista->personagens[lista->pos].wizard);
        fgetc(arq);

        lista->pos++;
        lista->tam++;
    }
    fclose(arq);
}

void imprimir(Personagens lista)
{
    bool isEqual;
    bool isTrue;
    char pos[200];
    int tamString;

    isTrue = false;

    scanf(" %[^\n\r]", pos);

    while (strcmp(pos, "FIM\0"))
    {
        tamString = strlen(pos);
        for (int j = 0; j < lista.tam; j++)
        {
            isEqual = true;
            for (int i = 0; i < tamString; i++)
            {
                if (pos[i] != lista.personagens[j].pos[i]) {isEqual = false;}
            }

            if (isEqual)
            {
                printf("[%s ## ", lista.personagens[j].pos);
                printf("%s ## ", lista.personagens[j].name);
                printf("{%s} ## ", exception_alternate_names(lista.personagens[j].alternate_names));
                printf("%s ## ", lista.personagens[j].house);
                printf("%s ## ", lista.personagens[j].ancestry);
                printf("%s ## ", lista.personagens[j].species);
                printf("%s ## ", lista.personagens[j].patronus);

                if (parseBool(lista.personagens[j].hogwartsStaff)){printf("false ## "); }
                else{printf("true ## ");}

                if (parseBool(lista.personagens[j].hogwartsStudent)){printf("false ## ");}
                else{printf("true ## ");}

                printf("%s ## ", lista.personagens[j].actorName);

                if (parseBool(lista.personagens[j].alive)){printf("true ## ");}
                else{printf("false ## ");}

                printf("%s ## ", lista.personagens[j].DataNascimento);
                printf("%s ## ", lista.personagens[j].anoNascimento);
                printf("%s ## ", lista.personagens[j].eyeColour);
                printf("%s ## ", lista.personagens[j].gender);
                printf("%s ## ", lista.personagens[j].hairColour);

                if (parseBool(lista.personagens[j].wizard)){printf("true]\n");}
                else{printf("false]\n");}
            }
        }
        scanf(" %[^\n\r]", pos);
    }
}

int main()
{
    Personagens lista;
    FILE *ar;

    lista.tam = 0;
    lista.pos = 0;
    leitor(ar, &lista);
    imprimir(lista);

    return 0;
}
