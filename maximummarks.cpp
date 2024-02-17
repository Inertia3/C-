#include<iostream>
using namespace std;

class studentMax
{
    public:
    int m1,m2,m3;
    int st;
    int input();
    int show();
};
int studentMax::input()
{
    cout<<"Enter marks of three subject:";
    cin>>m1>>m2>>m3;
}
int studentMax::show()
{
    st=0;
    st=m1+m2+m3;
}
int main()
{
    int index;
    static int i;
    studentMax s[i];
    static int max=0;
    for(i=1;i<=2;i++)
    {
        s[i].input();
        s[i].show();
        if(s[i].show()>max)
        {
            max=s[i].show();
            int index=i;
        }
    }
    cout<<"Maximum marks is obtained by student "<<i<<" and it is:"<<max;
}
/*std::cout<<"Enter the no of students:";
    std::cin>>st;
    int i=1;
    int k=0;
    int totalmarks[st];
    while(i<=st)
    {
            std::cout<<"Enter marks of "<<i<<" student in three subjects:";
            {/
                for(int j=0;j<3;j++)
                {
                    std::cin>>m1;
                    totalmarks[k]=totalmarks[k]+m1;
                }
                k++;
            }
            i++; 
    }
    int max=0; 
     for(int i=0;i<st;i++)
    {
        if(totalmarks[i]>max)
        {
            max=totalmarks[i];
        }
    } 
    std::cout<<"Student with maximum marks is:"<<max;*/