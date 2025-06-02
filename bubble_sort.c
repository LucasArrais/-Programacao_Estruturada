#include <stdio.h>
int main(){
int n,i,j,k,l;
printf("Digite a quantidade de numeros: ");
scanf("%d", &n);
int vetor[n];
for(l = 0; l < n; l++){
    printf("Digite o elemento %d: ", l+1);
    scanf("%d", &vetor[l]);
}


for(k = 0; k < n;k++){
for(i = 0; i < n-1;i++){
    if(vetor[i] > vetor[i+1]){
        int vetor_conserv = vetor[i];
        vetor[i] = vetor[i+1];
        vetor[i+1] = vetor_conserv;
    }
}
}
for(j =0; j < n;j++){
    printf("%d", vetor[j]);
    printf("\n");
}
}
