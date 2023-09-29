#include <iostream>

using namespace std;

int main() {
    int count = 1;
    int sum;

    cout << "[Average Calculator]" << endl;
    cout << "Please enter a number: ";
    cin >> sum;
    while (true) {
        int number;
        cout << "Please enter the next number or enter . for calculate the average: ";
        if (cin >> number) {
            sum += number;
            count++;
        } else {
            cout << "Average of " << count << " numbers = " << (float)sum/count << endl;
            break;
        }
    }
    return 0;
}