#include <stdio.h>
int* inverte_vetor(int *vetor, int tamanho, int inicio){
int *v = (int *)malloc(tamanho * sizeof(int));
if (inicio == tamanho - 1)
    v[inicio] = vetor[inicio];
else{
    inverte_vetor(vetor,tamanho,inicio + 1);
    v[inicio] = vetor[inicio];
}
return v;
}
int main(){
    int vetor[3] = {1,2,3};
    int *vetor_inv = inverte_vetor(int vetor, 3,0);
    for(int i = 0; i < 3 ; i++){
        printf("%d")
    }
}
