#include<iostream>

using namespace std;
class maxthree 
{
    int max;
    int min;
    int avg;
    public:
    inline int maximum(int,int,int);
    inline int minimum(int,int,int);
    inline int average();
};
inline int maxthree::maximum(int x,int y,int z)
{
    max=(x>y?(x>z?x:z):(y>z?y:z));
    cout<<"Maximum of "<<x<<" "<<y<<" and "<<z<<" is:"<<max<<endl;
    return max;
}
inline int maxthree::minimum(int x,int y,int z)
{
    min=(x<y?(x<z?x:z):(y<z?y:z));
    cout<<"Minimum of "<<x<<" "<<y<<" and "<<z<<" is:"<<min<<endl;
    return min;
}
int main()
{
    maxthree s;
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    //s.maximum(a,b,c);
    //s.minimum(a,b,c);
    cout<<"average of maximum and minimum is:"<<(s.minimum(a,b,c)+s.maximum(a,b,c))/2;
}
