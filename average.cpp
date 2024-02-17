#include<iostream>
using namespace std;
class student
{
    int m1,m2,m3,m4,m5,averagemarks;
    public:
    void marks()
    {
        cout<<"Enter marks of five subject:";
        cin>>m1;
        cin>>m2;
        cin>>m3;
        cin>>m4;
        cin>>m5;
    }
    void calc()
    {
        averagemarks=(m1+m2+m3+m4+m5)/5;
        cout<<"Average mark="<<averagemarks;
    }
};
int main()
{
    student s;
    s.marks();
    s.calc();
}
