#include <stdio.h>

// Addition
float addition(float num1, float num2) {

    float result;

    result = num1 + num2;

    return result;
}

// Subtraction
float subtraction(float num1, float num2) {

    float result;

    result = num1 - num2;

    return result;
}

// Multiplication
float multiplication(float num1, float num2) {

    float result;

    result = num1 * num2;

    return result;
}

// Division
float division(float num1, float num2){

    float result;

    result = num1 / num2;

    return result;
}


// 
int main() {

    int choice;
    float number_1, number_2, result;

    printf("SIMPLE CALCULATOR \n");
    printf("Choose what do you want to do? \n");

    // mathematical operations
    printf("Addition - write 1");
    printf("Subtraction - write 2");
    printf("Multiplication - write 3");
    printf("Division - write 4");
        scanf("%d", &choice);

    // numbers
    printf("Provide first number:");
        scanf("%f", &number_1);

    printf("Provide second number: ");
        scanf("%f", &number_2);

    // choosing what to do
    switch (choice) {

        case 1:
            result = addition(number_1, number_2);
            break;

        case 2:
            result = subtraction(number_1, number_2);
            break;

        case 3:
            result = multiplication(number_1, number_2);
            break;

        case 4:
            result = division(number_1, number_2);
            break;

        default:
            printf("Wrong operation!");
            return 1;  // ending with error
    }

    // showing result
    printf("Result of your operation: %.2f ", result);

    return 0; // ending with success
}