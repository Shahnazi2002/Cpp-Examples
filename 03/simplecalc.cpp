#include <iostream>

using namespace std;

int main() {
    char opr;
    int x, y;

    cout << "Please enter the operator you want (+, -, *, /): ";
    cin >> opr;

    cout << "Please enter the first number: ";
    cin >> x;
    cout << "Please enter the second number: ";
    cin >> y;

    if (opr == '+') {
        cout << "Result: " << x + y << endl;
    } else if (opr == '-') {
        cout << "Result: " << x - y << endl;
    } else if (opr == '*') {
        cout << "Result: " << x * y << endl;
    } else if (opr == '/') {
        if (y == 0) {
            cout << "Result: " << "Can't divide by zero!" << endl;
        } else {
            cout << "Result: " << x / y << endl;
        }
    } else {
        cout << "The entered operator is not correct!" << endl;
    }

    return 0;
}