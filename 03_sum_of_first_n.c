#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d numbers = %lld\n", n, sum);
    return 0;
}
