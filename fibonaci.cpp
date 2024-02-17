#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the range of fibonacci series:";
    cin>>n;
    int a=-1;
    int b=1;
    int t,j;
    for(int i=0;i<n;i++)
    {
        t=a+b;
         if(t-b>1)
    {
        for(int j=b+1;j<t;j++)
        {
            cout<<" "<<j;
        }
    }
        a=b;
        b=t;
    }
}

