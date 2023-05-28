#include <stdio.h>

int main() {
    int num, position = 0;

    printf("Enter a binary number: ");
    scanf("%d", &num);
    position = __builtin_ctz(num) + 1;
    printf("Position of first 1 in LSB: %d\n", position);
    return 0;
}
