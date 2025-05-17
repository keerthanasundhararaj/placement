#include <stdio.h>
int main() {
    float average;
    printf("Enter average marks: ");
    scanf("%f", &average);

    if (average >= 90) printf("Grade: A\n");
    else if (average >= 75) printf("Grade: B\n");
    else if (average >= 60) printf("Grade: C\n");
    else if (average >= 50) printf("Grade: D\n");
    else printf("Grade: F\n");

    return 0;
}
