#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    int d=(a>b?(a>c?a:c):b>c?b:c);
    cout<<"Greatest of three number is:"<<d;
    return 0;
}