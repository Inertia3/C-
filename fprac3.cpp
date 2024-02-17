#include<iostream>
using namespace std;

class Base{
    public:
    virtual void get(){
        cout<<"Base class(with virtual)"<<endl;
    }
    void show(){
        cout<<"Base class(without virtual)"<<endl;
    }
};
class Derived : public Base{
    void get(){
        cout<<"Derived class(with virtual)"<<endl;
    }
    void show(){
        cout<<"Derived class(without virtual)"<<endl;
    }
};
int main(){
    Base *ptr;
    Derived d1;
    ptr=&d1;
    ptr->get();
    ptr->show();
}
