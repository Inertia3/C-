// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int a,b;
//     void get(int x,int y){
//         a=x;
//         b=y;
//     }
// };
// class B : virtual public A{
//     public:
//     int sum;
//     void summ(){
//         sum=a+b;
//     }
//     void show(){
//         cout<<"Sum="<<sum<<endl;
//     } 
// };
// class C : virtual public A{
//     public:
//     int sub;
//     void subb(){
//         sub=a-b;
//     }
//     void show(){
//         cout<<"Difference="<<sub<<endl;
//     }
// };
// class D : public B,public C{
//     public:
//     int avg;
//     D average(B b1, C c1){
//         avg=(b1.B::sum+c1.C::sub)/2;
//     }
//     void show(){
//         cout<<"Average of sum and sub="<<avg<<endl;
//     }
// };
// int main(){
//     // D d1,d2,d3;      //ambiguity solving by scope resoultion
//     // d1.B::get(5,6);
//     // d1.B::summ();
//     // d2.C::get(8,3);
//     // d2.C::subb();
//     // d1.B::show();
//     // d2.C::show();
//     // d3.average(d1,d2);
//     // d3.D::show();
//                        ///ambiguity solving by virtual base class
//     D d1,d2,d3;
//     d1.get(5,6);
//     d2.get(8,3);
//     d1.summ();
//     d2.subb();
//     d1.B::show();
//     d2.C::show();
//     d3.average(d1,d2);
//     d3.D::show();
// }
// //solving ambiguity using scope resolution operator
#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
    int sum;
    void get(int x,int y){
        a=x;
        b=y;
    }
};
class B: public A{
    public:
    int summ(){
        sum=a+b;
    }
    void show(){
        cout<<"Sum="<<sum<<endl;
    }
};
class C: public A{
    public:
    int summ(){
        sum=a+b;
    }
    void show(){
        cout<<"Sum="<<sum<<endl;
    }
};
class D:public B,public C{
    public:
    int avg;
    D average(B a1,C b1){
        avg=(a1.B::sum+b1.C::sum)/2;
    }
    void show(){
        cout<<"Average of sum1 and sum2 is="<<avg;
    }
};
int main(){
    D d1,d2,d3;
    d1.B::get(8,4);
    d1.B::summ();
    d1.B::show();
    d2.C::get(9,5);
    d2.C::summ();
    d2.C::show();
    d3.average(d1,d2);
    d3.D::show();
}

//solving ambiguity using virtual base class
