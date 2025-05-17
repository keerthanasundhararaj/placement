#include <stdio.h>   

int main() {
    int marks[5], i, total = 0;
    float average;

    printf("Enter marks of 5 subjects: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5.0;
    printf("Total = %d, Average = %.2f\n", total, average);
    return 0;
}