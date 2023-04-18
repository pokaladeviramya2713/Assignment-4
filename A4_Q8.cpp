#include <stdio.h>

union Data {
    int int_val;
    float float_val;
};

int main() {
    union Data data;
    int choice;

    printf("Enter 1 to enter an integer value, or 2 to enter a float value: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter an integer value: ");
        scanf("%d", &data.int_val);
        printf("You entered the integer value: %d\n", data.int_val);
    }
    else if (choice == 2) {
        printf("Enter a float value: ");
        scanf("%f", &data.float_val);
        printf("You entered the float value: %f\n", data.float_val);
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}

