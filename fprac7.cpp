#include<iostream>
#include<fstream>
using namespace std;

void divide(int x,int y){
    try{
        if(y==0){
            throw y;
        }
        else{
            int c=x/y;
            cout<<"x/y="<<c;
        }
    }
    catch(int z){
        cout<<"Exception caught: y="<<y<<endl;
        throw;
    }
}
int main(){
    try{
        divide(10,0);
    }
    catch(int d)
    {
        cout<<"Exception handled in main function";
    }
}