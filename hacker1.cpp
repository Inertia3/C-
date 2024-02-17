#include<iostream>
#include<math.h>
using namespace std;
int test(int x)
{
    int y;
    int sum=0;
    while(x>0)
    {
        y=x%10;
        sum=sum+y;
        x=x/10;
    }
    // cout<<"SUM="<<sum;
    return sum;
}
int main()
{
    int j;
    int m,n;
    cout<<"Enter two numbers:";
    cin>>m>>n;
    int x=pow(m,n);
    int z=test(x);
    // cout<<"z="<<z<<endl;
    while(z>9)
    {
        z=test(z);
    }
    cout<<"Digital root="<<z;
}