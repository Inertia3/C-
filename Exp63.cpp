#include<iostream>
using namespace std;
class matrix
{
    int arr[2][2];
    public:
    int flag=1;
    void get()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {   
                cin>>arr[i][j];
            }
        }
    }
    void show()
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void operator ==(matrix m)
    {
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                if(arr[i][j]==m.arr[i][j])
                {
                    continue;
                }
                else 
                {
                flag=0;
                break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"Matrix are equal"<<endl;
        }
        else
        {
            cout<<"Matrix are not equal";
        }
    }
};
int main()
{
    matrix m1,m2,m3;
    cout<<"Enter the matrix elements for 2x2 matrix:"<<endl;
    m1.get();
    cout<<endl;
    m1.show();
    cout<<"Enter the matrix elements for 2x2 matrix:"<<endl;
    m2.get();
    cout<<endl;
    m2.show();
    m1==m2;
}
