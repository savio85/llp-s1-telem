#Questao 1

Escreva um programa que exiba os números pares de 1 a 10 usando um loop `while`.
- Dica: Use o operador de módulo (`%`) para verificar se um número é par.

  #include <stdio.h>

int main() {
    int i = 1;

    // Loop while para exibir números pares
    while (i <= 10) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            printf("%d é par\n", i);
        }
        // Incrementa o contador
        i++;
    }

    return 0;
}

#Questao 2#

Crie um programa que solicite ao usuário que adivinhe um número entre 1 e 100. O programa deve continuar pedindo até que o usuário acerte o número ou digite `-1` para sair.
- Dica: Use um loop `do while` para repetir a solicitação.

  #include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Gera um número aleatório entre 1 e 100
    srand(time(NULL));
    int numero_secreto = rand() % 100 + 1;

    int chute;

    // Loop do while para solicitar chutes
    do {
        // Solicita um chute ao usuário
        printf("Adivinhe um número entre 1 e 100 (-1 para sair): ");
        scanf("%d", &chute);

        // Verifica se o chute é válido
        if (chute < -1 || chute > 100) {
            printf("Chute inválido. Tente novamente.\n");
        } else if (chute == -1) {
            printf("Você desistiu. O número secreto era %d.\n", numero_secreto);
        } else if (chute < numero_secreto) {
            printf("Seu chute é baixo. Tente novamente.\n");
        } else if (chute > numero_secreto) {
            printf("Seu chute é alto. Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou o número secreto: %d.\n", numero_secreto);
        }
    } while (chute != numero_secreto && chute != -1);

    return 0;
}

#Questao 3#

Escreva um programa que calcule a soma dos primeiros 10 números inteiros positivos usando um loop `for`.
- Dica: Use uma variável acumuladora para calcular a soma.

#include <stdio.h>

int main() {
    int soma = 0; // Variável acumuladora

    // Loop for para calcular a soma
    for (int i = 1; i <= 10; i++) {
        soma += i; // Acumula a soma
    }

    // Imprime o resultado
    printf("A soma dos primeiros 10 números inteiros positivos é: %d\n", soma);

    return 0;
}
