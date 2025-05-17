#include <stdio.h>

int main() {
    char name[50];
    int age;
    float salary;

    printf("Enter employee name: ");
    scanf("%s", name);  
    scanf("%d", &age);

    printf("Enter employee age: ");
    scanf("%d", &age);

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);

    return 0;
}
