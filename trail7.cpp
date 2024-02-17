#include<iostream>
using namespace std;
class numbers
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
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
    numbers average(numbers n1,numbers n2)
    {
        numbers n;
        n.a=n1.a+n2.a;
        n.b=n1.b+n2.b;
        return n;
    }
};
int main()
{
    numbers n3,n4,n5,n6;
    n3.get(4,5);
    n3.show();
    n4.get(6,7);
    n4.show();
    n6=n5.average(n3,n4);
    n6.show();
return 0;
}