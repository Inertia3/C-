#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    int max;
    cout<<"Enter three numbers:";
    cin>>x>>y>>z;
    max=(x>y?(x>z?x:z):(y>z?y:z));
    cout<<"Maximum of three number is:"<<max;
}