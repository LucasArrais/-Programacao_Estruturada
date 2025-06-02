#include <stdio.h>
int* alocar_vetor(int tamanho){
int *v;
v = (int *)malloc(tamanho * sizeof(int));
return v;
}
int main(){
int tamanho;
printf("Digite um valor para a quantidade de numeros do vetor : ");
scanf("%d", &tamanho);
int *vetor = alocar_vetor(tamanho);
int *vetor_inverso = alocar_vetor(tamanho);
for(int i = 0; i < tamanho; i++){
printf("Digite o valor %d do vetor: ", i +1);
scanf("%d", &vetor[i]);
}
printf("=====VETOR ORIGINAL======\n");
for(int i = 0; i < tamanho; i ++){
    printf("%d ", vetor[i]);
}
for(int i = 0, j = tamanho -1; i < tamanho && j >= 0; i ++, j--){
    vetor_inverso[i] = vetor[j];
}
printf("\n\n=====VETOR INVERTIDO======\n");
for(int i = 0; i < tamanho; i ++){
    printf("%d ", vetor_inverso[i]);
}
}
