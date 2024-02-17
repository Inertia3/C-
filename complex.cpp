#include<iostream>

using namespace std;

class complex
{
    int a,b;
    public:
    int getData(int ,int);
    inline int printdata();
    complex showData(complex,complex);
};
int complex::getData(int x,int y)
{
    a=x;
    b=y;
}
complex complex::showData(complex s1,complex s2)
{
    complex x1;
    x1.a=s1.a+s2.a;
    x1.b=s1.b+s2.b;
    return x1;
    //cout<<"sum of complex number is "<<a<<"+"<<b<<"i"<<endl;
}
inline int complex::printdata()
{
    cout<<"complex number is "<<a<<"+"<<b<<"i"<<endl;
}
int main()
{
    complex o1,o2,o3,o4;
    o1.getData(2,3);
    o1.printdata();

    o2.getData(3,4);
    o2.printdata();

    //o3.showData(o1,o2);
    //o3.printdata();
    o4=o3.showData(o1,o2);
    o4.printdata();
}