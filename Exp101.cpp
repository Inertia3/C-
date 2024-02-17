#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream f1,f2;
    f2.open("bbb.txt",ios::out);
    // f2<<"Sahil Ansari";
    f1.open("aaa.txt",ios::in);

    string s;
    while(f1.eof()==0){
        getline(f1,s);
        f2<<s<<endl;
        cout<<f1;
    }
    f1.close();
    f2.close();
}