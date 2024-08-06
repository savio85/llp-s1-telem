Questão 1
Crie um programa que leia dois números inteiros do usuário e exiba a soma, subtração, multiplicação e divisão desses números.

  // Solicita os números ao usuário
printf("Digite o primeiro número: ");
scanf("%d", &num1);

printf("Digite o segundo número: ");
scanf("%d", &num2);

// Realiza as operações
int soma = num1 + num2;
int subtracao = num1 - num2;
int multiplicacao = num1 * num2;
float divisao = (float)num1 / num2; // Conversão para float para evitar divisão inteira

// Exibe os resultados
printf("Soma: %d\n", soma);
printf("Subtração: %d\n", subtracao);
printf("Multiplicação: %d\n", multiplicacao);
printf("Divisão: %.2f\n", divisao); // Exibe com duas casas decimais

return 0;
}

Questão 2
Escreva um programa que converta uma temperatura em graus Celsius para Fahrenheit. O usuário deve inserir a temperatura em Celsius.

  #include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Solicita a temperatura em Celsius ao usuário
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Converte a temperatura para Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Exibe o resultado
    printf("%.2f graus Celsius é igual a %.2f graus Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

Questao 3
Peça ao usuário para digitar um número inteiro. Verifique se o número é par ou ímpar e exiba a mensagem correspondente.

#include <stdio.h>

int main() {
    int numero;

    // Solicita o número ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    return 0;
}

Questão 4
Leia três notas (pesos 2, 3 e 5) e calcule a média ponderada. Exiba a média resultante.
  
  #include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    // Solicita as notas ao usuário
    printf("Digite a nota 1 (peso 2): ");
    scanf("%f", &nota1);
    printf("Digite a nota 2 (peso 3): ");
    scanf("%f", &nota2);
    printf("Digite a nota 3 (peso 5): ");
    scanf("%f", &nota3);

    // Calcula a média ponderada
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

    // Exibe a média resultante
    printf("A média ponderada é: %.2f\n", media);

    return 0;
}

Questão 5
Leia dois números inteiros e troque seus valores sem usar uma variável temporária.#include <stdio.h>

int main() {
    int a, b;

    // Solicita os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Troca os valores sem usar uma variável temporária
    a = a + b;
    b = a - b;
    a = a - b;

    // Exibe os valores trocados
    printf("Agora, o primeiro número é: %d\n", a);
    printf("E o segundo número é: %d\n", b);

    return 0;
}
