#include<iostream>
using namespace std;
class overloading
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
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
    // friend void operator -(overloading o);
    friend overloading operator -(overloading &o);
};
// void operator -(overloading &o)
// {
//     overloading o2;
//     o.a=-o.a;
//     o.b=-o.b;
// }
overloading operator -(overloading &o)
{
    overloading o2;
    o2.a=-o.a;
    o2.b=-o.b;
    return o2;
}
int main()
{
    overloading o1,o3;
    o1.get(3,-8);
    o1.show();
    o3=-o1;
    o3.show();
}