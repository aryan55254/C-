#include <iostream>
using namespace std;

// Function to compare two integers and check a guessed number
void compare(int x, int y, int z) {
    if (x > y) {
        cout << "Larger number is: " << x << endl;
    } else {
        cout << "Larger number is: " << y << endl;
    }

    // Check the guessed number
    if (z == 0) {
        cout << "The guessed number is 0!" << endl;
    } else {
        cout << "The guessed number is not correct" << endl;
    }
}

// Overloaded function to compare two floats
void compare(float &a, float &b) {
    if (a > b) {
        cout << b << " is smaller than " << a << endl;
    } else {
        cout << a << " is smaller than " << b << endl;
    }
}

int main() {
    // Comparing integers
    cout << "Enter the first integer to compare:" << endl;
    int i;
    cin >> i;

    cout << "Enter the second integer to compare:" << endl;
    int j;
    cin >> j;

    cout << "Guess a number:" << endl;
    int k;
    cin >> k;

    // Call compare with three integers
    compare(i, j, k);

    // Comparing floats
    cout << "Enter the first float to compare:" << endl;
    float m;
    cin >> m;

    cout << "Enter the second float to compare:" << endl;
    float n;
    cin >> n;

    // Call compare with two floats
    compare(m, n);

    return 0;
}
