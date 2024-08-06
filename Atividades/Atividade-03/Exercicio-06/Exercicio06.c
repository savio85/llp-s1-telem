#Questão 1#

Escreva um programa que leia 5 números inteiros do usuário e armazene-os em um array. Em seguida, exiba a soma desses números.
- Dica: Use um loop `for` para ler os números e outro loop para calcular a soma.

  #include <stdio.h>

int main() {
    int numeros[5]; // Array para armazenar os 5 números inteiros
    int soma = 0; // Variável para calcular a soma

    // Loop for para ler os 5 números inteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Loop for para calcular a soma
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    // Imprime o resultado
    printf("A soma dos 5 números inteiros é: %d\n", soma);

    return 0;
}

#Questao 2#

Crie um programa que leia uma matriz 3x3 (ou seja, uma matriz com 3 linhas e 3 colunas) e exiba a soma dos elementos da diagonal principal.
- Dica: Use um loop `for` aninhado para ler os elementos da matriz e calcule a soma dos elementos da diagonal principal.

  #include <stdio.h>

int main() {
    int matriz[3][3]; // Matriz 3x3
    int soma_diagonal = 0; // Variável para calcular a soma da diagonal principal

    // Loop for aninhado para ler os elementos da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcula a soma da diagonal principal
    for (int i = 0; i < 3; i++) {
        soma_diagonal += matriz[i][i];
    }

    // Imprime o resultado
    printf("A soma da diagonal principal é: %d\n", soma_diagonal);

    return 0;
}
