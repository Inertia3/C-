#include<iostream>
using namespace std;
class object
{
    int a;
    public:
    int input()
    {
        cout<<"Enter a number:";
        cin>>a;
    }
    int show(object s1,object s2)
    {
        int x=(s1.a)>(s2.a)?(s1.a):(s2.a);
        cout<<"Greatest among "<<(s1.a)<<" and "<<(s2.a)<<" is:"<<x;
        //cout<<x;

    }
};
int main()
{
    object o1,o2;
    o1.input();
    o2.input();
    o1.show(o1,o2);

}