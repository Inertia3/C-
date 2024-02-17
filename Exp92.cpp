#include<iostream>
using namespace std;

class dma{
    public:
    dma(){
        cout<<"Default constructer"<<endl;
    }
    ~dma(){
        cout<<"constructor destroyed"<<endl;
    }
};
int main(){
    int x;
    cout<<"Enter the blocks of memory required:";
    cin>>x;
    dma *ptr = new dma[x];
    delete []ptr;
}