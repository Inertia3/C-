#include<iostream>
using namespace std;
class table
{
    int n;
    public:
    table()
    {
        cout<<"Enter a number:";
        cin>>n;
    }
    void tabl()
    {
        for(int i=1;i<=10;i++)
        {
            int r=n*i;
            cout<<n<<"*"<<i<<"="<<r<<endl;
        }
    }
};
int main()
{
   table t1;
   t1.tabl(); 
return 0;
}