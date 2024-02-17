#include<iostream>

using namespace std;

int n=10;
int main()
{
    int n=20;
    cout<<"Value of n(Global)="<<::n<<endl;
    cout<<"Value of n(Local)="<<n<<endl;
    return 0;
}

