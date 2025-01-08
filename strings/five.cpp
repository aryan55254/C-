#include "common.h"
using namespace std;
int main(){
    string h = "hello";
    const char* str = h.c_str();
    cout<< str<<endl;
    string a = str;
    cout<<a<<endl;
    return 0;
}