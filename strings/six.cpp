#include "common.h"
using namespace std;
int main(){
      string h = "diuhe";
     string x = h.substr(0,3);
      cout<< x <<endl;
      size_t pos = h.find("uh");
      cout<<pos<<endl;
      string str = "hello world, welcome to the world";
    size_t sop = str.rfind("world");
    cout<<sop<<endl;
    str.replace(sop,1,"c++");
    cout<<"modified string:"<<str<<endl;
    return 0;
}