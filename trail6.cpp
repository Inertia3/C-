#include<iostream>
using namespace std;

class statics
{
    public:
    static int a;
    static int b;
    static int sum;
    static int add();
    void show();
};
int statics::a=2;
int statics::b=4;
int statics::sum=0;
int statics::add()
{
    sum=a+b;
}
void statics::show()
{
    cout<<"Sum="<<sum;
}
int main()
{
    statics s;
    ++s.a;
    s.add();
    s.show();

}