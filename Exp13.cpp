#include<iostream>
using namespace std;

int main()
{
    int f=-1,s=1,c,n;
    int arr[20];
    int k=0,count=0;
    cout<<"Enter the range of the series:";
    cin>>n;
    cout<<"fibonacci Series:";
    for(int i=0;i<n;i++)
    {
        c=f+s;  
        cout<<" "<<c;
    if(c -s>1)
    {
        for(int j=s+1;j<c;j++)
        {
            arr[k]=j;
            k++;
            count=count+1;
        }
    }
    f=s;
    s=c;
    }
    cout<<endl;
    cout<<"Missing series is:";
    for(int i=0;i<count;i++)
    {
        cout<<" "<<arr[i];
    }
}