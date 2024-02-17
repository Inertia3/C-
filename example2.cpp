#include<iostream>
using namespace std;

class number
{
    static int x;
    public:
    static void calc()
    {
        for(int i=1;i<=10;i++)
        {
            cout<<" "<<x;
            x++;
        }
    }
};
int number::x=1;
int main()
{
    number d1;
    // number::calc();
    cout<<endl;
    d1.calc();
}