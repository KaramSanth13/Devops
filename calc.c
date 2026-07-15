#include <stdio.h>

int main() {
    int choice, a, b;

    printf("1. Multiplication\n");
    printf("2. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            printf("Result = %d\n", a * b);
            break;

        case 2:
            printf("Result = %d\n", a /b);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
