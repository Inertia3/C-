#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,count=0;
    int f,l;
    int a,b,c,d,p,swap;
    cout<<"Enter any number:";
    cin>>n;
    p=n;
    while(p>0)
    {
        p=p/10;
        count++;
    }
    d=count-1;
    cout<<"Number of digits in the number is:"<<count<<endl;
    cout<<"Swapped number is:";

    f=n/pow(10,d);
    l=n%10;

    a=f*pow(10,d);
    b=n%a;
    c=b/10;
    swap=(l*pow(10,d))+(c*10)+f;
    cout<<swap;
}
