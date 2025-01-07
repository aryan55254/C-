#include "common_includes.h"
using namespace std;
int main(){
    cout<<"enter first number"<<endl;
    int x;
    cin >> x;
    cout << "enter the second number"<<endl;
    int y ;
    cin >> y;
    if (y == 0){
        cout << "keep in your mind you won't be able to use the division operator with second no. being 0"<<endl;
    }
    cout<<"enter the operation u want to do"<<endl;
    cout<<"+ to add"<<endl;
    cout<<"- to subtract"<<endl;
    cout<<"* to multiply"<<endl;
    cout<<"/ to divide"<<endl;
    char z;
    cin >> z;
    switch(z)
    {
        case '+':
        cout<< x + y<<endl;
        break;
        case '-':
        cout<< x - y <<endl;
        break;
        case '*':
        cout<<x*y<<endl;
        break;
        case '/':
        cout<< x/y <<endl;
        break;
        default:
        cout<<"invalid operator used";
    }
}