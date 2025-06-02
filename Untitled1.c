#include <stdio.h>
#include <math.h>

double quant_numeros(double numero) {
    double log_numero = log10(numero);
    double arredondado = ceil(log_numero);
    return arredondado;
}

int main() {
    int c, i, m, k;
    double n;
    scanf("%d", &c);
    for (i = 0; i < c; i++) {
        scanf("%lf %d", &n, &m);
        double resultado = n;
        for (k = 0; k < m - 1; k++) {
            resultado *= n;
        }
        printf("%d ", resultado);
        printf("%.0f\n", quant_numeros(resultado));
    }
    return 0;
}
