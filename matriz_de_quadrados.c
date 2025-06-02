#include <stdio.h>

int main() {
    int N, M;
    unsigned long long int matriz[20][20];

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &M);

        for (int j = 0; j < M; j++) {
            for (int k = 0; k < M; k++) {
                scanf("%llu", &matriz[j][k]);
                matriz[j][k] *= matriz[j][k];  // Calcula o quadrado do valor
            }
        }

        printf("Quadrado da matriz #%d:\n", i + 4);

        for (int j = 0; j < M; j++) {
            for (int k = 0; k < M; k++) {
                if (k == 0) {
                    printf("%llu", matriz[j][k]);
                } else {
                    printf(" %llu", matriz[j][k]);
                }
            }
            printf("\n");
        }

        if (i < N - 1) {
            printf("\n");
        }
    }

    return 0;
}
