#include<iostream>

using namespace std;
class student 
{
    int max;
    int min;
    public:
    inline void maximum(int,int,int);
    inline void minimum(int,int,int);
};
inline void student::maximum(int x,int y,int z)
{
    max=(x>y?(x>z?x:z):(y>z?y:z));
    cout<<"Maximum of "<<x<<" "<<y<<" and "<<z<<" is:"<<max<<endl;
}
inline void student::minimum(int x,int y,int z)
{
    min=(x<y?(x<z?x:z):(y<z?y:z));
    cout<<"Minimum of "<<x<<" "<<y<<" and "<<z<<" is:"<<min<<endl;
}
int main()
{
    student s;
    int a,b,c;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    s.maximum(a,b,c);
    s.minimum(a,b,c);
}