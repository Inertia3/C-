#include<iostream>
using namespace std;
class base 
{
    public:
    virtual void get()
    {
        cout<<"Base class"<<endl;
    }
    void show()
    {
        cout<<"Base class"<<endl;
    }
};
class derived :public base
{
    public:
    void get()
    {
        cout<<"Derived class(with virtual)"<<endl;
    }
    void show()
    {
    cout<<"Derived class(without virtual)"<<endl;
    }
};
int main()
{
    base* b1;
    derived d1;
    b1=&d1;
    b1->get();
    b1->show();
return 0;
}