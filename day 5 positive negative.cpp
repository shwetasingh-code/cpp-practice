#include<iostream>
using namespace std;

int main() {

    // Declare two integer variables
    int num1, num2;

    // Take input from the user
    cout << "Enter any two numbers: ";

    // Read the first number
    cin >> num1;

    // Check  the first number is positive, negative, or zero
    if(num1 > 0) {
        cout << "First number is positive number" << endl;
    }
    else if(num1 < 0) {
        cout << "First number is negative number" << endl;
    }
    else {
        cout << "First number is zero" << endl;
    }

    // Read the second number
    cin >> num2;

    // Check the second number is positive, negative, or zero
    if(num2 > 0) {
        cout << "Second number is positive number" << endl;
    }
    else if(num2 < 0) {
        cout << "Second number is negative number" << endl;
    }
    else {
        cout << "Second number is zero" << endl;
    }

    // End of program
    return 0;
}
