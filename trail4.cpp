#include<iostream>
//using namespace std;

class studentMax
{
    int m1;
    int student;
    public:
    void input();
    void show();
};
void studentMax::input()
{
    std::cout<<"Enter the no of students:";
    std::cin>>student;
    int i=1;
    int k=0;
    int cmp[k];
    int totalmarks;
    while(i<=student)
    {
            std::cout<<"Enter marks of "<<i<<" student in three subjects:";
            {
                for(int j=0;j<3;j++)
                {
                    std::cin>>m1;
                    totalmarks=totalmarks+m1;
                }
                cmp[k]=totalmarks;
                k++;
            }
            i++; 
    }
    int max=0; 
     for(int i=0;i<student;i++)
    {
        if(cmp[i]>max)
        {
            max=cmp[i];
        }
    } 
    std::cout<<"Student with maximum marks is:"<<max;
}
int main()
{
    studentMax s;
    s.input();
}