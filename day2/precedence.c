#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int result;

    result = a + b * c; // precedence: * > +
    printf("Result of a + b * c = %d\n", result); // 10 + (5 * 2) = 20

    result = (a + b) * c; // precedence changed by parentheses
    printf("Result of (a + b) * c = %d\n", result); // (10 + 5) * 2 = 30

    return 0;
}
