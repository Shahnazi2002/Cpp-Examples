#include<iostream>

using namespace std;

int main() {
    float feet;
    cout << "Enter the distance in feet: ";
    cin >> feet;
    float meters = feet * 0.3048;
    cout << "The distance in meters is equal to: " << meters << endl;
    return 0;
}
