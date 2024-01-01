#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    int choice;

    printf("Enter 1 to convert Fahrenheit to Celsius\n");
    printf("Enter 2 to convert Celsius to Fahrenheit\n");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f F = %.2f C", fahrenheit, celsius);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.2f C = %.2f F", celsius, fahrenheit);
    } else {
        printf("Invalid choice");
    }

    return 0;
}
