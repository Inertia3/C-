#include <iostream>
using namespace std;
class student
{
    string name;
    int uid,height,weight;
    public:
    student(string s,int u,int h,int w)
    {
        name=s;
        uid=u;
        height=h;
        weight=w;
       
    }
    void display()
    {
        cout<<"Name="<<name<<endl;
        cout<<"uid="<<uid<<endl;
        cout<<"Height="<<height<<"cm"<<endl;
        cout<<"Weight="<<weight<<"kg"<<endl;
    }
    ~student()
    {
    cout<<"Destructor called:"<<endl;
    }
};
int main()
{
    string name;
    int uid,height,weight;
        cout<<"Enter the name of student:";
        cin>>name;
        cout<<"Enter uid:";
        cin>>uid;
        cout<<"Enter the height of student:";
        cin>>height;
        cout<<"Enter the weight of student:";
        cin>>weight;
    student s(name,uid,height,weight);
    s.display();
    cout<<"Copy constructor"<<endl;
    student s1=s;
    // student s2(s1);
    s1.display();
    return 0;
}