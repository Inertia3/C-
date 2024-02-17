#include<iostream>
using namespace std;
class Area
{
    int length;
    int breadth;
    public:
    void setData(int x,int y)
    {
        length=x;
        breadth=y;
    }
    void areaRect()
    {
        cout<<"Area="<<(length*breadth);
    }
    void periRect()
    {
        cout<<"Perimeter="<<2*(length+breadth);
    }
    
};
int main()
{
    int  p,q;
    cout<<"Enter the length and breadth of rectangle:";
    cin>>p>>q;
    Area o1;
    o1.setData(p,q);
    o1.areaRect();
    cout<<endl;
    o1.periRect();
return 0;
}