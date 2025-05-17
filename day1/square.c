#include <stdio.h>

int main() {
    int number;
    int square, cube;

    printf("Enter a number: ");
    scanf("%d", &number);

    square = number * number;
    cube = number * number * number;

    printf("Square of %d is: %d\n", number, square);
    printf("Cube of %d is: %d\n", number, cube);

    return 0;
}
