#include<iostream>
#include<math.h>
using namespace std;
int get(int a,int b)
{
    int x=pow(a,b);
    return x;

}
int check(int x)
{
    int y;
    int sum=0;
    while(x>0)
    {
        y=x%10;
        sum=sum+y;
        x=x/10;
    }
    return sum;
    // cout<<"sum="<<sum;
}
int main()
{
    int i;
    i=get(2,11);
    int z=check(i);
    if(z>9)
    {
        check(z);
    }
    cout<<"Digital Root="<<z;
}