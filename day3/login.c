#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];

    // Hardcoded credentials
    char correctUsername[] = "admin";
    char correctPassword[] = "pass123";

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    // Check credentials
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Invalid username or password.\n");
    }

    return 0;
}
