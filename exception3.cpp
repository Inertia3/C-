#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number:";
    cin>>x;
    try{
        if(x==1)
        throw x;
        else if(x==0)
        throw 'x';
        else
        throw 1.00;
    }
    catch(int x){
        cout<<"Integer caught:";
    }
    catch(char c){
        cout<<"Character caught:";
    }
    catch(double d){
        cout<<"Double cought:";
    }
}