#include <stdio.h>
#include <math.h>
int main() {
    int c, i,n, m, k;
    scanf("%d", &c);
    for (i = 0; i < c; i++) {
        scanf("%d %d", &n, &m);
        int k = log10(n)*m +1;
        printf("%d\n", k);
    }
    return 0;
}
