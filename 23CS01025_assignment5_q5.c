#include <stdio.h>

int main() {
    int num;
    int sum = 0;
    char choice;

    do {
        printf("Provide the number: ");
        scanf("%d", &num);

        if (num % 2 == 0)
            sum += num;

        do {
            printf("Do you want to continue? (Y/N): ");
            scanf(" %c", &choice);

            if (choice == 'Y' || choice == 'y') {
                break;
            } else if (choice == 'N' || choice == 'n') {
                break;
            } else {
                printf("Invalid input. Please enter 'Y' to continue or 'N' to stop.\n");
            }
        } while (1);

    } while (choice == 'Y' || choice == 'y');

    printf("Sum of even numbers: %d\n", sum);

    return 0;
}
