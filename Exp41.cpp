#include<iostream>
using namespace std;

class rectangle{
    int l,b,area;
    public:
    rectangle(){}
    rectangle(int x,int y){
        l=x;
        b=y;
        area=l*b;
    }
    void show(){
        cout<<"Area of rectangle  is:"<<area<<endl;
    }
    ~rectangle(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    rectangle r(4,5);
    r.show();
    rectangle r1;
    r1=r;
    r1.show();
    rectangle r3(r);
    r3.show();
}
