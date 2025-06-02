#include <stdio.h>
int max(*array, int tamanho){
static maior = array[tamanho - 1];
if (tamanho == 0) return;
else{
    if (array[tamanho - 2] > maior){
        maior = array[tamanho - 2];
    }
    max(array,tamanho-1);
}
    return maior;
}
