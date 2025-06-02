#include <stdio.h>

int inverter(int n) {
    static int n_inv = 0;
    if (n == 0) {
        return 0;
    } else {
        n_inv = n_inv * 10 + n % 10;
        inverter(n / 10);
        return n_inv;
    }
}

int main() {
    printf("%d", inverter(123));
    return 0;
}
