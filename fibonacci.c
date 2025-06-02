#include <stdio.h>
int main(){
    int quant, antigo = 1, atual = 1, novo = 1, i;
    printf("Digite a quantidade de numeros da sequencia : ");
    scanf("%d", &quant);
    if (quant == 1){
        printf("1");
    }
    else{
    printf("1");
    for(i = 0; i < quant - 1 ; i++){
        printf("\n%d", novo);
        novo = antigo + atual;
        antigo = atual;
        atual = novo;
    }
    }
}
