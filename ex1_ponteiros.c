#include <stdio.h>
int* alocar_vetor(int tam){
int *v;
v = (int *) malloc(tam*sizeof(int));
return v;
}

int main(){
int tam, i,x, pos = 0;
printf("Digite a quantidade de numeros: ");
scanf("%d", &tam);
int *vetor = alocar_vetor(tam);
int **vetor_saida = alocar_vetor(tam);
for(i = 0; i < tam; i ++){
    printf("Digite o valor %d do vetor: ", i+1);
    scanf("%d", &vetor[i]);
}
printf("Digite um numero X: ");
scanf("%d", &x);
for(i = 0; i < tam; i ++){
    if (vetor[i] == x){
        vetor_saida[pos] = &vetor[i];
        pos++;
    }
}
int tam_vetorsaida = sizeof(vetor_saida)/4;
for(i = 0; i < tam_vetorsaida; i ++){
    printf("%d", vetor_saida[i]);
}
}
