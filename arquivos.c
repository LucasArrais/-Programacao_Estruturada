#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    FILE *arquivo = fopen("C:/Users/lucas/Desktop/arquivo.txt", "r");
    if (arquivo == NULL) {
        printf("ERRO AO ABRIR O ARQUIVO");
        return 1;
    }
    int cont_palavras = 0;
    char palavra[20];

    // Conta o n�mero de palavras no arquivo
    while (fscanf(arquivo, "%s", palavra) != EOF) {
        cont_palavras++;
    }

    // Aloca mem�ria para o vetor de ponteiros para as strings
    char **palavras = (char **)malloc(cont_palavras * sizeof(char *));
    if (palavras == NULL) {
        printf("Erro ao alocar mem�ria para o vetor de strings\n");
        return 1;
    }

    // Retorna para o in�cio do arquivo
    rewind(arquivo);

    // L� as palavras e as armazena no vetor
    int i = 0;
    while (fscanf(arquivo, "%s", palavra) != EOF) {
        palavras[i] = (char *)malloc((strlen(palavra) + 1) * sizeof(char)); // Aloca mem�ria para a string
        if (palavras[i] == NULL) {
            printf("Erro ao alocar mem�ria para a string %d\n", i);
            return 1;
        }
        strcpy(palavras[i], palavra); // Copia a palavra para a posi��o apropriada do vetor
        i++;
    }

    // Aloca mem�ria para o vetor de contagem de repeti��es
    int *reps = (int *)malloc(cont_palavras * sizeof(int)); // Corrigido para alocar a quantidade correta de mem�ria
    if (reps == NULL) {
        printf("Erro ao alocar mem�ria para o vetor de repeti��es\n");
        return 1;
    }
    // Coloca todos os elementos do vetor reps como 0
    for(int i = 0; i < cont_palavras; i++){
        reps[i] = 0;
    }

    // Conta as repeti��es de cada palavra
    for (i = 0; i < cont_palavras; i++) {
        for (int j = 0; j < cont_palavras; j++) {
            if (strcmp(palavras[i], palavras[j]) == 0) {
                reps[i]++;
            }
        }
    }

    // Exibe as palavras e suas repeti��es
    for (i = 0; i < cont_palavras; i++) {
        printf("%s = %d\n", palavras[i], reps[i]);
    }

    // Libera a mem�ria alocada
    for (i = 0; i < cont_palavras; i++) {
        free(palavras[i]);
    }
    free(palavras);
    free(reps);

    fclose(arquivo);
    return 0;
}
