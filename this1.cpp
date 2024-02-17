#include<iostream>
using namespace std;
class sameName
{
    int x;
    public:
    void get(int x)
    {
        this->x=x;
    }
    void show()
    {
        cout<<"X="<<x<<endl;
    }
};
int main()
{
    sameName o1,o2;
    o1.get(5);
    o1.show();
}