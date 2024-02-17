#include<iostream>
using namespace std;
void test(int x){
    try{     
    if(x==1)
    throw x;
    else if(x==2)
    throw 'x';
    else if(x==3)
    throw 1.00;
    }
catch(int x){
    cout<<"Integer caught:"<<endl;
}
catch(char x){
    cout<<"Character caught:"<<endl;
}
catch(double x){
    cout<<"double caught:"<<endl;
}
}
int main()
{
    cout<<"Testing multiple catch:"<<endl;
    test(1);
    test(2);
    test(3);
}