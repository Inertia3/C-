#include<iostream>
using namespace std;
class sameName
{
    int x;
    public:
    int sum;
    void get(int a)
    {
        x=a;
    }
    sameName operator +(sameName s)
    {
        this->x=s.x+x;
        return *this;
    }
    void show()
    {
        cout<<"sUM="<<x;
    }
};
int main()
{
    sameName o1,o2,o3,o4;
    o1.get(5);
    o2.get(6);
    o1+o2;
    o1.show();
}