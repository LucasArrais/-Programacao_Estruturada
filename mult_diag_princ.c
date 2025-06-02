#include <stdio.h>
void mult_diag_princ(int **matriz ,int n){
int i;
for(i = 0;i < n;i++){
    matriz[i][i] = n*matriz[i][i];
}
}
int main(){
int matriz[3][3], i,j;
for(i = 0; i < 3;i ++){
    for(j = 0; j < 3; j++){
        printf("Digite o valor da matriz [%d][%d]: ",i,j);
        scanf("%d", &matriz[i][j]);
    }
}
for(i = 0; i < 3;i ++){
    for(j = 0; j < 3; j++){
        printf("%d", matriz[i][j]);
    }
    printf("\n");
}
mult_diag_princ(matriz,4);
for(i = 0; i < 3;i ++){
    for(j = 0; j < 3; j++){
        printf("%d", matriz[i][j]);
    }
    printf("\n");
}

}
