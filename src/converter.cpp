#include "converter.hpp"
#include <iostream>

using namespace std;


double inchesToCentimeters(double inches) {
    return inches * 2.54;
}

double centimetersToInches(double cm) {
    return cm / 2.54;
}

double poundsToKilograms(double pounds) {
    return pounds * 0.453592;
}

double kilogramsToPounds(double kg) {
    return kg / 0.453592;
}

double fahrenheitToCelsius(double F) {
    return (F - 32) * 5 / 9.0;
}

double celsiusToFahrenheit(double C) {
    return C * 9 / 5.0 + 32;
}

bool isValidMenuChoice(int choice) {
    return choice >= EXIT_CHOICE && choice <= CELSIUS_TO_FAHRENHEIT;
}

bool requiresNonNegativeValue(int choice) {
    return choice >= INCHES_TO_CENTIMETERS && choice <= KILOGRAMS_TO_POUNDS;
}

bool isValidValueForChoice(int choice, double value) {
    if (!isValidMenuChoice(choice) || choice == EXIT_CHOICE) {
        return false;
    }
    
    if (requiresNonNegativeValue(choice)) {
        return value >= 0;
    }
    
    return true;
}

void printMenu() {
    cout << "--- Unit Converter Menu ---" << endl;
    cout << "0. Exit" << endl;
    cout << "1. Inches to Centimeters" << endl;
    cout << "2. Centimeters to Inches" << endl;
    cout << "3. Pounds to Kilograms" << endl;
    cout << "4. Kilograms to Pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "Enter choice: ";
}