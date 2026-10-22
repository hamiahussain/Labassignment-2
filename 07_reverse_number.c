#include <stdio.h>

int main() {
    long long num, reversed = 0;
    int negative = 0;
    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0) {
        negative = 1;
        num = -num;
    }
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    if (negative) reversed = -reversed;

    printf("Reversed number = %lld\n", reversed);
    return 0;
}
