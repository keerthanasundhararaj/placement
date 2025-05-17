#include <stdio.h>

int main() {
    int temp;
    printf("Enter temperature: ");
    scanf("%d", &temp);

    if (temp < 10)
        printf("Wear a Jacket\n");
    else if (temp <= 20)
        printf("Wear a Sweater\n");
    else
        printf("Wear a T-shirt\n");

    return 0;
}