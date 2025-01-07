#include <iostream>
using namespace std;

int second() {
    int a = 544837;  // Declare an integer
    float s;  // Declare a float variable
    s = a;  // Assign the integer 'a' to the float 's'
    cout << "The value of 'a' as a float: " << s << endl;  // Print the value of 's'
    return 0;
}
int Area(){
    const float PI = 3.14;
    int radius = 5;
    double area = PI * radius * radius;
 cout<<area;
 return 0;
}

int main() {
    // Declare variables for weight, grade, and student status
    float weight = 72.5;
    char grade = 'B';
    bool student = true;

    cout << "My weight is: " << weight << endl;  // Print weight
    cout << "My grade is: " << grade << endl;  // Print grade
    cout << "Am I a student? " << boolalpha << student << endl;  // Print student status

    second();  // Call the second function
    Area();
    return 0;
}
