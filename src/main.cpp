#include "converter.hpp"
#include <iostream>

using namespace std;

int main() {
    int choice;
    double value;

    do {
        cout << "Unit Converter" << endl;
        cout << "1. Inches to Centimeters" << endl;
        cout << "2. Centimeters to Inches" << endl;
        cout << "3. Pounds to Kilograms" << endl;
        cout << "4. Kilograms to Pounds" << endl;
        cout << "5. Fahrenheit to Celsius" << endl;
        cout << "6. Celsius to Fahrenheit" << endl;
        cout << "7. Exit" << endl;
        cout << "Choice (1-7): " << endl;
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter inches:";
                cin >> value;

                if(value < 0) {
                    cout << "Negative values are not allowed." << endl;
                }
                else if(value > 0) {
                    cout << inchesToCentimeters(value) << " cm" << endl;
                }
                break;

            case 2:
                cout << "Enter centimeters: ";
                cin >> value;

                if(value < 0) {
                    cout << "Negative values are not allowed." << endl;
                }
                else if(value > 0) {
                    cout << centimetersToInches(value) << " inches" << endl;
                }
                break;

            case 3:
                cout << "Enter pounds: ";
                cin >> value;

                if(value < 0) {
                    cout << "Negative values are not allowed." << endl;
                }
                else if(value > 0) {
                    cout << poundsToKilograms(value) << " kg" << endl;
                }
                break;

            case 4:
                cout << "Enter kilograms: ";
                cin >> value;

                if(value < 0) {
                    cout << "Negative values are not allowed." << endl;
                }
                else if(value > 0) {
                    cout << kilogramsToPounds(value) << " pounds" << endl;
                }
                break;

            case 5:
                cout << "Enter Fahrenheit: ";
                cin >> value;
                cout << fahrenheitToCelsius(value) << "C" << endl;
                break;

            case 6:
                cout << "Enter Celsius: ";
                cin >> value;
                cout << celsiusToFahrenheit(value) << "F" << endl;
                break;

            case 7:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
            } 
            
        for (int number = 0; number < 1; number++) {
            if (number < 0)
            cout << number << endl;
        }
    }while (choice != 7);

    return 0;
}