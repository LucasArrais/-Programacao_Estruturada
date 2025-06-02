#include <stdio.h>

int main() {
    int n, m, cont_dim = 0, final;
    scanf("%d %d", &n, &m);

    for(int i = n; i <= m; i++) {
        int copia_i = i;
        int cont_digitos = 0;

        // Calcula o número de dígitos
        while (copia_i > 0) {
            copia_i = copia_i / 10;
            cont_digitos++;
        }

        int digitos[cont_digitos];
        copia_i = i;

        // Extrai os dígitos do número i
        for (int j = 0; j < cont_digitos; j++) {
            digitos[j] = copia_i % 10;
            copia_i = copia_i / 10;
        }

        // Verifica se há dígitos repetidos
        int repetiu = 1;
        for (int k = 0; k < cont_digitos - 1; k++) {
            for (int w = k + 1; w < cont_digitos; w++) {
                if (digitos[k] == digitos[w]) {
                    repetiu = 0;
                    break;
                }
            }
            if (repetiu == 0) {
                break;
            }
        }

        // Conta os números sem dígitos repetidos
        if (repetiu == 0) {
            cont_dim++;
        }
    }

    final = m - n + 1 - cont_dim;
    printf("%d\n", final);

    return 0;
}

