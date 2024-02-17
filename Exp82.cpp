#include<iostream>
using namespace std;

int main(){
    int a=3;
    try{
        if(a==1){
            throw a;
        }
        else if(a==2){
            throw "E";
        }
        else if(a==3){
            throw 4.24234;
        }
    }
    catch(int x){
        cout<<"Integer exception caught:"<<endl;
    }
     catch(char x){
        cout<<"Character exception caught:"<<endl;
    }
     catch(double x){
        cout<<"Double exception caught:"<<endl;
    }
    cout<<"End of program:";
}