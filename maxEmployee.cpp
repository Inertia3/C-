#include<iostream>
using namespace std;
class three;
class two;
class one
{
    string name;
    string des;
    int sa1;
    public:
    void getData(string s1,string s2)
    {
        name=s1;
        des=s2;
        cout<<"Name="<<name<<endl<<"Designation="<<des<<endl;
    }
    void salary(int x)
    {
        sa1=x;
        cout<<"Salary="<<sa1<<endl;
    }
    friend void getsalary(one ,two ,three);
};
class two
{
    string name;
    string des;
    int sa2;
    public:
    void geetData(string s3,string s4)
    {
        name =s3;
        des=s4;
       cout<<"Name="<<name<<endl<<"Designation="<<des<<endl;
    }
    void salaryy(int y)
    {
        sa2=y;
        cout<<"Salary="<<sa2<<endl;
    }
    friend void getsalary(one ,two ,three );
};
class three
{
    string name;
    string des;
    int sa3;
    public:
    void salaryyy(int z)
    {
        sa3=z;
        cout<<"Salary="<<sa3<<endl;
    }
    void geeetData(string s5,string s6)
    {
        name =s5;
        des=s6;
        cout<<"Name="<<name<<endl<<"Designation="<<des<<endl;
    }
    friend void getsalary(one ,two ,three );
};
void getsalary(one i,two j,three k)
{
    int max=(i.sa1>j.sa2?(i.sa1>k.sa3?i.sa1:k.sa3):(j.sa2>k.sa3?j.sa2:k.sa3));
    cout<<"Employee having maximum salary is:"<<max<<endl;
}
int main()
{
    one o1,o2;
    o1.getData("Sahil","Programmer");
    o2.salary(21213);
    two t2,t3;
    t2.geetData("Ansh","Programmer");
    t3.salaryy(323124);
    three h1,h2;
    h1.geeetData("Ayush","Programmer");
    h2.salaryyy(4342332);
    getsalary(o2,t3,h2);
return 0;
}