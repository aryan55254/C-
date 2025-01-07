#include "common_includes.h"
using namespace std;
int main(){
    //rite a program that determines which quadrant a point lies in on a 2D Cartesian plane based on its coordinates. The program should take two integers, x and y, as input (representing the x and y coordinates of the point).
    cout<<"enter the x coordinates:"<<endl;
    int x;
    cin>>x;
    int y;
    cout<<"enter the y coordinates:"<<endl;
    cin>>y;
    if (x > 0){
        if(y > 0){
            cout<<"your point is located in 1st quadrant"<<endl;
        }
        else if( y < 0){
            cout<<"your point is located in 4th quadrant"<<endl;
        }
    }
    else if (x < 0){
        if (y > 0){
            cout<<"your point is located in 2nd quadrant"<<endl;
        }
        else if(y < 0) {
              cout<<"your point is located in 3rd quadrant"<<endl;
        }
    }
    else{
        cout<<"your point is on the axis"<<endl;
    }

}