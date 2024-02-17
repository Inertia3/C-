#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
    void get(int x,int y){
        a=x;
        b=y;
    }
};
class B:public A{
    public:
    int sum;
    void summ(){
        sum=a+b;
    }
    void show(){
        cout<<"Sum-"<<sum<<endl;
    }
};
class C:public A{
    public:
    int sub;
    void subb(){
        sub=a-b;
    }
    void show(){
        cout<<"Difference-"<<sub<<endl;
    }
};
int main(){
    B b1;
    C c1;
    b1.get(4,6);
    b1.B::summ();
    b1.B::show();
    c1.get(7,3);
    c1.C::subb();
    c1.C::show();
}
