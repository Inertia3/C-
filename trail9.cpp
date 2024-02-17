#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int*ptr;
    ptr=&a;
    int &ref=a;
    cout<<"a="<<a<<endl;
    cout<<"a="<<(*ptr)<<endl;
    cout<<"address of a="<<ptr<<endl;
    cout<<"a="<<(ref)<<endl;
    ref=10;
    cout<<"a="<<ref<<endl;
    cout<<"a="<<a<<endl;

return 0;
}