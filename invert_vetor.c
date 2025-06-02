#include <stdio.h>
int *invert_vetor(int *array, int tamanho,int *inv_array,int inicio){
if (tamanho == 0){
    return *array;
}
else{
    inv_array[inicio] = array[tamanho - 1];
    return invert_vetor(array,tamanho - 1,inv_array, inicio + 1);
}
}
int main(){
int vetor[5] = {1,3,4,6,9}, i;
int vetor_inv[5];
invert_vetor(vetor,5,vetor_inv,0);
for(i = 0 ; i < 5 ; i ++){
    printf("\n%d", vetor_inv[i]);

}
}
