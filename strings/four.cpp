//std string
#include "common.h"
using namespace std;
int main(){
string str1 = "huh";
string str2 = "plz";
string str3 = str1 + ","  + str2;
cout<<str3<<endl;
str1[1] = 'o';
cout<<str1<<endl;
str2.erase(2,1);
cout<<str2<<endl;
str2.insert(2,"s");
cout<<str2<<endl;
str2.append("  stop");
cout<<str2;
    return 0;
}