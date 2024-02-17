#include<iostream>
using namespace std;
class student
{
    int m[5],i;
    int avg,total;
    public:
    void marks()
    {
        cout<<"Enter marks of five subject:";
        for(i=0;i<5;i++);
            cin>>m[i];
    }
    void calc()
    {
        for(int j=0;j<5;j++)
            total=total+m[j];
            avg=total/5;
        
        cout<<"Total Marks="<<total<<endl;
        cout<<"Average mark="<<avg;
    }
};
int main()
{
    student s;
    s.marks();
    s.calc();
}
