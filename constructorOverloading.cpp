#include<iostream>
using namespace std;
class overloading
{
    int a;
    public:
    overloading()
    {
        a=10;
        cout<<"a="<<a<<endl;
    }
    overloading(int x)
    {
        a=x;
        cout<<"a="<<a<<endl;
    }
    overloading(int x,int y)
    {
        a=x+y;
        cout<<"a="<<a<<endl;
    }
    void show()
    {
        cout<<"a="<<a<<endl;
    }

};
int main()
{
    overloading o1;
    overloading o2(5);
    overloading o3(9,10);
    overloading o4(o3);    ////coping the value of o3 into o4
    o4.show();
    overloading o5=o1;
    o5.show();
return 0;
}