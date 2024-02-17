#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter a number:";
    cin>>n;
    int *p;
    p=new int[n];
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    cout<<"Elements at memory location are:";
    for(i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}