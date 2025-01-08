#include "common.h"
using namespace std;
int main(){
     char str1[] = "hello";
    char str2[] = "world";
    cout<<"length os str 1:  "<<strlen(str1)<<endl;
    char str3[10];
    strcpy(str3,str2);
    cout<<"copied string  "<<str3<<endl;
    strcat (str1,str2);
    cout<<"concat 01   "<<str1<<endl;
    strcat(str2,str1);
    cout<<"concat 02   "<<str2<<endl;
    return 0;
}