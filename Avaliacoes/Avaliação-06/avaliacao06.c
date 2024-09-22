#include <stdio.h>

typedef struct {
    int codigo;
    char descricao[50];
    float valorUnitario;
    int qtdEstoque;
    float valorEstoque;
} Produto;

Produto produtos[100]; // array de struct de produtos
int numProdutos = 0; // número de produtos cadastrados

void mostrarMenu() {
    printf("----------------------------------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4) Fim\n");
    printf("Opção: __\n");
    printf("----------------------------------------------------------------------\n");
}

void entradaDeProdutos() {
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código: ");
    scanf("%d", &produtos[numProdutos].codigo);
    printf("Descrição: ");
    scanf("%49s", produtos[numProdutos].descricao);
    printf("Valor Unitário: ");
    scanf("%f", &produtos[numProdutos].valorUnitario);
    printf("Qtd Estoque: ");
    scanf("%d", &produtos[numProdutos].qtdEstoque);
    produtos[numProdutos].valorEstoque = produtos[numProdutos].valorUnitario * produtos[numProdutos].qtdEstoque;
    printf("Valor Estoque: %.2f\n", produtos[numProdutos].valorEstoque);
    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial) : ");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        numProdutos++;
    }
}

int main() {
    int opcao;
    do {
        mostrarMenu();
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                entradaDeProdutos();
                break;
            case 2:
                // listar os produtos (to be implemented)
                break;
            case 3:
                // calcular valor total do estoque (to be implemented)
                break;
            case 4:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);
    return 0;
}
