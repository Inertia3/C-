#include<iostream>
using namespace std;
class Age
{
    int age;
    string name;
    public:
    int max;
    void get(string s,int n)
    {
        name=s;
        age=n;
    }
    void show()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
    }
    Age operator >(Age a1)
    {
        Age a0;
        if(this->age>a1.age)
            return *this;
            else
            return a1;
    }
};
int main()
{
    Age a3,a4,a5;
    a3.get("Sahil",19);
    a3.show();
    a4.get("Ansh",18);
    a4.show();
    a5=a3>a4;
    cout<<"Elder one:"<<endl;
    a5.show();
}