#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char linha[100];

    // 1. Cria um arquivo que armazena linhas de textos
    arquivo = fopen("meu_arquivo.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar arquivo!\n");
        return 1;
    }

    // 2. O Arquivo será alimentado por dados digitados no teclado
    printf("Digite as linhas de texto (digite 'sair' para finalizar):\n");
    while (1) {
        printf("> ");
        fgets(linha, 100, stdin);
        linha[strcspn(linha, "\n")] = 0; // remove o caractere de quebra de linha

        if (strcmp(linha, "sair") == 0) {
            break;
        }

        // 3. Gravar a string lida do teclado no arquivo
        fprintf(arquivo, "%s\n", linha);
    }

    // 5. Fechar o arquivo
    fclose(arquivo);

    // 6. Abrir o arquivo no modo de leitura
    arquivo = fopen("meu_arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo para leitura!\n");
        return 1;
    }

    // 7. Ler cada linha do arquivo e mostra-la no vídeo
    printf("Conteúdo do arquivo:\n");
    while (fgets(linha, 100, arquivo) != NULL) {
        printf("%s", linha);
    }

    // 8. Fechar o arquivo
    fclose(arquivo);

    return 0;
}
