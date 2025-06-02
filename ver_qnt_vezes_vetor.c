#include <stdio.h>
int min(int *vetor,int tamanho){
    int menor = vetor[0];
    int i;
    for(i = 1; i < tamanho; i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    return menor;
    }
int max(int *vetor,int tamanho){
    int maior = vetor[0];
    int i;
    for(i = 1; i < tamanho; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
    }
int contar_ocorrencias(int *vetor, int tamanho, int n){
    int i, cont = 0;
    for(i = 0; i < tamanho; i++){
        if (vetor[i] == n){
            cont++;
        }
    }
return cont;

}
int main(){
int tam, i;
printf("Digite a quantidade de numeros :");
scanf("%d", &tam);
int vetor[tam];
for (i = 0 ; i < tam; i++){
printf("Digite o valor %d do vetor : ", i+1);
scanf("%d", &vetor[i]);
}
for(i = min(vetor,tam); i <= max(vetor,tam); i++){
    if (contar_ocorrencias(vetor,tam,i) > 0){
        printf("\n%d ocorre %d vezes",i,contar_ocorrencias(vetor,tam,i));
    }
}
}
