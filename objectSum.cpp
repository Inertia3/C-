#include<iostream>
using namespace std;
class object
{
    int a,b;
    public:
    int input()
    {
        cout<<"Enter two number:";
        cin>>a>>b;
        
    }
    void show(object s1,object s2)
    {
        cout<<(s1.a)+(s2.a)<<endl;
        cout<<(s1.b)+(s2.b)<<endl;

    }
};
int main()
{
    object o1,o2,o3;
    o1.input();
    o2.input();
    o3.show(o1,o2);
}