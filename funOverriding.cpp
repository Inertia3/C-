#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    int b;
    virtual void get()
    {
        a=4;
        b=7;
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
class derived:public base
{
    public:
    void get()
    {
        a=5;
        b=8;
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
int main()
{
    base b;
    base *ptr=&b;
    base *bptr;
    derived d;
    bptr=&d;
    cout<<"Values at derived class:"<<endl;
    bptr->get();
    cout<<"Values at base class:"<<endl;
    ptr->get();
}