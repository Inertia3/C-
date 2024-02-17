#include<iostream>
using namespace std;
class guest
{
    string name;
    int seatno;
    public:
    static int x;
    int guestName()
    {
        cout<<"Enter guest name:";
        cin>>name;
    }
    void abc()
    {
        seatno=x;
    }
    static int seatNo()
    {
        
        x++;
    }
    int show()
    {
        cout<<"Name-"<<name<<"  "<<"Seat No-"<<seatno<<endl;
    }
};
int guest::x=1;
int main()
{
    guest o1[5];
    for(int i=0;i<5;i++)
    {
        o1[i].guestName();
        o1[i].abc();
        o1[i].seatNo();
        //guest::seatNo();     static function can be called without using objects
    }
    for(int i=0;i<5;i++)
    {
        o1[i].show();
    }
return 0;
}