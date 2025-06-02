#include <stdio.h>
#include <stdlib.h>
int *allocar_vetor(int tam){
int *v;
v = (int*) malloc(tam*sizeof(int));
}
int main() {
    int tam,i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int *vetor = allocar_vetor(tam);
    for(i = 0; i < tam; i ++){
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%d", &vetor[i]);

    }
    for(i = 0; i < tam; i ++){
        printf("%d\n", vetor[i]);
    }
    free(vetor);
}

