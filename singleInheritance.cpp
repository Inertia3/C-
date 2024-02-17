
#include<iostream>
using namespace std;
class First{
    protected:
    int a,b;
    int sum;
    public:
    void get(int x,int y){
        a=x;
        b=y;
    }
    void add(){
        sum=a+b;
    }
    void show(){
        cout<<"Sum="<<sum<<endl;
    }
};
class Second :public First{
    protected:
    int sub;
    public:
    void diff(){
        sub=a-b;
    }
    void show(){
        cout<<"Difference="<<sub<<endl;
    }
};
int main(){
    Second s1,s2;
    s1.get(4,5);
    s1.add();
    s2.get(4,2);
    s2.diff();
    s1.First::show();
    s2.Second::show();
}
// #include<iostream>
// using namespace std;
// class A
// {
//     public:
//     int a;
//     int b;
//     int sum;
//     public:
//     void get(int x,int y)
//     {
//         a=x;
//         b=y;
//     }
//     void summ(void);
//     void show(void)
//     {
//         cout<<"sum="<<sum<<endl;
//     }
// };
// class B:public A
// {
//     public:
//     int sub;
//     void subb(void);
// void show(void)
// {
//     cout<<"Difference="<<sub<<endl;
// }

// };
// void A:: summ(void)
// {
//     sum=a+b;
// }
// void B::subb(void)
// {
//     sub=a-b;
// }
// int main()
// {
//     B b1,b2;
//     b1.A::get(6,3);
//     b1.summ();
//     b1.A::show();
//     b2.B::get(7,3);
//     b2.subb();
//     b2.B::show();
// }
