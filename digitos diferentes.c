#include <stdio.h>

int temDigitosRepetidos(int numero) {
    int ocorrencias[10] = {0,0,0,0,0,0,0,0,0,0};
        int digito = numero % 10;
        if (ocorrencias[digito] > 0) {
            return 1;
        }
        ocorrencias[digito]++;
        numero /= 10;
    }
    return 0;
}

int main() {
    int n, m;

    while (scanf("%d %d", &n, &m) != EOF) {
        int cont_repetiu = 0;

        for (int i = n; i <= m; i++) {
            if (temDigitosRepetidos(i)) {
                cont_repetiu++;
            }
        }
        printf("%d\n", m - n + 1 - cont_repetiu);
    }

    return 0;
}
