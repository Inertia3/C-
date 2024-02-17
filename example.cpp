#include<iostream>
using namespace std;

int main()
{
    static int x=1;
    x=++x;
    int y=1;
    y=++y;
    cout<<"x="<<x<<endl;
    cout<<"y="<<x<<endl;
}