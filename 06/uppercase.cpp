#include <iostream>

using namespace std;

int main() {
    cout << "Enter your desired phrase: ";
    string inputString;
    cin >> inputString;

    for (char &c : inputString) {
        if (c >= 97 && c <= 122) {
            c -= 32;
        }
    }

    cout << inputString << endl;
    return 0;
}