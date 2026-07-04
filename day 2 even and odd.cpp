#include <iostream>
using namespace std;

int main() {
    int num;

    // Take a integer number from the user
    cout << "Enter a number: ";
    cin >> num;

    // Check whether the number is even or odd
    if (num % 2 == 0) {
        cout << "Even Number" << endl;
    } else {
        cout << "Odd Number" << endl;
    }

    // Program finished
    return 0;
}
