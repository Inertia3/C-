#include<iostream>
using namespace std;
class overloading
{
    int x=1;
    int y;
    public:
    overloading operator ++()       //pre increment
    {
        y=++x;
    }
    overloading operator ++(int)   //post increment
    {
        y=x++;
    }
    void show()
    {
        cout<<"X="<<y<<endl;
    } 
};
int main()
{
    overloading t1,t2,t3,t4;
    ++t1;
    cout<<"Pre-increment:";
    t1.show();
    t2++;
    cout<<"Post-increment:";
    t2.show();
return 0;
}