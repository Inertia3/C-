#include<iostream>
using namespace std;
class B;
class A
{
    public:
    int a,b;
    void get(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"Complex Number="<<a<<"+i"<<b<<endl;
    }
    friend void add(A,B);
};
class B:public A
{
    friend void add(A,B);
};
void add(A a1,B b1)
{
    a1.a=a1.a+b1.a;
    a1.b=a1.b+b1.b;
    cout<<"Sum of complex numbers is:"<<a1.a<<"+"<<a1.b<<"i";
}
int main()
{
    A r;
    B u;
    r.A::get(4,5);
    r.show();
    u.B::get(6,7);
    u.show();
    add(r,u);
}
