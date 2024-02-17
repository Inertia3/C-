#include<iostream>
using namespace std;

void divide(int a,int b,int c){
    cout<<"We are inside function"<<endl;
    if(b-c!=0){
        int d=a/(b-c);
        cout<<"Result="<<d<<endl;
    }
    else{
        throw(b-c);
    }
}
int main(){
    try{
        cout<<"We are inside the try block"<<endl;
        //divide(10,30,20);
        divide(10,10,10);
    }
    catch(int i){
        cout<<"We are inside catch block"<<endl;
        cout<<"Exception Occured:";
    }
}