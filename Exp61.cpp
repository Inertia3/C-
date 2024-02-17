#include<iostream>
using namespace std;
class overloading
{
    int a;
    float b;
    public:
    void area(int x)
    {
        a=x;
        cout<<"Cube of "<<a<<"="<<(a*a*a)<<endl;
    }
    void area(float y)
    {
        b=y;
        cout<<"cube of "<<b<<"="<<(b*b*b);
    }
};
int main()
{
    overloading o1,o2;
    o1.area(3);
    float z=3.4;
    o2.area(z);
return 0;
}