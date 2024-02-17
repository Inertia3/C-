#include<iostream>
using namespace std;
class personal
{
    int uid;
    string name;
    long int cn;
    public:
    virtual void get(){
        cout << "Enter name:";
        cin >> name;
        cout << "Enter uid:";
        cin >> uid;
        cout << "Enter contact no:";
        cin >> cn;
    }
     virtual void show(){
        cout<<"Name="<<name<<endl;
        cout<<"uid="<<uid<<endl;
        cout<<"Contact no="<<cn<<endl;
    }
};
class academics:public personal
{
    string arr[3];
    public:
    void get(){
        cout<<"Enter any three subject:"<<endl;
        for (int i=0;i<3;i++){
            cin>>arr[i];
        }
    }
    void show(){
        cout<<"Student Subjects:"<<endl;
        for (int i=0;i<3;i++){
            cout <<arr[i]<<endl;
        }
    }
};
class result:public personal
{
    int m1,m2,m3;
    int total_marks;
    double per;
    public:
    void get(){
        cout<<"Enter marks of threee subject:";
        cin>>m1>>m2>>m3;
    }
    void show(){
        total_marks=m1+m2+m3;
        per=((total_marks*100)/300);
        cout<<"Total Marks="<<total_marks<<endl;
        cout<<"Percentage="<<per<<endl;
    }
};
int main()
{
    personal p1;
    personal*p2,*p3;
    academics a1;
    result r1;
    p2=&a1;
    p3=&r1;
    p1.get();
    p2->get();
    p3->get();
    p1.show();
    p2->show();
    p3->show();
}