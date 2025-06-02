#include <stdio.h>
#include <math.h>

float retorna_media(float *vetor, int tamanho) {
    float soma = 0;
    int i;
    for (i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return (soma / tamanho);
}

float mais_prox_media(float *vetor, int tamanho) {
    float mais_prox = vetor[0];
    int i;
    float media = retorna_media(vetor, tamanho);
    float menor_dif_abs = fabs(vetor[0] - media);
    for (i = 1; i < tamanho; i++) {
        float dif = fabs(vetor[i] - media);
        if (dif < menor_dif_abs) {
            menor_dif_abs = dif;
            mais_prox = vetor[i];
        }
    }
    return mais_prox;
}

int main() {
    int tamanho, i;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &tamanho);
    float vetor[tamanho];
    for (i = 0; i < tamanho; i++) {
        printf("Digite o valor %d do vetor: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    float mais_proximo = mais_prox_media(vetor, tamanho);
    printf("\n%f", mais_proximo);
    return 0;
}
