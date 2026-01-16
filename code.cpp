#include <iostream>
#include <string>
using namespace std;

// Function to validate a binary string
bool isValidBinary(const string& str) {
    for (char ch : str) {
        if (ch != '0' && ch != '1') {
            return false; // Invalid character found
        }
    }
    return true; // All characters are '0' or '1'
}

int main() {
    string input;
    cout << "Enter a binary string: ";
    cin >> input;

    if (isValidBinary(input)) {
        cout << "Valid binary string." << endl;
    } else {
        cout << "Invalid binary string. Only '0' and '1' are allowed." << endl;
    }
    return 0;
}