#include<iostream>

using namespace std;

class student
{
    string name;
    int uid;
    float cgpa;
    public:

    void input()
    {
        cout<<"Enter student details:"<<endl;
        cin>>name;
        cin>>uid;
        cin>>cgpa;
    }
    void show()
    {
        cout<<"Student details are:"<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"uid="<<uid<<endl;
        cout<<"cgpa="<<cgpa<<endl;
    }
};
int main()
{
   student o1;
   o1.input();
   o1.show();
}