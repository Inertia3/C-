#include<iostream>
using namespace std;

class dma{
    int n;
    public:
    void get(){
        cin>>n;
    }
    void show(){
        cout<<" "<<n;
    }
};
int main(){
    dma d1,d2;
    dma* d=new dma[5];
    dma* d0=d;
    cout<<"Enter the values at memory location:";
    for(int i=0;i<5;i++){
        // d->get();
        (*d).get();
        d++;
    }
    // for(int i=0;i<5;i++){
    //     d--; 
    // }
    cout<<"values at memory location are:";
    for(int i=0;i<5;i++){
        d0->show();
        d0++;
    }
}