#include <stdio.h>
#include <string.h>

int main(void) {

    char operation[100];
    float num1 = 0;
    float num2 = 0;
    float answer = 0;

    printf("Welcome to a simple calculator\n");
    printf("To use this calculator insert the operation then the first number then the second number\n");
    printf("Desired Operation\n");
    printf("Operation options (add,sub,multi,divide)");
    fgets(operation, sizeof operation, stdin);
    printf("Desired first number");
    scanf("%f", &num1);
    printf("Desired second number");
    scanf("%f", &num2);

    if (strcmp(operation, "add\n") == 0) {
        answer = num1 + num2;
    } else if (strcmp(operation, "sub\n") == 0) {
        answer = num1 - num2;
    } else if (strcmp(operation, "multi\n") == 0) {
        answer = num1 * num2;
    } else if (strcmp(operation, "divide\n") == 0) {
        answer = num1 / num2;
    } else {
        printf("Please select a valid operation");
    }

    printf("Answer: %f", answer );


    return 0;
}
