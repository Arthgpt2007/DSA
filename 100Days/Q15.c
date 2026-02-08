#include <stdio.h>

long long power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
   else {
        return base * power(base, exp - 1);
    }
}

int main() {
    int a, b;
    long long result;

    printf("Enter base (a): ");
    scanf("%d", &a);

    printf("Enter exponent (b): ");
    scanf("%d", &b);

    if (b < 0) {
        printf("Error: This function does not handle negative exponents.\n");
        return 1;
    }

    result = power(a, b);
    printf("%d^%d = %lld\n", a, b, result);

    return 0;
}
