//code owner->Emon->Daffodil International university

#include <stdio.h>

// Function declarations
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);
float celsiusToKelvin(float celsius);
float kelvinToCelsius(float kelvin);

int main()
{
    int choice;
    float temp, convertedTemp;

    // Menu system
    while (1)
    {
        printf("\nTemperature Conversion Menu:\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Celsius to Kelvin\n");
        printf("4. Kelvin to Celsius\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            convertedTemp = celsiusToFahrenheit(temp);
            printf("Temperature in Fahrenheit: %.2f\n", convertedTemp);
            break;

        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            convertedTemp = fahrenheitToCelsius(temp);
            printf("Temperature in Celsius: %.2f\n", convertedTemp);
            break;

        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            convertedTemp = celsiusToKelvin(temp);
            printf("Temperature in Kelvin: %.2f\n", convertedTemp);
            break;

        case 4:
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            convertedTemp = kelvinToCelsius(temp);
            printf("Temperature in Celsius: %.2f\n", convertedTemp);
            break;

        case 5:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice, please try again.\n");
        }
    }
}

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheitToCelsius(float fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}

// Function to convert Celsius to Kelvin
float celsiusToKelvin(float celsius)
{
    return celsius + 273.15;
}

// Function to convert Kelvin to Celsius
float kelvinToCelsius(float kelvin)
{
    return kelvin - 273.15;
}
