#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
    void get(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"Complex Number is:"<<a<<"+"<<"i"<<b<<endl;
    }
    complex operator +(complex c1)  //c4 goes to this pointer and c5 goes to argument 
    {
        a=a+c1.a;       // here all the operation is performed in c4 that is this pointer
        b=b+c1.b;
        return *this;
    }
};
int main()
{
    complex c4,c5,c6;
    c4.get(3,4);
    c4.show();
    c5.get(4,5);
    c5.show();
    cout<<"After addition ";
    c6=c4+c5;
    c4.show();
    c4.show();
}