#include<iostream>
using namespace std;
class object
{
    int a;
    int b;
    public:
    void setData(int x,int y)
    {
        a=x;
        b=y;
    }
    void getData()
    {
        cout<<"a and b are "<<a<<" and "<<b<<endl;
    }
    void printData()
    {
        cout<<"sum of a and b are "<<a;
    }

    object sum(object);
};
object object::sum(object s1)
{
    object x;
    x.a=s1.a+s1.b;
    return x;
}
int main()
{
    object o1,o2,o3,o4;
    o1.setData(3,5);
    o1.getData();
    o3=o2.sum(o1);
    o3.printData();
return 0;
}