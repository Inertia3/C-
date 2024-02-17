#include<iostream>
using namespace std;

int main(){
    int a,b,x;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    x=a-b;
    try{
        if(x!=0){
            cout<<"Result="<<a/b<<endl;
        }
        else{
            throw(x);
        }
    }
    catch(int i){
        cout<<"Exception occured:"<<"x="<<x;
    }
}