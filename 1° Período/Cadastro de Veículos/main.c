#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char placa[8];
    char marca[50];
    char modelo[50];
    int ano;
    float preco;
    char tipo[10];
    char observacao[100];
} Veiculo;

// Função do menu principal

void exibirMenu() {
    printf("\n--- Menu ---\n");
    printf("1. Listar todos os veiculos\n");
    printf("2. Pesquisar\n");
    printf("3. Cadastrar\n");
    printf("4. Editar\n");
    printf("5. Excluir\n");
    printf("6. Sair do programa\n");
    printf("---------------\n");
    printf("Digite a opcao desejada: ");
}

// Função para pesquisar

void pesquisarVeiculo(Veiculo *veiculos, int quantidade) {
    char placa[8];
    printf("\nDigite a placa do veiculo: ");
    scanf("%s", placa);

    for (int i = 0; i < quantidade; i++) {
        if (strcmp(veiculos[i].placa, placa) == 0) {
            printf("\nVeiculo encontrado:\n");
            printf("Placa: %s\n", veiculos[i].placa);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("Preco: %.2f\n", veiculos[i].preco);
            printf("Tipo: %s\n", veiculos[i].tipo);
            printf("Observacao: %s\n", veiculos[i].observacao);
            return;
        }
    }

    printf("\nVeiculo nao encontrado.\n");
}

// Função para cadastrar

void cadastrarVeiculo(Veiculo *veiculos, int *quantidade) {
    Veiculo novoVeiculo;

    printf("\n--- Cadastro de Veiculo ---\n");

    do{
    printf("Digite a placa do veiculo: ");
    scanf("%s", novoVeiculo.placa);

    for (int i = 0; i < *quantidade; i++) {
        if (strcmp(veiculos[i].placa, novoVeiculo.placa) == 0) {
            printf("\nPlaca ja cadastrada. O veiculo nao pode ser cadastrado.\n");
            return;
        }
    }
    }while(strlen( novoVeiculo.placa)!=7);

    printf("Digite a marca: ");
    scanf("%s", novoVeiculo.marca);

    printf("Digite o modelo: ");
    scanf(" %[^\n]", novoVeiculo.modelo);

    printf("Digite o ano: ");
    scanf("%d", &novoVeiculo.ano);

    printf("Digite o preco: ");
    scanf("%f%*c", &novoVeiculo.preco);

    printf("Digite o tipo(Carro ou Moto): ");
    scanf("%s", novoVeiculo.tipo);

    printf("Digite uma observacao (opcional): ");
    scanf(" %[^\n]", novoVeiculo.observacao);

    veiculos[*quantidade] = novoVeiculo;
    (*quantidade)++;

    FILE *arquivo = fopen("veiculos.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return;
    }

    fprintf(arquivo, "%d\n", *quantidade);

    for (int i = 0; i < *quantidade; i++) {
        fprintf(arquivo, "%s;%s;%s;%d;%.2f;%s;%s\n",
                veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo,
                veiculos[i].ano, veiculos[i].preco, veiculos[i].tipo,
                veiculos[i].observacao);
    }

    fclose(arquivo);

    printf("\nVeiculo cadastrado com sucesso.\n");
}

// Função para listar os veículos

void listarVeiculos(Veiculo *veiculos, int quantidade) {
    printf("\nTotal de veiculos: %d\n", quantidade);
    printf("\nVeiculos cadastrados:\n");

    for (int i = 0; i < quantidade; i++) {
        printf("\nVeiculo %d:\n", i + 1);
        printf("Placa: %s\n", veiculos[i].placa);
        printf("Marca: %s\n", veiculos[i].marca);
        printf("Modelo: %s\n", veiculos[i].modelo);
        printf("Ano: %d\n", veiculos[i].ano);
        printf("Preco: %.2f\n", veiculos[i].preco);
        printf("Tipo: %s\n", veiculos[i].tipo);
        printf("Observacao: %s\n", veiculos[i].observacao);
    }
}

// Função para editar

void editarVeiculo(Veiculo *veiculos, int quantidade) {
    char placa[8];
    printf("\nDigite a placa do veiculo: ");
    scanf("%s", placa);

    for (int i = 0; i < quantidade; i++) {
        if (strcmp(veiculos[i].placa, placa) == 0) {
            printf("\nVeiculo encontrado:\n");
            printf("Placa: %s\n", veiculos[i].placa);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("Preco: %.2f\n", veiculos[i].preco);
            printf("Tipo: %s\n", veiculos[i].tipo);
            printf("Observacao: %s\n", veiculos[i].observacao);

            Veiculo novoVeiculo;

            printf("\n--- Edicao ---\n");

            printf("Digite a nova marca: ");
            scanf("%s", novoVeiculo.marca);

            printf("Digite o novo modelo: ");
            scanf("%s", novoVeiculo.modelo);

            printf("Digite o novo ano: ");
            scanf("%d", &novoVeiculo.ano);

            printf("Digite o novo preco: ");
            scanf("%f", &novoVeiculo.preco);

            printf("Digite o novo tipo do veiculo (Carro ou Moto): ");
            scanf("%s", novoVeiculo.tipo);

            printf("Digite a nova observacao (opcional): ");
            scanf(" %[^\n]s", novoVeiculo.observacao);

            veiculos[i] = novoVeiculo;

            FILE *arquivo = fopen("veiculos.txt", "w");
            if (arquivo == NULL) {
                printf("Erro ao abrir o arquivo.\n");
                return;
            }

            fprintf(arquivo, "%d\n", quantidade);

            for (int i = 0; i < quantidade; i++) {
                fprintf(arquivo, "%s;%s;%s;%d;%.2f;%s;%s\n",
                        veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo,
                        veiculos[i].ano, veiculos[i].preco, veiculos[i].tipo,
                        veiculos[i].observacao);
            }

            fclose(arquivo);

            printf("\nVeiculo atualizado.\n");
            return;
        }
    }

    printf("\nVeiculo nao encontrado.\n");
}

// Função para excluir

void excluirVeiculo(Veiculo *veiculos, int *quantidade) {
    char placa[8];
    printf("\nDigite a placa do veiculo: ");
    scanf("%s", placa);

    for (int i = 0; i < *quantidade; i++) {
        if (strcmp(veiculos[i].placa, placa) == 0) {
            printf("\nVeiculo encontrado:\n");
            printf("Placa: %s\n", veiculos[i].placa);
            printf("Marca: %s\n", veiculos[i].marca);
            printf("Modelo: %s\n", veiculos[i].modelo);
            printf("Ano: %d\n", veiculos[i].ano);
            printf("Preco: %.2f\n", veiculos[i].preco);
            printf("Tipo: %s\n", veiculos[i].tipo);
            printf("Observacao: %s\n", veiculos[i].observacao);

            char confirmacao;
            printf("\nDeseja realmente excluir este veiculo? (S/N): ");
            scanf(" %c", &confirmacao);

            if (confirmacao == 'S' || confirmacao == 's') {
                for (int j = i; j < *quantidade - 1; j++) {
                    veiculos[j] = veiculos[j + 1];
                }

                (*quantidade)--;

                FILE *arquivo = fopen("veiculos.txt", "w");
                if (arquivo == NULL) {
                    printf("Erro ao abrir o arquivo.\n");
                    return;
                }

                fprintf(arquivo, "%d\n", *quantidade);

                for (int i = 0; i < *quantidade; i++) {
                    fprintf(arquivo, "%s;%s;%s;%d;%.2f;%s;%s\n",
                            veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo,
                            veiculos[i].ano, veiculos[i].preco, veiculos[i].tipo,
                            veiculos[i].observacao);
                }

                fclose(arquivo);

                printf("\nVeiculo excluido.\n");
                return;
            } else {
                printf("\nExclusao do veiculo cancelada.\n");
                return;
            }
        }
    }

    printf("\nVeiculo nao encontrado.\n");
}

int main() {
    FILE *arquivo = fopen("veiculos.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo nao encontrado. Criando arquivo...\n");
        arquivo = fopen("veiculos.txt", "w");
        if (arquivo == NULL) {
            printf("Erro ao criar o arquivo.\n");
            return 1;
        }

        fprintf(arquivo, "0\n");
        fclose(arquivo);

    } else {
        fclose(arquivo);
    }

    Veiculo veiculos[100];
    int quantidade = 0;

    arquivo = fopen("veiculos.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fscanf(arquivo, "%d\n", &quantidade);

    for (int i = 0; i < quantidade; i++) {
        fscanf(arquivo, "%[^;];%[^;];%[^;];%d;%f;%[^;];%[^\n]\n",
               veiculos[i].placa, veiculos[i].marca, veiculos[i].modelo,
               &veiculos[i].ano, &veiculos[i].preco, veiculos[i].tipo,
               veiculos[i].observacao);
    }

    fclose(arquivo);

    int opcao;
    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                listarVeiculos(veiculos, quantidade);
                break;
            case 2:
                pesquisarVeiculo(veiculos, quantidade);
                break;
            case 3:
                cadastrarVeiculo(veiculos, &quantidade);
                break;
            case 4:
                editarVeiculo(veiculos, quantidade);
                break;
            case 5:
                excluirVeiculo(veiculos, &quantidade);
                break;
            case 6:
                printf("\nEncerrando o programa.\n");
                break;
            default:
                printf("\nOpcao invalida. Tente novamente.\n");
                break;
        }
    } while (opcao != 6);

    return 0;
}





