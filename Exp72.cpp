#include<iostream>
using namespace std;
class traverse
{
    int n;
    public:
    void get()
    {
        cin>>n;
    }
    void show()
    {
        cout<<n<<" ";
    }
};
int main()
{
    traverse t1[5];
    traverse *ptr=t1;
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        ptr->get();
        ptr++;
    }
    // for(int i=0;i<5;i++)
    // {
    //     ptr--;
    // }
    cout<<"Array elements are:"<<endl;
    for(int i=5;i>0;i--)
    {
        ptr->show();
    }
return 0;
}