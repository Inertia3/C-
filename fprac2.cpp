#include<iostream>
using namespace std;
class overloading{
    int a,b,sum,diff;
    public:
    void get(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"Complex number is:"<<a<<" + "<<b<<"i"<<endl;
    }
    //member function
    // overloading operator +(overloading o0){
    //     overloading o1;
    //     o1.a=this->a+o0.a;
    //     o1.b=this->b+o0.b;
    //     return o1;   
    // }
    //friend function
    friend overloading operator+(overloading o1,overloading o2);
};
overloading operator +(overloading o1, overloading o2){
    overloading o3;
    o3.a=o1.a+o2.a;
    o3.b=o1.b+o2.b;
    return o3;
}
int main(){
    overloading o1,o2,o3;
    o1.get(5,3);
    o2.get(2,1);
    o1.show();
    o2.show();
    o3=o1+o2;
    o3.show();
}