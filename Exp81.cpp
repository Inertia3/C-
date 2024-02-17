#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    try{
        if(b!=0){
            c=a/b;
            cout<<"a/b="<<c;
        }
        else{
            cout<<"Exception Occured"<<endl;
            throw b;
        }
    }
    catch(int x){
        cout<<"Exception caught b="<<x;
    }
}