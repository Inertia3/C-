#include<iostream>
using namespace std;
class comparison
{
    int a;
    public:
    void get(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<"a="<<a;
    }
    void operator >(comparison g0)
    {
        if(a>g0.a)
        {
            cout<<"Greater Number among "<<a<< " and "<<g0.a<<" is:"<<a;
        }
        else
        {
            cout<<"Greater Number among "<<a<< " and "<<g0.a<<" is:"<<g0.a;
        }
    }
};
int main()
{
    comparison g1,g2,g3;
    g1.get(5);
    g2.get(8);
    g1>g2;

}