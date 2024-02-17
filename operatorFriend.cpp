#include<iostream>
using namespace std;
class overloading
{
    int x;
    public:
    void get(int a)
    {
        x=a;
    }
    void show()
    {
        cout<<"x="<<x<<endl;
    }
    //pre increment
    // friend overloading operator ++(overloading &o);
    //post increment
    friend overloading operator ++(overloading &o,int y);
};
//pre increment
// overloading operator ++(overloading &o)
//post increment
overloading operator ++(overloading &o,int y)
{
    overloading o1;
    o.x++;
    o1.x=o.x;
    return o1;
}
int main()
{
    overloading o2,o4;
    cout<<"without increment:"<<endl;
    o2.get(5);
    o2.show();
    // o4=++o2; pre
    o4=o2++;
    cout<<"After increment:"<<endl;
    o4.show();
return 0;
}