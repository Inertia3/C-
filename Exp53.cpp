#include<iostream>
using namespace std;
class alpha
{
    public:
    int a;
    alpha(int x)
    {
        a=x;
        cout<<"x="<<x<<endl;
    }
};
class beta
{
    public:
    float b;
    beta(float y)
    {
        b=y;
        cout<<"y="<<y<<endl;
    }
};
class gama:public alpha,public beta
{
    public:
    int i;
    int j;
    gama(int p,float q,int r,int s): alpha(p), beta(q)
    {
        i=r;
        j=s;
        cout<<"i="<<i<<endl<<"j="<<j;
    }
};
int main()
{
    gama g(10,20.867,30,40);
}