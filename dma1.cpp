#include<iostream>
using namespace std;

int main(){
    // int a=4;
    // int *ptr=new int(5);
    // cout<<"a="<<a<<endl;
    // cout<<*ptr;
    int x;
    cout<<"Enter the required blockss of memory:";
    cin>>x;
    int *ptr=new int[x];
    cout<<"Enter the values at memory location:";
    for(int i=0;i<x;i++){
        cin>>ptr[i];
    }
    cout<<"values at memory location are:";
    for(int i=0;i<x;i++){
        cout<<" "<<ptr[i];
    }
    delete []ptr;
}