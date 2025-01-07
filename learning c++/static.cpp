#include <iostream>
using namespace std;

void normalFunction() {
    int x = 0;  // Normal variable, initialized every time function is called
    x++;
    cout << "Normal variable value: " << x << endl;
}

void staticFunction() {
    static int x = 0;  // Static variable, initialized only once
    x++;
    cout << "Static variable value: " << x << endl;
}

int main() {
    normalFunction();  // Call 1
    normalFunction();  // Call 2

    staticFunction();  // Call 1
    staticFunction();  // Call 2

    return 0;
}
