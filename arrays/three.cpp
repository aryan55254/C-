#include "common_include.h"
using namespace std;
//Finding the Largest Element:
int main(){
    int numbers[] = {10, 25, 17, 30, 5};
int max = numbers[0];
for (int i = 1; i < 5; i++) {
    if (numbers[i] > max) {
        max = numbers[i];
    }
}
cout << "Largest element: " << max;


       
    
}