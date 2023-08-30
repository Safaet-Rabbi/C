#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter a value for n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0/i;
    }

    printf("The sum of the harmonic series up to %d is %.2f\n", n, sum);


}
