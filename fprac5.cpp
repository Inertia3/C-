#include<iostream>
using namespace std;

void divide(int a, int b){
    try{
        if(b!=0){
            int d=a/b;
            cout<<"a/b="<<d;
        }
        else{
            throw b;
        }
    }
    catch(int i){
        throw;
    }
}
int main(){
    try{
        divide(10,0);
    }
    catch(int i){
        cout<<"Exception occured";
    }
}