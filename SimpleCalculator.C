#include <stdio.h>
int main() {
    float num1, num2, result;
    char operators;
    int choice;

    while (1) {
        printf("\n===== Simple Calculator =====\n");
        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operators);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch (operators) {
            case '+':
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

            case '-':
                result = num1 - num2;
                printf("Result = %.2f\n", result);
                break;

            case '*':
                result = num1 * num2;
                printf("Result = %.2f\n", result);
                break;

            case '/':
                if (num2 != 0)
                    printf("Result = %.2f\n", num1 / num2);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;

            default:
                printf("Invalid operator!\n");
        }

        printf("\nDo you want to continue? (1 = Yes / 0 = No): ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Calculator Closed.\n");
            break;
        }
    }

    return 0;
}