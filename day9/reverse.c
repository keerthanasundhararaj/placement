#include <stdio.h>
int reverseNumber(int x, int y) {
    if (x == 0)
        return y;
    return reverseNumber(x/ 10, y * 10 + x % 10);
}

int main() {
    int number, reversed;

    printf("Enter a number: ");
    scanf("%d", &number);

    reversed = reverseNumber(number, 0);

    printf("Reversed number: %d\n", reversed);

    return 0;
}
