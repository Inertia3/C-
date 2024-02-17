#include<iostream>
using namespace std;

class dma{
    int a;
    public:
    void get(){
        cin>>a;
    }
    void show(){
        cout<<" "<<a;
    }
};
int main(){
    dma d1,d2;
    dma *ptr=new dma[5];
    dma *ptr1=ptr;
    cout<<"Enter values at memory location:";
    for(int i=0;i<5;i++){
        ptr->get();
        ptr++;
    }
    cout<<"values at memory location are:";
    for(int i=0;i<5;i++){
        ptr1->show();
        ptr1++;
    }
}