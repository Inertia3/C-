#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<"Enter the order of the matrix:"<<endl;
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The matrix is:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    }
    int x,y;
    int b=1000;
    //int *b;
    //b=&a[0][0];
    //cout<<"base address"<<b<<endl;
    int c=sizeof(int);
    cout<<"Enter the row and column of element whose address is to be determined:"<<endl;
    cin>>x>>y;
    int add;
    add=(b+(c*(n*(x-0)+(y-0))));//n represent no of columns n*(x-0) means ele,ments above it and (y-0) represent no of elements right side of this element
    cout<<"address of the element is:"<<add;
}