#include <stdio.h>
int* alocar_vetor(int tam){
int *v;
v = (int *) malloc(tam*sizeof(int));
return v;
}
int max(int *vetor, int tam){
int maior = vetor[0], i;
for(i = 1; i < tam; i ++){
    if (vetor[i] > maior){
        maior = vetor[i];
    }
}
return maior;
}
int min(int *vetor, int tam){
int menor = vetor[0], i;
for(i = 1; i < tam; i ++){
    if (vetor[i] < menor){
        menor = vetor[i];
    }
}
return menor;
}
int main(){
int tam,i;
printf("Digite a quantidade de numeros: ");
scanf("%d", &tam);
int *vetor = alocar_vetor(tam);
for(i = 0; i < tam; i++){
    printf("Digite o valor %d do vetor: ", i+1);
    scanf("%d", &vetor[i]);
}
for(i = 0; i < tam; i++){
    printf("\n%d", vetor[i]);
}
printf("\nMenor numero: %d", min(vetor,tam));
printf("\nMaior numero: %d", max(vetor, tam));
}
