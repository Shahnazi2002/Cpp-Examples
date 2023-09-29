#include <iostream>

using namespace std;

int main() {
    char unit;
    int temperature;
    int result;

    cout << "Please enter the temperature unit you want to convert (Enter F for Fahrenheit and C for Celsius): ";
    cin >> unit;

    if (unit=='F' || unit=='f') {
        cout << "Now enter the temperature as an integer in Fahrenheit: ";
        cin >> temperature;

        result = (temperature - 32) * 5/9;
        cout << temperature << " Fahrenheit is equal to " << result << " Celsius." << endl;
    } else if (unit=='C' || unit=='c') {
        cout << "Now enter the temperature as an integer in Celsius: ";
        cin >> temperature;

        result = (temperature * 9/5) + 32;
        cout << temperature << " Celsius is equal to " << result << " Fahrenheit." << endl;
    } else {
        cout << "The entered value is not acceptable!" << endl;
    }
    return 0;
}