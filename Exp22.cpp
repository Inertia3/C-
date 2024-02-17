#include<iostream>
using namespace std;
class employe
{
    //public:
    string name;
    int age;
    string des;
    float salary;
    public:
    void input();
    void show();

   
};
 void employe::input()
    {
    cout<<"Enter the name of employe:";
    cin>>name;
    cout<<"Enter age of employe:";
    cin>>age;
    cout<<"Enter designation of the employe:";
    cin>>des;
    cout<<"Enter the salary of employe:";
    cin>>salary;
    }
    void employe:: show()
    {
        cout<<endl;
        //cout<<"The details of the employe are:";
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
        cout<<"Designation="<<des<<endl;
        cout<<"Salary="<<salary<<endl;
        cout<<endl;
    }
int main()
{
    int n;
    cout<<"Enter the number of employes:";
    cin>>n;
    employe e1[20];
    int i=1,j=1;
    while(i<=n)
    {
        cout<<endl;
        cout<<"Enter the details of "<<i<<" employe:"<<endl;
        e1[i].input();
        i++;
    }
    
    while(j<=n)
    {
    cout<<endl;
    cout<<"The details of "<<j<<" employe are:"<<endl;
    e1[j].show();
    j++;
    }
}
  
