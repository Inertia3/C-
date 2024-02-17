#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int uid;
    float total;
    float per;
    void get(string,int);
    void show(void);
};
class marks:public student
{
    public:
    float s1,s2,s3,s4,s5;
    void getMarks(float,float,float,float,float);
    void showMarks(void);
};
class result:public marks
{
    public:
    void totalMarks(void);
    void percentage(void);
    void showResult(void);
};
void student::get(string s,int n)
{
    name=s;
    uid=n;
}
void student::show()
{
    cout<<"Name-"<<name<<endl;
    cout<<"Uid-"<<uid<<endl;
}
void marks::getMarks(float f1,float f2,float f3,float f4,float f5)
{
    s1=f1;
    s2=f2;
    s3=f3;
    s4=f4;
    s5=f5;
}
void marks::showMarks(void)
{
    cout<<"Marks of the students are given below out of 20-"<<endl;
    cout<<"OOps-"<<s1<<endl;
    cout<<"Digital Electronics-"<<s2<<endl;
    cout<<"Mathematics-"<<s3<<endl;
    cout<<"Physics-"<<s4<<endl;
    cout<<"BEEE-"<<s5<<endl;
}
void result::totalMarks(void)
{
    total=s1+s2+s3+s4+s5;
}
void result::percentage(void)
{
    per=((s1+s2+s3+s4+s5)/100)*100;
}
void result::showResult(void)
{
    cout<<"Total Marks-"<<total<<endl;
    cout<<"Percentage-"<<per<<"%"<<endl;
}
int main()
{
    result r1;
    r1.get("Sahil Ansari",13150);
    r1.show();
    r1.getMarks(20,15,20,20,19);
    r1.showMarks();
    r1.totalMarks();
    r1.percentage();
    r1.showResult();
}