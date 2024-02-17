#include<iostream>
using namespace std;
class binary
{
    int a;
    int b;
    public:
    binary(){}
    binary(int x,int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<"Complex Number-"<<a<<" + "<<b<<"i"<<endl;
    }
    // binary operator +(binary);              //non static
    friend binary operator +(binary &b1,binary &b2);     //# friend function
};
// binary binary:: operator +(binary b1)       #member function(non-static)
// // {
// //     binary b2;
// //     b2.a=a+b1.a;
// //     b2.b=b+b1.b;
// //     return b2;
// // }
binary operator +(binary &b1,binary &b2)       //# friend function
{
    binary b3;
    b3.a=b1.a+b2.a;
    b3.b=b1.b+b2.b;
    return b3;
}
int main()
{
    binary b3(3,4),b4(5,2),b5,b6;
    b3.show();
    b4.show();
    b5=b3+b4;
return 0;
}