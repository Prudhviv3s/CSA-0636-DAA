#include <stdio.h>
unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    unsigned int number;
    printf("Enter a non-negative integer: ");
    scanf("%u", &number);

    printf("Factorial of %u = %llu\n", number, factorial(number));
    return 0;
}
