#include <stdio.h>
#include <stdlib.h>

int* inverter_vetor(int *vetor, int tamanho) {
    int *vetor_inv = (int *)malloc(tamanho * sizeof(int));

    if (tamanho == 0) {
        return NULL;
    } else {
        inverter_vetor(vetor + 1, tamanho - 1);
        vetor_inv[tamanho - 1] = *vetor;
    }

    return vetor_inv;
}
int main(){
int vetor[] = {1,2,3};
int *vetor_inv = (int *)malloc(3 * sizeof(int));
vetor_inv = inverter_vetor(vetor, 3);
for(int i = 0;i < 3 ; i++){
    printf("%d", vetor_inv[i]);
}
free(vetor_inv);
}
