#include <iostream>
#include <string>

using namespace std;

string trim(string input_string, int max_length) {
    string output_string;
    if (input_string.length() <= max_length) {
        output_string = input_string;
    } else {
        for (int c; c<max_length; c++) {
            output_string = output_string + input_string[c];
        }
    }
    return output_string;
}

int main() {
    string my_string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << trim(my_string, 10) << endl;
    return 0;
}
