#include <stdio.h>

void construirMatriz(int N) {
    int matriz[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int min = i < j ? i : j;
            min = min < N - i - 1 ? min : N - i - 1;
            min = min < N - j - 1 ? min : N - j - 1;

            matriz[i][j] = min + 1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == N - 1) {
                printf("%3d", matriz[i][j]);
            } else {
                printf("%3d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int N;

    while (1) {
        scanf("%d", &N);

        if (N == 0) {
            break;
        }

        construirMatriz(N);
    }
    return 0;
}
