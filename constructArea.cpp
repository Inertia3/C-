#include <iostream>
using namespace std;
class rectangle
{
    int l;
    int b;
    int area;
    public:
    rectangle()
    {
        l=5;
        b=10;
        cout<<"Area of rectangle="<<(l*b);
    }
    rectangle(int a, int c)
    {
        l=a;
        b=c;
        area=l*b;
        //cout<<"Area of rectangle is="<<(l*c);
   
    }
    void show()
    {
        cout<<"Area of rectangle is="<<area;
    }
    ~rectangle()
    {
        cout<<endl<<"Destructor called";
    }
};
int main() 
{
    rectangle r1;
    cout<<endl;
    rectangle r(10,20);
    rectangle r2(r);  ///copy constructor
    r.show();
    r2.show();//copy constructor
    return 0;
}