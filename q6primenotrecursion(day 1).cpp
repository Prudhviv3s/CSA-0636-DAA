#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num, int divisor) {
    if (num <= 2)
        return (num == 2);
    if (num % divisor == 0)
        return false;
    if (divisor * divisor > num)
        return true;
    return isPrime(num, divisor + 1);
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number <= 1) {
        printf("%d is not a prime number.\n", number);
    } else {
        bool prime = isPrime(number, 2);
        if (prime)
            printf("%d is a prime number.\n", number);
        else
            printf("%d is not a prime number.\n", number);
    }

    return 0;
}
