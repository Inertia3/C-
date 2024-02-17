#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
    void get(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"Complex Number="<<a<<"+i"<<b<<endl;
    }
    complex operator +(complex c0)
    {
        complex c9;
        c9.a=this->a+c0.a;   //no need to use this because compiler uses it by default
        c9.b=this->b+c0.b;
        return c9;
        cout<<"Complex Number="<<a<<"+i"<<b<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.get(4,5);
    c1.show();
    c2.get(6,7);
    c2.show();
    cout<<"Sum of ";
    c3=c1+c2;
    c3.show();
}