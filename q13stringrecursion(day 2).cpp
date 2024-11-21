#include <stdio.h>

void reverseString(char *str) {
    if (*str) {
        reverseString(str + 1);
        printf("%c", *str);
    }
}
int main() {
    char str[] = "Hello, World!";
    reverseString(str);
    return 0;
}
