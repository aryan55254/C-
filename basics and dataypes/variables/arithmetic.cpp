#include<iostream>// Basic Arithmetic with User Input
using namespace std;
int main(){
    int x ;
    cout<<"write first no."<<endl;
    cin>>x;
    int y;
    cout<<"write second no."<<endl;
    cin>>y;
    int z;
    cout<<"choose your operations: 1 to add, 2 to subtract, 3 to multiply and 4 to divide"<<endl;
    cin>>z;
    if(z == 1){
        int a = x + y;
        cout<< a <<endl;
    }
    else if (z == 2){
        int b = x -y ;
        cout << b <<endl;
    }
    else if (z == 3){
        int c = x*y;
        cout<< c <<endl;
    }
    else if (z ==4) {
        if (y == 0) {
            cout << "Error: Division by zero is not allowed!" << endl;
        } else {
            cout << "Result: " << x / y << endl;
        }
    } 
    else {
        cout<<"select coorect operations";
    }
}