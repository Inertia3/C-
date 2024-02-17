#include<iostream>
using namespace std;
 void divide(int a,int b){
    try{
        if(b==0){
            throw b;
        }
        else{
            cout<<"Result="<<a/b;
        }
    }
    catch(int){
        cout<<"(Inside Function)Exception occured"<<endl;
        throw;
    }
 }
 int main(){
    try{
        divide(10,0);
    }
    catch(int){
        cout<<"(Inside Main Function)Exception caught";
    }
 }