#include <stdio.h>

int main() {
    char operacao;
    scanf(" %c", &operacao);

    int i, j, l, k;
    double matriz[12][12];
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &matriz[i][j]);
        }
    }
    double total = 0;

    for(l = 1; l < 11;l++){
        total = total + matriz[l][11];
    }
    for(l = 2; l < 10;l++){
        total = total + matriz[l][10];
    }
    for(l = 3; l < 9;l++){
        total = total + matriz[l][9];
    }
    for(l = 4; l < 8;l++){
        total = total + matriz[l][8];
    }
    for(l = 5; l < 7;l++){
        total = total + matriz[l][7];
    }
    double media = total / 30.0;
    if (operacao == 'S') {
        printf("%.1lf", total);
        printf("\n");
    }
    if (operacao == 'M') {
        printf("%.1lf", media);
        printf("\n");
    }

    return 0;
}
