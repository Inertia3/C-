#include<iostream>
using namespace std;

class Base{
    protected:
    // public:
    int a,b;
    public:
    void get(int x, int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"Values of and b are:"<<a<<" and "<<b<<endl;
    }
};
class derived1: virtual public Base{
    protected:
    // public:
    int sum;
    public:
    int summ(){
        sum=a+b;
        return sum;
    }
    void show(){
        cout<<"Sum of a and b is:"<<sum<<endl;
    }
};
class derived2: virtual public Base{
    protected:
    // public:
    int diff;
    public:
    int subb(){
        diff=a-b;
        return diff;
    }
    void show(){
        cout<<"Differenc of a and b is:"<<diff<<endl;
    }
};
class derived3: public derived1,public derived2{
    protected:
    // public:
    int avg;
    public:
    void average(derived1 d0, derived2 d9){
        avg=d0.derived1::summ()+d9.derived2::subb();
    }
    void show(){
        cout<<"Average of sum and difference is:"<<avg;
    }
};
int main(){
    // derived3 d1,d2,d3;
    // d1.derived1::get(8,6);
    // d1.derived1::summ();
    // d1.derived1::show();
    // d2.derived2::get(8,6);
    // d2.derived2::subb();
    // d2.derived2::show();
    // d3.average(d1,d2);
    // d3.show();
    derived3 d1,d2,d3;
    d1.get(8,4);
    d1.summ();
    d1.derived1::show();
    d2.get(8,4);
    d2.subb();
    d2.derived2::show();
    d3.average(d2,d2);
    d3.show();

}