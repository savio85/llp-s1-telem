#Questao 1#
Escreva um programa que leia um número inteiro e verifique se ele é positivo, negativo ou zero. Use a declaração `if`.
  #include <stdio.h>

int main() {
    int numero;

    // Lê o número do usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo, negativo ou zero
    if (numero > 0) {
        printf("O número %d é positivo.\n", numero);
    } else if (numero < 0) {
        printf("O número %d é negativo.\n", numero);
    } else {
        printf("O número %d é zero.\n", numero);
    }

    return 0;
}

#Questão 2

 Crie um programa que determine se um ano é bissexto ou não. 
 Um ano é bissexto se for divisível por 4, exceto quando é divisível por 100 (a menos que também seja divisível por 400).

   #include <stdio.h>

// Função para verificar se um ano é bissexto
int eh_bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // Ano é bissexto
    } else {
        return 0; // Ano não é bissexto
    }
}

int main() {
    int ano;

    // Lê o ano do usuário
    printf("Digite um ano: ");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if (eh_bissexto(ano)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}

#Questão 3#

 Implemente um programa que leia um número de 1 a 7 e exiba o dia da semana correspondente (1 = domingo, 2 = segunda-feira, etc.).

#include <stdio.h>

int main() {
    int dia;

    // Lê o número do usuário
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &dia);

    // Verifica se o número é válido
    if (dia < 1 || dia > 7) {
        printf("Número inválido. Por favor, digite um número de 1 a 7.\n");
        return 1;
    }

    // Exibe o dia da semana correspondente
    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
    }

    return 0;
}

#Questao 4#

Escreva um programa que leia dois números inteiros e exiba o maior deles usando o operador ternário.
- Dica: Use a expressão `(a > b) ? a : b` para encontrar o maior número.

#include <stdio.h>

int main() {
    int a, b;

    // Lê os dois números do usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Encontra o maior número usando o operador ternário
    int maior = (a > b) ? a : b;

    // Exibe o maior número
    printf("O maior número é: %d\n", maior);

    return 0;
}

