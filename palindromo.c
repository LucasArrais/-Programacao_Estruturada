#include <stdio.h>
#include <string.h>

int main() {
    char palavra[30];
    int i, j;
    setbuf(stdin, 0);
    printf("Digite uma palavra: ");
    fgets(palavra, 30, stdin);

    // Removendo o caractere de nova linha
    palavra[strcspn(palavra, "\n")] = '\0';

    int tamanho = strlen(palavra);
    char palavra_ao_contrario[30];
    palavra_ao_contrario[tamanho] = '\0'; // Garanta que o último caractere seja '\0'

    // Invertendo a palavra e armazenando em palavra_ao_contrario
    for (i = 0, j = tamanho - 1; i < tamanho; i++, j--) {
        palavra_ao_contrario[i] = palavra[j];
    }

    printf("%s\n", palavra);
    printf("%s\n", palavra_ao_contrario);

    // Comparando a palavra original com a palavra invertida
    if (strcmp(palavra, palavra_ao_contrario) == 0) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}
