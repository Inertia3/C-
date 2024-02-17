#include<iostream>
using namespace std;
//class one;
class two;
class one
{
    int a;
    public:
    void Get(int x)
    {
        a=x;
    }
    friend void swap(one o1,two t1);
};
class two
{
    int b;
    public:
    void Get(int y)
    {
        b=y;
    }
    friend void swap(one o2,two t2);
};
void swap(one s1,two s2)
{
    int z;
    z=s1.a;
    s1.a=s2.b;
    s2.b=z;
    cout<<"Swapped numbers are:"<<"a="<<s1.a<<" and b="<<s2.b;
}
// void print()
// {
//     cout<<"Swapped numbers are:"<<"a="<<<<" and b="<<
// }
int main()
{
    int p,q;
    cout<<"Enter two numbers:";
    cin>>p>>q;
    one x1;
    x1.Get(p) ;
    two x2;
    x2.Get(q);
    swap(x1,x2);

return 0;
}
