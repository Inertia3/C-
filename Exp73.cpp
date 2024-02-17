#include<iostream>
using namespace std;
class media
{
    protected:
    string bname;
    string tname;
    int price;
    public:
    virtual void get(){}
    virtual void display(){}
    virtual void getprice(){}
};
class books:public media
{
    int p;
    public:
    void get()
    {
        cout<<"Enter book name: ";
        cin>>bname;}
    void getprice()
    {
        cout<<"Enter price of book:";
        cin>>price;
    }
    void display()
    {
        cout<<"Book name="<<bname;
        cout<<endl;
    }
    void pages()
    {
        cout<<"Enter no of pages: ";
        cin>>p;
    }
    void show()
    {
        cout<<"No of pages="<<p<<endl;
        cout<<"Price of book="<<price<<" Rs"<<endl;
    }
};
class tape:public media
{
    public:
    int d;
    void get()
    {
        cout<<"Enter tape name: ";
        cin>>tname;
    }
    void getprice()
    {
        cout<<"Enter price of tape:";
        cin>>price;
    }
    void display()
    {
        cout<<"Tape name="<<tname;
        cout<<endl;
    }
    void duration()
    {
        cout<<"Enter duration:" ;
        cin>>d;
    }
    void show()
    {
        cout<<"Duration of tape="<<d<<" min"<<endl;
        cout<<"Price of Tape="<<price<<" Rs"<<endl;
    }
};
int main()
{
    media *ptr1;
    media *ptr2;
    books b1;
    tape t1;
    ptr1=&b1;
    ptr2=&t1;
    ptr1->get();
    ptr1->getprice();
    b1.pages();
    ptr2->get();
    ptr2->getprice();
    t1.duration();
    cout<<endl;
    cout<<"Information"<<endl;
    cout<<endl;
    ptr1->display();
    b1.books::show();
    ptr2->display();
    t1.tape::show();
    return 0;
}