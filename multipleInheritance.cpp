#include<iostream>
using namespace std;
class Base1{
    public:
    int a,b;
    int summ;
    void get(int x,int y){
        a=x;
        b=y;
    }
    void sum(){
        summ=a+b;
    }
    void show(){
        cout<<"Sum="<<summ<<endl;
    }
};
class Base2{
    public:
    int a,b;
    int subb;
void get(int x,int y){
    a=x;
    b=y;
}
void sub(){
        subb=a-b;
    }
void show(){
        cout<<"Difference="<<subb<<endl;
    }
};
class Derived : public Base1, public Base2{
    protected:
    int avg;
    public:
    Derived calc(Base1 b1, Base2 b2){
        avg=(b1.summ+b2.subb)/2;
    }
    void show(){
        cout<<"Average="<<avg;
    }
};
int main()
{
    Derived d1,d2,d3;
    d1.Base1::get(5,4);
    d2.Base2::get(8,5);
    d1.sum();
    d2.sub();
    d1.Base1::show();
    d2.Base2::show();
    d3.calc(d1,d2);
    d3.Derived::show();
}
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     int a;
//     int b;
//     int summ;
//     void get(int,int);
//     int sum();
//     void show(void);
// };
// class B
// {
//     public:
//     int x;
//     int y;
//     int subb;
//     void gett(int,int);
//     int sub();
//     void showw(void);
// };
// void A::get(int m,int n)
// {
//     a=m;
//     b=n;
// }
// int A::sum()
// {
//     summ=a+b;
// }
// void A::show(void)
// {
//     cout<<"sum-"<<summ<<endl;
// }
// void B::gett(int p,int q)
// {
//     x=p;
//     y=q;
// }
// int B::sub()
// {
//     subb=x-y;
// }
// void B::showw(void)
// {
//     cout<<"Difference-"<<subb<<endl;
// }
// class C:public A,public B
// {
//     public:
//     int u,v;
//     int avg;
//     C average(A,B);
//     void showResult(void);
// };
// C C::average(A a1,B b1)
// {
//     avg=(a1.A::summ+b1.B::subb)/2;
// }
// void C::showResult(void)
// {
//     cout<<"Average of sum and Difference is-"<<avg;
// }
// int main()
// {
//     C c1,c2,c3,c4;
//     c1.get(4,6);
//     c1.sum();
//     c1.show();
//     c2.gett(7,3);
//     c2.sub();
//     c2.showw();
//     c3.average(c1,c2);
//     c3.showResult();
// }
