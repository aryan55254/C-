#include "common_includes.h"
using namespace std;
int main (){
    cout<<"enter a no. to check odd or even:" ;
    int x ;
    bool y;
    cin>> x ;
    if (x % 2 == 0){
         y = true;
    }
    else{
     y = false;
    }
if( y) {
  cout<<"it is a even no.";
}
else {
    cout<<"its odd no.";
}
    return 0;
}