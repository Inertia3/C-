#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s1,s2;
    s1="My name is sahil Ansari \nI am a first year Computer science engineering student at Chandigarh University";
    ofstream out;
    out.open("abc.txt",ios::out);
    out<<s1;
    out.seekp(7);
    int x=out.tellp();
    cout<<"Position of input pointer="<<x<<endl;
    out.close();


    ifstream in;
    in.open("abc.txt",ios::in);
    while(in.eof()==0){
        getline(in,s2);
        cout<<s2<<endl;
    }
    in.seekg(5);
    int y=in.tellg();
    cout<<"Position of output pointer="<<y<<endl;
    in.close();
}