#include<iostream>
using namespace std;

void try_fun(int x,int y){
    int a=x;
    int b=y;
    int c;
    try{
        if(b!=0){
            c=a/b;
            cout<<"c="<<b<<endl;
        }
        else{
            cout<<"Exception Occured:"<<endl;
            throw b;
        }
    }
    catch(int z){
        throw z;
    }
}
int main(){
    int p,q;
    cout<<"Enter two numbers:";
    cin>>p>>q;
    try{
        try_fun(p,q);
        throw;
    }
    catch(int b){
        cout<<"b="<<b;
    }
}