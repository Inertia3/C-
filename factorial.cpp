#include<iostream>
using namespace std;
class factorial
{
    int n;
    public:
    static int fact;
    void getdata(int x)
    {
        n=x;
    }
    factorial showdata(factorial f5)
    {
        factorial f;
        f.fact=1;
        int i=1;
        while(i<f.n)
        {
            f.fact=(i*(f.fact));
        }
        i++;
        return f;
    }
    void printdata()
    {
        cout<<"factorial of the number is:"<<fact;
    }
};
int factorial::fact=1;
int main()
{
    int x;
    cout<<"Enter a number:";
    cin>>x;
    factorial f1,f2,f3;
    f1.getdata(x);
    f3=f2.showdata(f1);
    f3.printdata();
return 0;
}