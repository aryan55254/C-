#include "1.h"
using namespace std;
/*Declares a user-defined function named findMax that takes two integer parameters and returns the larger of the two numbers.
In the main function:
Prompt the user to input two integers.
Call the findMax function to determine the larger number.
Print the larger number to the console.
Ensure the program demonstrates function declaration, definition, and calling clearly.*/
void findMax(int x , int y);
int main(){
cout << "enter the first no."<<endl;
int a ;
cin>>a;
cout<<"enter the no. u want to compare first one with :" <<endl;
int b;
cin>>b;
 findMax(a,b);


    return 0;
}
void findMax(int x , int y){
    if (x > y){
        cout << "the larger of two numbers is : "<<x<<endl;}
    else if (y > x){
cout << "the larger of two numbers is : "<<y<<endl;
    }    
    
}