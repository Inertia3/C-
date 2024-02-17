#include<iostream>
using namespace std;
class frien
{
    int a;
    int b;
    public:
    void get(int x,int y)
    {
        a=x;
        b=y;
    }
    // void show()
    // {
    //     cout<<a<<endl;
    //     cout<<b;
    // }
    friend void sum(frien f1);
};
 void sum(frien s1)
    {
        cout<<"sum of "<<s1.a<<" and "<<s1.b<<" is "<<s1.a+s1.b;
    }
int main()
{
    frien o1;
    o1.get(3,5);
    //o1.show();
    sum(o1);
return 0;
}