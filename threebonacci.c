#include <stdio.h>
#include <stdbool.h>

bool temtres(int numero) {
    int numero_copia = numero;
    while (numero_copia > 0) {
        if (numero_copia % 10 == 3) {
            return true;
        }
        numero_copia = numero_copia / 10;
    }
    return false;
}

int main(){
    int antigo = 1, atual = 1, novo, tamanho, pos_three = 0;
    scanf("%d", &tamanho);
    int termo_atual = 0;
    while (termo_atual < tamanho){
        novo = atual + antigo;
        if (novo % 3 == 0 || temtres(novo) == true){
            pos_three++;
            termo_atual++;
        }
        antigo = atual;
        atual = novo;
    }
    printf("%d\n", novo);
    return 0;
}
