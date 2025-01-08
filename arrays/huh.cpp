#include "common_include.h"
using namespace std;
int main (){
    int x[] = {2,3,5,6,7};
    int n = 5;
    for (int i = 0 ; i < n/2; i++){
       int temp = x[i];
        x[i] = x[n-i-1];
        x[n-i-1] = temp;
    }
    for (int num : x){
        cout << num<<endl;
    }
 
}