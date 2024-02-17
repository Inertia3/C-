#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
    int getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    int showdata()
    {
        cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    int sumdata()
    {
        cout<<"sum of complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    complex sum(complex,complex);//passing object as a argument

};
complex complex::sum(complex s1,complex s2)//returning object as a argument
    {
        complex x;
        x.a=s1.a+s2.a;
        x.b=s1.b+s2.b;
        return x;
    }
int main()
{
    complex  o1,o2,o3,o4;
    o1.getdata(3,4);
    o1.showdata();
    o2.getdata(5,6);
    o2.showdata();
    o4=o3.sum(o1,o2);
    o4.sumdata();
return 0;
}